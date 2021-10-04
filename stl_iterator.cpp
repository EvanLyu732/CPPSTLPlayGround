#include <vector>
#include <iostream>

using namespace std;

template<typename T>
void print(const vector<T>& v)
{
    for (vector<T>::const_iterator it = v.begin(); it != v.end(); ++it) {
        cout << *i << endl;
    }
}

int main()
{
    //for normal vector, both methods can be done
    vector<int> vector1;
    vector<int>::iterator i = vector1.begin();
    vector<int>::const_iterator j = vector1.begin();

    //if the vector is constant, then it should be done like this
    const vector<int> vector2(100, 0);
    // vector<int>::iterator i = vector2.begin(); //not allowed
    vector<int>::const_iterator j = vector2.begin();
}
