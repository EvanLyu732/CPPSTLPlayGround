#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ofstream testFile;
    testFile.open ("test");
    testFile << "writing test to the file";
    testFile.close();
    return 0;
}

