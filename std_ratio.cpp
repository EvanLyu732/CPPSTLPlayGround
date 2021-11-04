#include <ratio>
#include <iostream>

using namespace std;

int main()
{
    typedef ratio<5,3> FiveThirdsRatio;
    cout << FiveThirds::num << "/" << FiveThirds::den << endl;
}