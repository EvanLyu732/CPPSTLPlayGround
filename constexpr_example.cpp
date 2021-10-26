#include <iostream>

constexpr int plusplusone(int& x)
{
    return x++;
}

int main()
{
    constexpr int dmv = 17;  // constant
    int test_x = 0;
    int y = plusplusone(test_x);
    std::cout << "y is " << y << std::endl;
    return 0;
}