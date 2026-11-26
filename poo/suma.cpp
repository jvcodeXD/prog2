#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int suma(float a, float b) {
    return a + b;
}

int suma(int a, int b, int c) {
    return a + b + c;
}

int suma(int a) {
    return a + 10;
}

int suma() {
    return 0;
}

int main() {
    int resultado1 = suma(5, 10);
    int resultado3 = suma(5);
    int resultado4 = suma();
    cout << "Resultado de suma(5, 10): " << resultado1 << endl;
    cout << "Resultado de suma(5): " << resultado3 << endl;
    cout << "Resultado de suma(): " << resultado4 << endl;
    return 0;
}