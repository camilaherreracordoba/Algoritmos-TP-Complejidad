# Complejidad Algorítmica

Calcule, indicando en cada paso la cantidad de operaciones, la complejidad de los 
siguientes algoritmos:

### Ejercicio 1

```cpp
j=j-2; // 2
i=j*12; // 2
printf("%d\n",i); // 1
```

> Complejidad: O(1) (constante)

### Ejercicio 2
    
```cpp
Scanner leer = new Scanner(System. in); // 1
int n = leer.nextInt(), c = 0; // 3
while (n-- > 0) // n + 1
{
c++; // 2n
int res = 0; /**leemos rangos**/ // 1n
int b = leer.nextInt(); // 1n
for (int a = 0; i <= b; i++) // 1 + 2b
if (i % 2 == 1){ // 2b
res = res + i; // 2b
} 
System. out .printf( "Case %d: %d\n" , c, res); // 2n
}
```
> T(n) = 1 + 3 + n(2 + 1 + 1 + 1 + 2 + b(2 + 2))
>
>  T(n) = 4 + n(7 + 4b) = 4 + 7n + 4nb

> Complejidad: O(n*b)

### Ejercicio 3

```cpp
for (i = 0; i < n; i++) // 1 / 2n / 2n 
 printf("%d\n",i); // 1n
i=0; // 1 
while (i<n) // 1n 
{ 
 printf("%d\n", i); // n1
 i++; // n2
}
```
> T(n) = 1 + n(2 + 2 + 1) + 1 + n(1 + 2)


> Complejidad: O(n) (lineal)

### Ejercicio 4

```cpp
for (i = 0; i < n; i++) { // 1 / 1n /2n 
 for (j = 0; j < n; j++)  // 1n / 1nn / 2nn
    printf("%d\n",i+j); // 1nn
}
i=0; // 1
while (i<10) { // 1
 // begin B 
 j=0; // 1
 while (j<n) { // n + 1
    printf("%d\n",i+j); // 1n 
    j++; // 2n
 }
 i++; // 2
}
```
> T(n) = 1 + n(1 + 2 + 1 + n(1 + 2 + 1)) + 1 + 1 + 1 + n(1 + 1 + 2 + 2) 

> Complejidad: O(n2) (cuadrática)

### Ejercicio 5

```cpp
double calcularPromedio(const vector<int>& vector) {
    int n = vector.size(); // 1

    if (n == 0) { // 1
        cerr << "error" << endl; // 1
        return 0.0; // 1
    }

    int suma = 0; // 1
    for (int i = 0; i < n; i++) { // 1 / 1n / 2n
        suma += vector[i]; // 2
    }

    double promedio = static_cast<double>(suma) / n; // 2

    return promedio; // 1
}
```
> T(n) = 1 + 1 + 1 + 1 + 1 + n(2) + 2

> Complejidad: O(n) (lineal)

### Ejercicio 6

```cpp
int encontrarMaximo(const vector<int>& vector) {
    int maximo = vector[0]; // 1

    for (size_t i = 1; i < vector.size(); i++) { // 1 / 1n / 2n
        if (vector[i] > maximo) { // 1n
            maximo = vector[i]; // 1n
        }
    }

    return maximo; // 1
}
```
> T(n) = 1 + 1 + 1 + n(2 + 1 + 1)

> Complejidad: O(n) (lineal)

### Ejercicio 7

```cpp
void separarContiguosDivisibles() {
        NodoInt* actual = primero; // 1

        while (actual && actual->siguiente) { // 1 n
            int a = actual->elemento; // 1n
            int b = actual->siguiente->elemento; // 1n

            if (a % b == 0) { // 1n
                int cociente = a / b; // 2n
                NodoInt* nuevoNodo = new NodoInt(cociente); //1n
                nuevoNodo->siguiente = actual->siguiente; //1n
                actual->siguiente = nuevoNodo; // 1n
                actual = actual->siguiente->siguiente; //1n
            } else {
                actual = actual->siguiente; // 1n
            }
        }
    }
```
> T(n) = 1 + n(1+1+1+1+2+1+1+1+1)
> Complejidad: O(n) (lineal)
