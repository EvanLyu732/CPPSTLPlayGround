#include <functional>
#include <iostream>

char* makeBuf(char* testPtr) 
{
    std::string str{"testStr"};
    std::memcpy(testPtr, &str, sizeof(str));
    return testPtr;
}


int main()
{
    char* testPtr = new char[10];
    testPtr = makeBuf(testPtr);
    for (char c = *testPtr; c; c=*++testPtr) {
        std::cout << "c is: " << c << std::endl;
    }
    exit(0);
}