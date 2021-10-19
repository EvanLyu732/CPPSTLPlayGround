#include <vector>

/// class with default arg
template<typename T1, typename container = std::vector<T>>
class MyClass;

/// member template
class MyClass2 {
    template <typename T>
    void f(T);
};
