#include <utility>

class MyContainer{
    private:
        int* elems;
        int numElems;
    public:
        void swap(MyContainer& x) { 
            std::swap(elems, x.elems);
            std::swap(numElems, x.numElems);
        }
};

inline void swap(MyContainer& c1, MyContainer& c2)
    noexcept(noexcept(c1.swap(c2)))
{
    c1.swap(c2);
}


// namespace std {
//     namespace rel_ops {
//         template<typename T1, typename T2>
//         inline bool operator!=(const T1& x, const T2& y) {
//             return !(x == y);
//         }
//     }
// }