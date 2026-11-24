#include <iostream>
using namespace std;

int main() {
    // encontrar el mayor de un arreglo de n elementos y guardarlo en la posicion n-1
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int arr[n];
    int *p = arr; // Pointer to the first element of the array
    for(int i = 0; i < n; i++) {
        *(p + i) = rand() % 100; // Assigning random values to the array elements
    }
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << "\t"; // Accessing array elements using pointer arithmetic
    }
    cout << endl;
    int mayor = *p;
    for (int i = 1; i < n; i++) {
        if (*(p + i) > mayor) {
            mayor = *(p + i);
        }
    }
    *(p + n - 1) = mayor;
    cout << "El mayor es: " << mayor << endl;

    for (int i = 0; i < n; i++) {
        cout << *(p + i) << "\t"; // Accessing array elements using pointer arithmetic
    }
    cout << endl;
    return 0;
}