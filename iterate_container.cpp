#include <iostream>
#include <string>
#include <iostream>

using std::string;
using std::cout;

template<typename T>
class Vector {
    private:
        T* elem; //elem point to an array of sz elements
        int sz;
    public:
        explicit Vector(int s); //constructor
        ~Vector() { delete[] elem;} //release resources

        T& operator[](int i);
        const T& operator[](int i) const; //for const vectors
        int size() const {return sz;}
};

template<typename T>
Vector<T>::Vector(int s)
{
    if (s<0)
        throw Negative_size{};
    elem = new T[s];
    sz = s;
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{ 
    if (i<0 || size() <= i)
        throw out_of_range("Vector::operator[]");
    return elem[i];
}

template<typename T>
T* begin(Vector<T>& x)
{
    return x.size() ? &x[0]:nullptr;
}

template<typename T>
T* end(Vector<T>& x)
{
    return x.size() ? &x[0]+x.size():nullptr;
}

template<typename T>
class Vector
{
    private:
        T* elem;
        int sz;
};


// constrain template
template<Element T>
class Vector
{
    private:
        T* elem;
        int sz;
};

// template take value arguments
template<typename T, int N>
struct Buffer {
    using value_type = T;
    constexpr int size() {return N; }
    T[N];
};

// template deduction guide
// template <typename T>
// class Vector2 {
//     public:
//         using value_type = T;
//         Vector2(initializer_list<T);

//         template<typename T>
//             Vector(Iter b, Iter e);
// };

// template<typename Iter>
//     Vector2(Iter, Iter)-> Vector2(typename Iter::value_type)
// {

// }

void write(const Vector<string>& vs)
{
    for (int i=0; i!=vs.size(); ++i)
        cout << vs[i] << '\n';
}

void f2(Vector<string>& vs)
{
    for (auto& s : vs)
        cout << s << '\n';
}

int main()
{
    char c[50] = {};
    for (size_t i=0; i<c.size(); ++i) {
        c[i] = 0;
    }

    for (auto p = c.begin(); p != c.end(); ++p) { 
        *p = 0;
    }

    for (auto& x : c)
        x = 0;
    exit(0);
}