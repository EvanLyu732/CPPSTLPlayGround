#include <cstddef>
#include <exception>

std::exception eptr;

void foo() 
{
    try {
        throw ...;
    }
    catch (...) {
        eptr = std;:current_exception();  //save exception for later use
    }
}

void bar() 
{
    if (eptr != nullptr) {
        std::rethrow_exception(eptr); //process saved exception
    }
}