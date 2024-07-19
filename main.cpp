#include <iostream>
#include <cmath>

using namespace std;

/* Alumno: Jaiker Alexander */

// Funci�n para calcular el factorial de un n�mero
long long factorial(int n) {
    if (n < 0) {
        cout << "Error: no existe el factorial de un n�mero negativo" << endl;
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

// Funci�n para calcular el valor absoluto de un n�mero
double absoluto(double x) {
    return fabs(x);
}

// Funci�n para calcular el promedio gen�rico
double promedio(int cantidad, double* valores) {
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += valores[i];
    }
    return suma / cantidad;
}
