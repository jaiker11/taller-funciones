#include <iostream>
#include <cmath>

using namespace std;

/* Alumno: Jaiker Alexander */

// Función para calcular el factorial de un número
long long factorial(int n) {
    if (n < 0) {
        cout << "Error: no existe el factorial de un número negativo" << endl;
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        long long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}

// Función para calcular el valor absoluto de un número
double absoluto(double x) {
    return fabs(x);
}

// Función para calcular el promedio genérico
double promedio(int cantidad, double* valores) {
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += valores[i];
    }
    return suma / cantidad;
}
