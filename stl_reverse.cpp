#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

int main()
{
    //reverse with string
    cout << "Using reverse algorithm with a string" << endl;
    string string1 = "mark twain";
    reverse(string1.begin(), string1.end());
    assert(string1 == "niawt kram");
    cout << " --- Ok. " << endl;

    //reverse with char array
    cout<<"Using reverse algorithm with an array" << endl;
    char array1[] = "mark twain";
    int N1 = strlen(array1);
    cout << "N1 is " << N1 << endl;
    reverse(&array1[0], &array1[N1]);
    assert(string(array1) == "niawt kram");
    cout << " --- Ok. " << endl;

    //reverse with vector
    // cout<<"Using reverse algorithm with a vector"<<endl;
    // vector<char> vector1=make<vector<char>>("mark twain");
    // reverse(vector1.begin(),vector1.end());
    // assert(vector1==make< vector<char> >("niawt kram"));
    // cout<<"---Ok."<<endl;

    //reverse with list
    // cout << "Demonstrating generic reverse algorithm on a list" << endl;
    // list<char> list1 = make<list<char>>("mark twain");
    // reverse(list1.begin(), list1.end());
    // assert(list1 == make< list<char> >("niawt kram"));
    
    return 0;
}