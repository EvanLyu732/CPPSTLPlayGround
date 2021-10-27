// #include <memory>

// void sink(std::unqiue_ptr<Class A> ptr)  ----> sink get ownership()
// {
//     ...
// }

// std::unqiue_ptr<Class A> up;
// sink(std::move(up));

// std::unique_ptr<Class A> source()
// {
//     std::unique_ptr<Class A> ptr(new Class A); // ptr now owned the object
//     return ptr;
// }

// void g()
// {
//     std::unique_ptr<Class A> p;
//     for (int i = 0; i <10; ++i) {
//         p = source(); // p get ownerhsip of the return object
//     }
// }