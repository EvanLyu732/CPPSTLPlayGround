#include <string>
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// define a delete 
void definePNicoDeleter(vector<shared_ptr<string>> shared_ptr_vec) 
{
    shared_ptr<string> pNico(new string("nico"), [](string* p) { 
                                                    cout << "delete " << *p << endl;
                                                    delete p;
                                                });
    pNico = nullptr;
    shared_ptr_vec.resize(2);
}


void testDefault()
{
    std::shared_ptr<int> p(new int[10], std::default_delete<int[]>());
    std::unique_ptr<int, void(*)(int*)> p2(new int[10], [](int* p) { delete[] p;});
    return;
}


int main()
{
    shared_ptr<string> pNico(new string("nico"));
    shared_ptr<string> pJutta(new string("jutta"));

    (*pNico)[0]='N';
    pJutta->replace(0,1,"J");

    vector<shared_ptr<string>> whoMadeCoffee;
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);

    for (auto ptr : whoMadeCoffee) {
        cout << *ptr << " ";
    }
    cout << endl;

    *pNico = "nocolai";

    for (auto ptr : whoMadeCoffee) {
        cout << *ptr << " ";
    }
    cout << endl;

    cout << "use_counts: " << whoMadeCoffee[0].use_count() << endl;
    definePNicoDeleter(whoMadeCoffee);

    exit(0);
}