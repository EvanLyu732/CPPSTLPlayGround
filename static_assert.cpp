#include <iostream>

constexpr double c = 2999.12;

void f(double speed)
{
    static_assert(c < 2999, "speed is greater than 2999, Too fast!!");
}

int main()
{
    f(c);
    exit(0);
}