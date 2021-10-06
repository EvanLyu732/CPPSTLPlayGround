#include <iostream>
#include <functional>

using namespace std;

void func(int a, int b, int c)
{
    cout << (a-b-c) << endl;
}

int main()
{
    using namespace std::placeholders;
    auto fn1 = bind(func, _1, 2, 3);
    auto fn2 = bind(func, 2, _1, 3);

    fn1(10);
    fn2(10);
    return 0;
}