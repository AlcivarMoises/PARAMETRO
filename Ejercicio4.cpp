
//Ejercicio 4:   Diseñe la función que resuelva el problema de la ecuación cuadrática. La función debe recibir en total 5 parámetros: los 3 primeros son los valores a, b y c que representan los coeficientes de la ecuación. Los 2 parámetros restantes representan los valores resultantes de la ecuación, en este caso x1, y x2 que se deben pasar como referencias. La función devuelve falso, si la ecuación presenta errores; caso contrario devuelve verdadero.
//Fecha de entrega: 12/6/2024
//Autor: Moises Alcivar Castillo
#include <iostream>
#include <cmath>
using namespace std;

bool EcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    if (a == 0) {
        // Si a es 0, no es una ecuación cuadrática
        return false;
    }

    double discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        // Si el discriminante es negativo, no hay soluciones reales
        return false;
    }

    // Calcular las soluciones usando la fórmula cuadrática
    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);

    return true;
}

int main() {
    double a, b, c;
    double x1, x2;

    cout << "Ingrese los coeficientes a, b, y c de la ecuación cuadrática (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (EcuacionCuadratica(a, b, c, x1, x2)) {
        cout << "Las soluciones de la ecuación son x1 = " << x1 << " y x2 = " << x2 << endl;
    } else {
        cout << "La ecuación no tiene soluciones reales o no es una ecuación cuadrática válida." << endl;
    }

    return 0;
}
