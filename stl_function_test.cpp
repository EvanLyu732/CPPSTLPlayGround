#include <functional>
#include <iostream>

int main()
{
    int x = 9;

    //store a lambda
    std::function<bool(int)> fn1 = [&](int x)-> bool{
        std::cout << "Cur x is " << x << std::endl;
        x++;
        std::cout << "Now x is " << x << std::endl;
    };

    fn1(x);
    std::cout << sizeof(fn1) << std::endl;
    return 0;
}