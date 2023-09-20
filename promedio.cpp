#include <iostream>
#include <vector>

using namespace std;

double calcularPromedio(const vector<int>& vector) {
    int n = vector.size();

    if (n == 0) {
        cerr << "error" << endl;
        return 0.0;
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += vector[i];
    }

    double promedio = static_cast<double>(suma) / n;

    return promedio;
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

    double promedio = calcularPromedio(vector);
    cout << "El promedio de los elementos del vector es: " << promedio << endl;

    return 0;
}
