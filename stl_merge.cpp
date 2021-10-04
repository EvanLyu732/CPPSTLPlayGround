#include <iostream>
#include <cassert>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Demonstrating generic merge algorithm with"  << "an array, a list, and a deque." << endl;
    char s[] = "aeiou";
    int len = strlen(s);
    list<char> list1 {'b'};

    deque<char> deque1(26,'x');
    merge(&s[0], &s[len], list1.begin(), list1.end(), deque1.begin());

    for(auto c : deque1) {
        cout << "c" << endl;
    }
    return 0;
}