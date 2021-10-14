#include <iostream>

void func (int x, int y);

auto l = [](int x, int y) {... };

class C {
    public: 
        void operator()(int x, int y) const;
        void memfunc (int x, int y) const;
};

int main()
{
    C c;
    std::shared_ptr<C> sp(new C);

    std::bind(func, 77, 33)();
    std::bind(C(), 77, 33)();

    exit(0);
}