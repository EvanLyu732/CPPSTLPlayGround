// moudle: cpp 20 features

module;     // define a module

export module Vector; // define the module called Vector

export class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem; //elem points to sz doubles
        int sz;
};