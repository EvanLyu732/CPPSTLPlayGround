#include <memory>
#include <iostream>

class A {

};

void f()
{
    std::unique_ptr<A> ptr(new A());
    std::unique_ptr<std::string> up(new std::string("nico"));
    std::string* sp = up.release();

    if (up) {
        std::cout << *up << std::endl;
    }

    // std::unique_ptr<std::string> down;
    // down.reset();

    //unique_ptr †o string
    std::unique_ptr<std::string> test_str(new std::string("test string"));
    (*test_str)[0] = 't';
    test_str->append("lai");
    std::cout << *test_str << std::endl;
}

int main()
{
    f();
}