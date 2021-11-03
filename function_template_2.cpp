#include <vector>
#include <memory>
#include <iostream>
#include <string>

using std::vector;
using std::unique_ptr;
using std::cin;

template<typename Sequence, typename Value>
Value sum(const Sequence& s, Value v)
{
    for (auto x : x)
        v+=x;
    return v;
}

// function template
template<typename T>
class Less_than {
    const T val;
public:
    Less_than (const T& v) :val{v} {}
    bool operator() (const T& x) const { return x<val;}
};


template<typename C, typename Oper>
void for_all(C& c, Oper op)
{
    for (auto& x : c)
        op(x);
}


//generic lambda
template<class S>
void rotate_and_draw(vector<S>& v, int r)
{
    for_all(v, [](auto& s) {s->rotate(r); s->draw();});
}

//lambda as initializer
vector<int> x = [&] {
    switch (m) {
        case zero:
            return vector<int>(n);
        case seq:
            return vector<int>(p,q);
        case cpy:
            return arg;
    }
};

//alias in template
template<typename T>
class Vector {
    public:
        using value_type = T;
};

template<typename C>
using Value_type = typename C::value_type;

template<typename Container>
void algo(Container& c)
{
    Vector<Value_type<Container>> vec;
}

template<typename Key, typename Value>
class Map {
    //...
};

template<typename Value>
using String_map = Map<std::string, Value>;

String_map<int> v;

class Shape{
    int size;
public:
    Shape (int v) :size{v}{}
    virtual void draw()=0;
    virtual void rotate()=0;
};

void user2()
{
    vector<unique_ptr<Shape>> v;
    while (cin) {
        v.push_back(unique_ptr<Shape>())
    }
    
    for_all(v, [](unique_ptr<Shape>& ps){ps->draw();};
    for_all(v, [](unique_ptr<Shape>& ps){ps->rotate();};
}
