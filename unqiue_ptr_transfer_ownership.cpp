#include <memory>
#include <string>

int main()
{
    std::string* sp = new std::string("hello");
    std::unique_ptr<std::string> p1(sp);
    std::unique_ptr<std::string> p2(std::move(p1));
    exit(0);
}