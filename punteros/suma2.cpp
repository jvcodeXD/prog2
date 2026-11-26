#include <iostream>
using namespace std;

int suma2(int &a) {
    a = a - 1;
    return a + 2;
}

int main() {
    int numero = 5;
    int result = suma2(numero);
    cout << "numero: " << numero << endl;
    cout << "resultado: " << result << endl;
    return 0;
}