#include <type_traits>
#include <iostream>

template<typename T>
void foo (const T& val)
{
    if (std::is_pointer<T>::value) {
        std::cout << "foo() called for a pointer" << std::endl;
    } 
    else {
        std::cout << "foo() called for a value" << std::endl;
    }
}
