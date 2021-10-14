#include <iostream>
#include <thread>
#include <mutex>

extern std::recursive_mutex m;
extern int i = 10;

void func1(int& i) 
{
    std::lock_guard<std::recursive_mutex> glock(m);
    i = 11;
    std::cout << "In func1, i now is" << i << std::endl;
}

void func2(int& i) 
{
    std::lock_guard<std::recursive_mutex> glock(m);
    i = 12;
    std::cout << "In func2, i now is" << i << std::endl;
}

int main()
{
    // std::thread th1([](int i){func1(i);});
    // std::thread th2([](int i){func2(i);});
    // th1.join();
    // th2.join();
    return 0;
}