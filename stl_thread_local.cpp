#include <iostream>
#include <thread>

#ifdef __GNUG__
    __thread int reserve = 10;
#endif

// #ifdef __clang__
//     thread_local int reserve = 10;
// #endif

void f(int balance) 
{
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    reserve = reserve + balance;
    std::cout << "reserve now is " << reserve << std::endl;
}

void g()
{
    reserve ++;
    std::cout << "reserve now is " << reserve << std::endl;
}

int main()
{
    std::thread th1(f,3);
    std::thread th2(g);

    th1.join();
    th2.join();
    exit(0);
}
