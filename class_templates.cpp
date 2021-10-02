#include <iostream>

class pair_int_char {
    public:
      int first;
      char second;
      pair_int_char(int x, char y): first(x), second(y) {}
};

template<typename T1, typename T2>
class pair{
    public:
        T1 first;
        T2 second;
        pair(T1 first, T2 y): first(x), second(y) {}
};

bool operator<(const pair<double, long>& x, const pair<double, long>& y)
{
    return x.first < y.first;
}

int main() 
{
    pair_int_char pairl(13, 'a');
    std::cout << pairl.first << std::endl;
    std::cout << pairl.second << std::endl;

    //use template
    pair<int, char> pairs(13, 'a');
    pair<bool, bool> pair6(false, true);
}