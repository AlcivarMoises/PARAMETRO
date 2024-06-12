//Ejercicio 6: Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
//Fecha de entrega: 12/6/2024
//Autor: Moises Alcivar Castillo

#include <iostream>
using namespace std;
// Función para calcular el promedio de tres números y la sumatoria
double calcularPromedioYSuma(double num1, double num2, double num3, double &sumatoria) {
    sumatoria = num1 + num2 + num3;
    return sumatoria / 3.0;
}

int main() {
    double a = 5.0, b = 10.0, c = 15.0;
    double suma = 0.0;
    
    double promedio = calcularPromedioYSuma(a, b, c, suma);
    
cout << "El promedio de " << a << ", " << b << " y " << c << " es: " << promedio <<endl;
cout << "La sumatoria de " << a << ", " << b << " y " << c << " es: " << suma <<endl;
    
    return 0;
}
