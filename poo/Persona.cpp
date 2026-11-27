#include<iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
    Fecha() {
        dia = 1;
        mes = 1;
        anio = 2000;
    }
    Fecha(int dia, int mes, int anio) {
        this->dia = dia;
        this->mes = mes;
        this->anio = anio;
    }
};

class Persona {
    protected:
        string nombre;
        int ci;
        Fecha fechaNacimiento;
    public:
        Persona() {
            nombre = "-";
            ci = 0;
            fechaNacimiento = Fecha();
        }
        // getters 
        string getNombre() {
            return nombre;
        }
        int getCi() {
            return ci;
        }
        Fecha getFechaNacimiento() {
            return fechaNacimiento;
        }
        // setters
        void setNombre(string nombre) {
            this->nombre = nombre;
        }
        void setCi(int ci) {
            this->ci = ci;
        }
        void setFechaNacimiento(Fecha fechaNacimiento) {
            this->fechaNacimiento = fechaNacimiento;
        }
        void verDatos() {
            cout << "Nombre: " << nombre << endl;
            cout << "CI: " << ci << endl;
            cout << "Fecha de nacimiento: " << fechaNacimiento.dia << "/" << fechaNacimiento.mes << "/" << fechaNacimiento.anio << endl;
        }
};

class Estudiante : public Persona {
    private:
        string carrera;
        int semestre;
    public:
        Estudiante() {
            carrera = "-";
            semestre = 0;
        }
        // getters y setters
        string getCarrera() {
            return carrera;
        }
        void setCarrera(string carrera) {
            this->carrera = carrera;
        }
        int getSemestre() {
            return semestre;
        }
        void setSemestre(int semestre) {
            this->semestre = semestre;
        }
        void verDatos() {
            Persona::verDatos();
            cout << "Carrera: " << carrera << endl;
            cout << "Semestre: " << semestre << endl;
        }
};

int main() {

    return 0;
}