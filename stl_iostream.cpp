#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

using namespace std; 

void f()
{
    cout << 10;
}

void g()
{
    int x {10};
    cout << x;
}

void h(int i)
{
    cout << "the value of s is ";
    cout << i;
    cout << '\n';
}

void h2(int i)
{
    cout << "the value of i is " << i << '\n';
}

void k()
{
    int b = 'b';
    char c = 'c';
    cout << 'a' << b << c;
}

void getFromTest()
{
    int i;
    double d;
    cin >> i >> d;
    cout << i << endl;
    cout << d << endl;
}

void getLineTest()
{
    cout << "Please enter your name";
    string str;
    getline(cin, str);
    cout << str;
}

// iostream state checking 
vector<int> read_ints(istream& is)
{
    vector<int> res;
    for (int i; is>>i;)
        res.push_back(i);
    return res;
}

// I/O of User-Defined Types
struct Entry {
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\"" << e.number << "}";
}


int main()
{
    Entry s;
    s.name = "guria";
    s.number = 3;
    cout << s << endl;
}