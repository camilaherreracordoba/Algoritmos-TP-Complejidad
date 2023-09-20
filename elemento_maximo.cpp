#include <iostream>
#include <vector>

using namespace std;

int encontrarMaximo(const vector<int>& vector) {
    int maximo = vector[0];

    for (size_t i = 1; i < vector.size(); i++) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        }
    }

    return maximo;
}

int main() {
    int n;

    cout << "Ingrese el numero de elementos del vector: ";
    cin >> n;

    vector<int> vector(n);

    cout << "Ingrese los elementos del vector, uno por uno:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vector[i];
    }

    int maximo = encontrarMaximo(vector);
    cout << "El máximo de los elementos del vector es: " << maximo << endl;

    return 0;
}

