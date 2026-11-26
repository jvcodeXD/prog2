#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int *p = &n;
    cout << "Value of n: " << n << endl;
    cout << "Address of n: " << p << endl;
    cout << "Value at address p: " << *p << endl;
    return 0;
}