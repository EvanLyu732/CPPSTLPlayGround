#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int x[5] = {2,3,5,7,11};
    vector<int> vector1(&x[0], &x[4]);

    int sum = accumulate(vector1.begin(), vector1.end(), 0);
    assert(sum==20);
    std::cout << " --- OK. " << std::endl;
    return 0;
}