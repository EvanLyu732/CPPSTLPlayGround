#include <iostream>

int intmax(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}


template<typename T>
T max(T x, T y)
{
    if (x < y)
        return y;
    else
        return x;
}


int main()
{
    int u=3, v=4;
    double d=4.7;
    std::cout << max(u,v) << std::endl;
    std::cout << max(d, 9.3) << std::endl;
}