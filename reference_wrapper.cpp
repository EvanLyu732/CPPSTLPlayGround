// function type wrapper

#include <functional>
#include <vector>

using std::function;
using std::vector;

void func (int x, int y);

void test() 
{
    vector<function<void(int,int)>> tasks;
    tasks.push_back(func);
    tasks.push_back([](int x, int y) { 
                        ...
                });
}