# Complejidad Algorítmica

Calcule, indicando en cada paso la cantidad de operaciones, la complejidad de los 
siguientes algoritmos:

### Ejercicio 1

```cpp
j=j-2; // 2
i=j*12; // 2
printf("%d\n", i); // 1
```
> Los valores de j e i son fijos, no hay bucles ni condicionales.

Complejidad: O(1) 

### Ejercicio 2
    
```cpp
Scanner leer = new Scanner(System. in); // 1
int n = leer.nextInt(), c = 0; // 3
while (n-- > 0) // n 
{
    c++; // 2n
    int res = 0; /**leemos rangos**/ // 1n
    int b = leer.nextInt(); // 1n
    for (int a = 0; i <= b; i++) // b + 1
        if (i % 2 == 1){ // 2b
            res = res + i; // 2b
        } 
    System. out .printf( "Case %d: %d\n" , c, res); // 2n
}
```
> B es un valor introducido por el usuario dentro del mismo loop n.
> No se puede determinar un valor fijo para B, por lo que se considera como una variable más.

T(n) = n * (b+1)

Complejidad: O(n*b)

### Ejercicio 3

```cpp
for (i = 0; i < n; i++){ // n
    printf("%d\n",i); // 1n
}
i=0; // 1 
while (i<n){ // n
    printf("%d\n", i); // n1
    i++; // n2
}
```
T(n) = n + n

O(n) (lineal)

### Ejercicio 4

```cpp
for (i = 0; i < n; i++) { // bucle n^2
 for (j = 0; j < n; j++) 
    printf("%d\n",i+j); 
}
i=0;
while (i<10) { 
 j=0; 
 while (j<n) {  // 10 * n, no nos interesa el 10
    printf("%d\n",i+j); 
    j++; 
 }
 i++; 
}
```

T(n) = O(n^2) + O(n) 

O(n^2) (cuadrática)

### Ejercicio 5

```cpp
double calcularPromedio(const vector<int>& vector) {
    int n = vector.size(); // 1

    if (n == 0) { // 1
        return 0.0; // 1
    }

    int suma = 0; // 1
    for (int i = 0; i < n; i++) { // n-1
        suma += vector[i]; // 2
    }

    double promedio = static_cast<double>(suma) / n; // 2

    return promedio; // 1
}
```

T(n) = (n-1) * 2

Complejidad: O(n) (lineal)

### Ejercicio 6

```cpp
int encontrarMaximo(const vector<int>& vector) {
    int maximo = vector[0]; 

    for (size_t i = 1; i < vector.size(); i++) { // n-1
        if (vector[i] > maximo) { 
            maximo = vector[i]; // 1
        }
    }

    return maximo; 
}
```
> El bucle recorre desde el segundo elemento hasta el último, por lo que se ejecuta n-1 veces.

T(n) = (n-1) * 1

O(n) (lineal)

### Ejercicio 7

```cpp
void Lista::alta(Dato d, int pos)
{
    Nodo* nuevo = new Nodo(d);
    if (pos == 1)
    {
        nuevo->cambiar_siguiente(primero);
        primero = nuevo;
    }
    else
    {
        Nodo* anterior = obtener_nodo(pos - 1);
        Nodo* siguiente = anterior->obtener_siguiente();
        nuevo->cambiar_siguiente(siguiente);
        anterior->cambiar_siguiente(nuevo);
    }
    largo++;
}
void Lista::separarContiguosDivisibles()
{
    int indice = 1;
    while (indice < largo)
    {
        Nodo* actual = obtener_nodo(indice);
        Nodo* siguiente = obtener_nodo(indice + 1);

        if (siguiente != nullptr && actual->obtener_dato() % siguiente->obtener_dato() == 0)
        {
            int division = actual->obtener_dato() / siguiente->obtener_dato();
            alta(division, indice + 1); // n
            indice += 2;
        }
        else
        {
            indice++; 
        }
    }
}
```
> En el peor de los casos se entrará n veces en el bucle while siendo n el largo de la lista.
> Dentro de esta función se llama al método alta() que nos puede dar una complejidad de O(n) al tratarse de un algoritmo que itera sobre una lista enlazada.

T(n) = n * n

O(n^2)

