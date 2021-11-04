//template require concepts
template<typename Seq, typename Num>
Num sum(Seq s, Num v)
{
    for (const auto& x : s)
        v+=x;
    return v;
}

// template<typename Seq, typename Num>
//     requires Sequence<Seq> && Number<Num> && Arithmetic<Value_type<Seq>, Num>
// Num sum(Seq s, Num n);

template<Forward_iterator Iter>
void advance(Iter p, int n)
{
    for (--n)
        ++p;
}


template<typename T>
concept Equality_comparable =
    requires (T a, T b) {
        { a==b } -> bool;
        { a!=b } -> bool;
    };


template<typename T, typename T2 =T>
concept Equality_comparable =
    requires (T a, T2 b) {
        { a==b } -> bool;
        { a!=b } -> bool;
        { b==a } -> bool;
        { b!=a } -> bool;
    };

#include <string>

static_assert(Equality_comparable<int, double>);
static_assert(Equality_comparable<int>);
static_assert(Equality_comparable<int,std::string>);

template<typename S>
concept Sequence = requires(S a) {
    typename Value_type<S>; // S must have a value
    typename Iterator_type<S>; //S must has an iterator type

    { begin(a) } -> Iterator_type<S>;  //begin a return iterator
    { end(a) } -> Iterator_type<S>; //end(a) return iterator
};

#include <vector>

using std::vector;

// abstraction process
double sum(const vector<int>& v) 
{
    double sum = 0;
    for (auto x : v)
        res += x;
    return res;
}

template<typename Iter, typename Val>
Val accumulate(Iter first, Iter last, Val res)
{
    for (auto p=first; p!=last; ++p) { 
        res += *p;
    }
    return res;
}

template<Range R, Number Val>
Val accumulate(R r, Val res = 0)
{
    for (auto p = begin(r); p!=end(r); ++p)
        res += *p;
    return res;
}

#include <iostream>

using std::cout;

template<typename T, typename ... Tail>
void print(T head, Tail... tail)
{
    cout << head << ' ';
    if constexpr (sizeof...(tail) > 0)
        print(taill...);
}

//C++17 fold expressions
template<Number... T>
int sum(T... v)
{
    return (v+...+0); //add all elements starting with 0
}

template<typename... T>
int sum2(T... v)
{
    return (0 + ... + v); // all all elements of v to 0
}