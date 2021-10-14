#include <list>
#include <mutex>
#include <algorithm>
#include <thread>
#include <iostream>

std::list<int> some_list;
std::mutex some_mutex;

void print(std::string msg) 
{
    std::cout << msg << std::endl;
}

void add_to_list(int new_value) 
{
    std::lock_guard<std::mutex> guard(some_mutex);
    std::this_thread::sleep_for(std::chrono::seconds(10));
    print("valued has been add to list");
    some_list.push_back(new_value);
}

bool list_contains(int value_to_find) 
{
    std::lock_guard<std::mutex> guard(some_mutex);
    print("in function list contain");
    return std::find(some_list.begin(), some_list.end(), value_to_find)
        != some_list.end();
}

int main()
{
    std::thread add_th(add_to_list, 2);
    std::thread contain_th(list_contains, 2);
    add_th.join();
    contain_th.join();
    return 0;
}