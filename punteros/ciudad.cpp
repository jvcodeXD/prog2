#include <iostream>
using namespace std;
// int, float, bool, char 
// string, vector, list, map, set
struct Country {
    string nombre;
    string region;
};

struct City {
    string nombre;
    int codigo;
    Country pais;
};

int main() {
    City oruro;
    oruro.nombre = "Oruro";
    oruro.codigo = 1;
    oruro.pais.nombre = "Bolivia";
    oruro.pais.region = "America del Sur";
    return 0;
}