# Complejidad Algorítmica

Calcule, indicando en cada paso la cantidad de operaciones, la complejidad de los 
siguientes algoritmos:

### Ejercicio 1

```cpp
j=j-2; // 2
i=j*12; // 2
printf("%d\n",i); // 2
```

> Complejidad: O(1) (constante)

### Ejercicio 2
    
```cpp
Scanner leer = new Scanner(System. in); // 2
int n = leer.nextInt(), c = 0; // 3
while (n-- > 0) // n + 1
{
c++; // 2
int res = 0; /**leemos rangos**/ // 1
int b = leer.nextInt(); // 2
for (int a = 0; i <= b; i++) // 1 + 2b
if (i % 2 == 1) // 2
res = res + i; // 2
System. out .printf( "Case %d: %d\n" , c, res); // 2
}
```

> Complejidad: O(n) (lineal)

### Ejercicio 3

```cpp
for (i = 0; i < n; i++) // n2 + 1 
 printf("%d\n",i); // 1
i=0; // 1 
while (i<n) // n + 1 
{ 
 printf("%d\n", i); // 1
 i++; // 2
}
```
> 2n2 + 6 operaciones

> Complejidad: O(n) (lineal)

### Ejercicio 4

```cpp
for (i = 0; i < n; i++) { // n2 + 1
 for (j = 0; j < n; j++)  // n2 + 1
    printf("%d\n",i+j); // 1
}
i=0; // 1
while (i<10) { // 11
 // begin B 
 j=0; // 1
 while (j<n) { // n + 1
    printf("%d\n",i+j); // 1 
    j++; // 2
 }
 i++; // 2
}
```

> Complejidad: O(n2) (cuadrática)

### Ejercicio 5

```cpp
double calcularPromedio(const vector<int>& vector) {
    int n = vector.size();

    if (n == 0) { // 1
        cerr << "error" << endl;
        return 0.0; // 1
    }

    int suma = 0; // 1
    for (int i = 0; i < n; i++) { // n2 + 1
        suma += vector[i]; // 2
    }

    double promedio = static_cast<double>(suma) / n; // 3

    return promedio;
}
```
> Complejidad: O(n) (lineal)

### Ejercicio 6

```cpp
int encontrarMaximo(const vector<int>& vector) {
    int maximo = vector[0]; // 1

    for (size_t i = 1; i < vector.size(); i++) { // n2 + 1
        if (vector[i] > maximo) { // 1
            maximo = vector[i]; // 1
        }
    }

    return maximo; // 1
}
```

> Complejidad: O(n) (lineal)

### Ejercicio 7

```cpp
void separarContiguosDivisibles() {
        NodoInt* actual = primero; // 1

        while (actual && actual->siguiente) { // n2 + 1
            int a = actual->elemento; // 1
            int b = actual->siguiente->elemento; // 1

            if (a % b == 0) { // 2
                int cociente = a / b; // 2
                NodoInt* nuevoNodo = new NodoInt(cociente); // 2
                nuevoNodo->siguiente = actual->siguiente; // 1
                actual->siguiente = nuevoNodo; // 1
                actual = actual->siguiente->siguiente; // 1
            } else {
                actual = actual->siguiente; // 1
            }
        }
    }
```

> Complejidad: O(n) (lineal)
