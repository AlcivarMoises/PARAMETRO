//Ejercicio 5:   Escriba la función que determina si un número pasado como parámetro es múltiplo de 7.
//Fecha de entrega: 12/6/2024
//Autor: Moises Alcivar Castillo

#include <iostream>
using namespace std;
// Función para calcular el promedio de tres números de tipo double
double calcularPromedio(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    double a = 5.0, b = 10.0, c = 15.0;
    
    double promedio = calcularPromedio(a, b, c);
    
    cout << "El promedio de " << a << ", " << b << " y " << c << " es: " << promedio << endl;
    
    return 0;
}
