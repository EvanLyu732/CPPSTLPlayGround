#include <utility>
#include <string>
#include <iostream>

int main()
{
    std::pair<std::string, int> student1("alice", 20);
    std::pair<std::string, int> student2("bob", 50);

    //access pair elements
    const auto& student1_name = student1.first;
    const auto& student1_score = student1.second;

    //another way to get value
    const auto& student1_name_by_get = std::get<0>(student1);

    std::cout << "The name of student1 is " << student1_name << std::endl;
    std::cout << "The score of student1 is " << student1_score << std::endl;
    std::cout << "(Access by get) The name of student1 is " << student1_name << std::endl;
    exit(0);
}