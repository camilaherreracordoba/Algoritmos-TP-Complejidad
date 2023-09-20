#include <iostream>
#include <vector>

using namespace std;

class NodoInt {
public:
    int elemento;
    NodoInt* siguiente;

    NodoInt(int valor) {
        elemento = valor;
        siguiente = nullptr;
    }
};

class ListaInt {
public:
    NodoInt* primero;

    ListaInt() {
        primero = nullptr;
    }

    void agregar(int valor) {
        NodoInt* nuevoNodo = new NodoInt(valor);
        if (!primero) {
            primero = nuevoNodo;
        } else {
            NodoInt* actual = primero;
            while (actual->siguiente) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevoNodo;
        }
    }

    void print() {
        NodoInt* actual = primero;
        while (actual) {
            cout << actual->elemento << " ";
            actual = actual->siguiente;
        }
        cout << endl;
    }

    void separarContiguosDivisibles() {
        NodoInt* actual = primero;

        while (actual && actual->siguiente) {
            int a = actual->elemento;
            int b = actual->siguiente->elemento;

            if (a % b == 0) {
                int cociente = a / b;
                NodoInt* nuevoNodo = new NodoInt(cociente);
                nuevoNodo->siguiente = actual->siguiente;
                actual->siguiente = nuevoNodo;
                actual = actual->siguiente->siguiente;
            } else {
                actual = actual->siguiente;
            }
        }
    }
};

int main() {
    ListaInt lista1;
    lista1.agregar(20);
    lista1.agregar(10);
    lista1.agregar(6);
    lista1.agregar(3);
    
    ListaInt lista2;
    lista2.agregar(20);
    lista2.agregar(10);
    lista2.agregar(2);
    lista2.agregar(3);
    ListaInt lista3;
    lista3.agregar(1);
    lista3.agregar(1);

    ListaInt lista4;
    lista4.agregar(50);
    lista4.agregar(5);

    cout << "Lista1 original: ";
    lista1.print();
    
    lista1.separarContiguosDivisibles();

    cout << "Lista1 modificada: ";
    lista1.print();

    cout << "Lista2 original: ";
    lista2.print();

    lista2.separarContiguosDivisibles();
    cout << "Lista2 modificada: ";
    lista2.print();

    cout << "Lista3 original: ";
    lista3.print();

    lista3.separarContiguosDivisibles();
    cout << "Lista3 modificada: ";
    lista3.print();

    cout << "Lista4 original: ";
    lista4.print();

    lista4.separarContiguosDivisibles();
    cout << "Lista4 modificada: ";
    lista4.print();
    
    return 0;
}
