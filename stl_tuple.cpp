#include <iostream>
#include <tuple>
#include <utility>

using namespace std;

class Foo {
    public:
        Foo (tuple<int, float>) {
            cout << "Foo::Foo(tuple)" << endl;
        }
        template <typename... Args>
        Foo (Args... args) {
            cout << "Foo::Foo(args...)" << endl;
        }
};

void f(std::pair<int, const char*>);

int main() 
{
    tuple<int, float> t(1, 2.22);
    pair<int, Foo> p1 (42, t);

    // (use make pair to call function)
    // f(std::make_pair(32, "empty"));
    // (use initializer list to pass to function)
    // f({42,"empty"});

    // std::make_pair(42, "str");

    // not all types can be moved more efficiently than copied, for some type it makes sense to disable both copying && moving 
    pair<int, Foo> p2 (piecewise_construct, make_tuple(42), t);
    exit(0);
}