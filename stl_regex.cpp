#include <regex>
#include <iostream>

using std::regex;

regex pat {R"(\w{2})"};

// void test() 
// {
//     int lineno = 0;
//     for (string line; getline(cin, line); ) {
//         ++ lineno;
//         smatch matches; 
//         if (regex_search(line,matches,pat)
//             std::cout << lineno << ": " << matches[0] << '\n';
//     }
// }


// regex iterator
void test() 
{
    std::string input = "aa as; asd ++ "
    regex pat {R" (\s+(\w+))"};
    for (std::sregex_iterator p(input.begin(), input.end(), pat); p != sregex_iterator(); ++p) { 
        std::cout << (*p)[1] << '\n';
    }
}

int main()
{
    // regex_match();
    // regex_search();
    // regex_replace();

}