#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* sig;

    Nodo() {
        dato = 0;
        sig = NULL;
    }
    Nodo(int dato) {
        this->dato = dato;
        sig = NULL;
    }
};

bool esPrimo(int numero) {
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

class Lista {
    private: 
        Nodo *raiz;
        Nodo x;
    public: 
        Lista() {
            raiz = NULL;
        }
        Nodo *getRaiz() {
            return raiz;
        }
        void insertar(int dato) {
            Nodo *nuevo = new Nodo(dato);
            if (raiz == NULL) {
                raiz = nuevo;
            }
            else {
                Nodo *ptr = raiz;
                while (ptr->sig != NULL) {
                    ptr = ptr->sig;
                }
                ptr->sig = nuevo;
            }
        }
        void insertarOrdenado(int dato) {
            Nodo *nuevo = new Nodo(dato);
            if(raiz == NULL) {
                raiz = nuevo;
            }
            else {
                Nodo *ptr = raiz;
                Nodo *aux = raiz;
                while(ptr != NULL && ptr->dato < dato) {
                    aux = ptr;
                    ptr = ptr->sig;
                }
                if(ptr == aux) {
                    nuevo->sig = raiz;
                    raiz = nuevo;
                }
                else {
                    aux->sig = nuevo;
                    nuevo->sig = ptr;
                }
            }
        }
        void mostrar() {
            Nodo *ptr = raiz;
            while (ptr != NULL) {
                cout << ptr->dato << ", ";
                ptr = ptr->sig;
            }
            cout << endl;
        }
        void mostrarPrimos() {
            Nodo *ptr = raiz;
            while (ptr != NULL) {
                if(esPrimo(ptr->dato))
                    cout << ptr->dato << ", ";
                ptr = ptr->sig;
            }
            cout << endl;
        }
};



bool existe(Lista lista, int dato) {
    Nodo *ptr = lista.getRaiz();
    while(ptr != NULL) {
        if(ptr->dato == dato) {
            return true;
        }
        ptr = ptr->sig;
    }
    return false;
}

int ejercicio(Lista lista) {
    int cantidad = 0;
    Nodo *ptr = lista.getRaiz();
    Lista noRepetidos;
    while(ptr != NULL) {
        if(!existe(noRepetidos, ptr->dato)) {
            noRepetidos.insertar(ptr->dato);
            cantidad++;
        }
        ptr = ptr->sig;
    }
    return cantidad;
}

int main () {
    Lista lista;
    lista.insertar(5);
    lista.insertar(3);
    lista.insertar(7);
    lista.insertar(12);
    lista.insertar(1);
    lista.insertar(9);
    lista.insertar(3);
    lista.insertar(5);
    lista.insertar(3);
    lista.insertar(7);
    lista.insertar(12);
    lista.mostrar();

    int cantidad = ejercicio(lista);
    cout << "Cantidad de elementos diferentes: " << cantidad << endl;
    return 0;
}