#include <iostream>
using namespace std;

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int *p = v; // Pointer to the first element of the array
    for(int i = 0; i < 5; i++) {
        cout << "Value at index " << i << ": " << *(p + i) << endl; // Accessing array elements using pointer arithmetic
    }
    return 0;
}