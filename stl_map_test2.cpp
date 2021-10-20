#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> test_map;
    std::map<std::string, int>::iterator it;

    test_map.insert({"a", 50});
    test_map.insert({"b", 90});
    test_map.insert({"c", 99});

    // it = test_map.find("b");
    // for (auto const& elem: test_map) 
    // {
    //     std::cout << "cur key is : " << elem.first << " cur value is: " << elem.second << std::endl; 
    //     if (elem.first == "b") {
    //         test_map.erase(elem.first);
    //     }
    // }

    int i =0; 
    for (auto it = test_map.begin(); it != test_map.end(); ) {
        std::cout << "This is the " << i << " times into the loop...." << std::endl;

        if (it->first == "b") {
            test_map.erase(it++);
            std::cout << "cur key is : " << it->first << " cur value is: " << it->second << std::endl; 
            i++;
        } else {
            std::cout << "cur key is : " << it->first << " cur value is: " << it->second << std::endl; 
            ++it;
            i++;
        }
    }

    exit(0);
}