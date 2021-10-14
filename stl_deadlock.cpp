//deadlock example
#include <thread>
#include <mutex>
#include <cstdio>

int main()
{
    std::mutex m1;
    std::mutex m2;
    std::thread t1([&m1, &m2]{
        printf("t1 get m1");
        m1.lock();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        printf("t1 get m2");
        m2.lock();
        m1.unlock();
        m2.unlock();
    });
    std::thread t2([&m1, &m2]{
        printf("t2 get m1");
        m2.lock();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        printf("t2 get m1");
        m1.lock();
        m2.unlock();
        m1.unlock();
    });
    t1.join();
    t2.join();
}