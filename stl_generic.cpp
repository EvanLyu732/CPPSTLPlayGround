#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Demonstrating generic algorithm" << endl;
    char s[]="C++ is a better C";
    int len=strlen(s);

    //where = find(first, last, value);
    const char* where = find(&s[0], &s[len], 'e');
    assert(*where == 'e' && *(where+1) == 't');
    cout<< " --- Ok. " <<endl;
    return 0;
}