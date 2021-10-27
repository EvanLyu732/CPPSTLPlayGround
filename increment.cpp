#include <iostream>
#include <vector>
#include <memory>

using std::cout;
using std::endl;

int increment(int* i)
{
    std::vector<int> incrementArray;
    while (*i != 0) {
        incrementArray.push_back(*i);
        i++;
    }

    for (const auto& val : incrementArray) {
        std::cout << val << std::endl;
    }
}

int main()
{
    int test_array[]{3,1,2,3,4,5,6,7};
    int* array_ptr = &test_array[0];
    increment(array_ptr);
    exit(0);
}