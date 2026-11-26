#include <iostream>
using namespace std;

class Vehiculo {
    protected:
        string placa;
        string color;
    public: 
        // constructor
        Vehiculo() {
            placa = "-";
            color = "Plomo";
        }
        Vehiculo(string placa, string color) {
            this->placa = placa;
            this->color = color;
        }

        // getters y setters
        string getPlaca() {
            return placa;
        }
        string getColor() {
            return color;
        }

        void setPlaca(string placa) {
            this->placa = placa;
        }
        void setColor(string color) {
            this->color = color;
        }
};

class Camioneta : public Vehiculo {
    public: 
        void verDatos() {
            cout << "La placa de la camioneta es: " << placa << endl;
            cout << "El color de la camioneta es: " << color << endl;
        }
};

int main() {
    Vehiculo v1;
    Vehiculo v2("ABC123", "Rojo");
    Camioneta c1;
    c1.setColor("Azul");
    cout << "El color de la camioneta es: " << c1.getColor() << endl;
    c1.verDatos();
    cout << "La placa del vehiculo 1 es: " << v1.getPlaca() << endl;
    cout << "El color del vehiculo 1 es: " << v1.getColor() << endl;
    cout << "La placa del vehiculo 2 es: " << v2.getPlaca() << endl;
    cout << "El color del vehiculo 2 es: " << v2.getColor() << endl;
    string placa, color;
    cout << "Ingrese la placa del vehiculo: ";
    cin >> placa;
    cout << "Ingrese el color del vehiculo: ";
    cin >> color;
    v1.setPlaca(placa);
    v1.setColor(color);
    cout << "La placa del vehiculo 1 es: " << v1.getPlaca() << endl;
    cout << "El color del vehiculo 1 es: " << v1.getColor() << endl;
    return 0;
}