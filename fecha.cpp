#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

Fecha f;
int x;

int abc(){
    cout << x << endl;
    cout << f.dia << endl;
    cout << f.mes << endl;
    cout << f.anio << endl;
}

int main() {
    Fecha f1;
    f1.dia = 15;
    f.dia = 23;
    f.mes = 3;
    f.anio = 2023;
    return 0;
}
