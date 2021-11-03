#include <functional>

template <typename T>
void foo (T val);

int main()
{
    int x;
    // now x is T&
    foo (std::ref(x));

    // now x is const T&
    foo (std::cref(x));

}