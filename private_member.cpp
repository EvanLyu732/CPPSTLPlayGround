#include <iostream>

using std::cin;

class Vector {
    public: 
        Vector(int s) :elem{new double[s]}, sz{s} {}
        double& operator[](int i) {return elem[i];}
        int size() {return sz;}
    private:
        double* elem; // pointer to elem
        int sz; // the number of elements in the vector
};


double read_and_sum(int s)
{
    Vector v(6);
    for (int i=0 ; i!=v.size(); ++i)
        cin>>v[i];

    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i];
    return sum;
}

int main() 
{
    Vector v(6);
    exit(0);
}