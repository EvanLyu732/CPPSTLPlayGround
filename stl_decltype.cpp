#include <map>
#include <string>
#include <iostream>

// template <typename T1, typename T2>
// decltype(x+y) add(T1 x, T2 y);

template <typename T1, typename T2>
auto add(T1 x, T2 y) -> decltype(x+y);

int main()
{
    std::map<std::string, float> coll;
    std::string str;
    decltype(str) str2;
    str2 = "This is a string";
    std::cout << str2 << std::endl;
    return 0;
}