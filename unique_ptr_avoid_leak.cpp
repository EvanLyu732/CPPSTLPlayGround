// class ClassB {
//     private:
//         ClassA* ptr1;
//         ClassA* ptr2;
//     public:
//         ClassB (int val1, int val2): ptr1(new ClassA(val1)), ptr2(new ClassA(val2)) {}

//         ClassB (const ClassB& x) : ptr1(new ClassA(*x.ptr1)), ptr2(new ClassA(*x.ptr2)) {}

//         const ClassB& operator= (const ClassB& x) { 
//             *ptr1 = *x.ptr1;
//             *ptr2 = *x.ptr2;
//             return *this; 
//         }

//         ~ClassB() {
//             delete ptr1;
//             delete ptr2;
//         }
// };

#include <memory>

class ClassA{
    public:
        ClassA(int x){
            value = x;
        };
    private:
        int value;
};


class ClassB {
    private:
        std::unique_ptr<ClassA> ptr1;
        std::unique_ptr<ClassA> ptr2;
    public:
        ClassB (int val1, int val2): ptr1(new ClassA(val1)), ptr2(new ClassA(val2)) {}

        ClassB (const ClassB& x): ptr1(new ClassA(*x.ptr1)), ptr2(new ClassA(*x.ptr2)) {
        }

        const ClassB& operator= (const ClassB& x) {
            *ptr1 = *x.ptr1;
            *ptr2 = *x.ptr2;
            return *this;
        }
}