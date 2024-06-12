//Ejercicio 8:  Escriba la función que recibe como parámetro un entero y devuelve el cubo del mismo.
//Fecha de entrega: 12/6/2024
//Autor: Moises Alcivar Castillo

#include <iostream>
using namespace std;

//Colocamos la función que calcula el cubo de un número entero
int cubo(int num) {
    return num * num * num;
}

int main() {
    int numero;

    //Ingresamos el valores
    cout << "Ingrese un número: ";
    cin >> numero;

    int resultado = cubo(numero);
    cout << "El cubo de " << numero << " es: " << resultado << endl;

    return 0;
}