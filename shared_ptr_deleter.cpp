#include <memory>

std::shared_ptr<X> global;

void foo()
{
    std::shared_ptr<X> local{new X};
    std::atomic_store(&global, local);
}

int main()
{
    auto del = [](int* p) { delete p;};
    std::shared_ptr<int> p(new int, del);
    decltype(del)* pd = std::get_deleter<decltype(del)>(p);
}