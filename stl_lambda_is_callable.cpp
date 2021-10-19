#include <functional>
#include <iostream>
#include <chrono>
#include <thread>

using test_call = std::function<bool(int)>;


void running_loop(test_call callback)
{
    int x = 2;
    if (callback == nullptr) {
        std::cout << "lambda callback is nullptr" << std::endl;
    } else {
        callback(x);
        std::cout << "callback successful" << std::endl;
    }
}


int main()
{
    while (1) {
        int x = 3;

        const auto result = [](int x) -> bool { 
            std::cout << "x is " << x << " into the lambda" << std::endl;
            if (x == 0) { return true; }
        };
        running_loop(result);
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    exit(0);
}