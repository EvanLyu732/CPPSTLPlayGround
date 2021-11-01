class X {
    public:
        X (Sometype); //ordinary construtor
        X (); //default construtor
        X (const X&); // copy constructor
        X (X&&); //move constructor
        X& operator=(const X&); //copy assignment, clean up target and copy
        X& operator=(X&&); //move assignment, clean up target and move
        ~X(); //destructor
};


class Shape {
    public:
        Shape(const Shape&) =delete; //can be used to suppress any function
        Shape& operator=(const Shape&) =delete; //
};

// void copy(Shape& s1, const Shape& s2){};
