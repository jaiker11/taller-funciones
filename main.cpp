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

int main() {
    int opcion;
    do {
        cout << "Men� de opciones:" << endl;
        cout << "1. Calcular factorial" << endl;
        cout << "2. Calcular valor absoluto" << endl;
        cout << "3. Calcular promedio gen�rico" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                long long resultado = factorial(n);
                if (resultado != -1) {
                    cout << "El factorial de " << n << " es: " << resultado << endl;
                }
                break;
            }
            case 2: {
                double x;
                cout << "Ingrese el valor de x: ";
                cin >> x;
                double resultado = absoluto(x);
                cout << "El valor absoluto de " << x << " es: " << resultado << endl;
                break;
            }
            case 3: {
                int cantidad;
                cout << "Ingrese la cantidad de valores: ";
                cin >> cantidad;
                double* valores = new double[cantidad];
                for (int i = 0; i < cantidad; i++) {
                    cout << "Ingrese el valor " << i + 1 << ": ";
                    cin >> valores[i];
                }
                double resultado = promedio(cantidad, valores);
                cout << "El promedio es: " << resultado << endl;
                delete[] valores;
                break;
            }
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opci�n inv�lida. Intente nuevamente." << endl;
        }
    } while (opcion != 4);

    return 0;
}
