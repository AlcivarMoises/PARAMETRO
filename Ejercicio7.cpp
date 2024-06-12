//Ejercicio 7:   Escriba la función que determina si un número pasado como parámetro es múltiplo de 7.
//Fecha de entrega: 12/06/2024
//Autor: Moises Alcivar  Castillo

#include <iostream>
using namespace std;

//Se coloca la función la cual determinara si nuestro número es múltiplo de 7
bool esMultiploDe7(int num) 
{
    return num % 7 == 0;
}

int main() {
    int numero;

    // Ingreso de los valores
    cout << "por favor ingrese un número: ";
    cin >> numero;

    if (esMultiploDe7(numero)) {
        cout << "El número " << numero << " es múltiplo de 7." << endl;
    } else {
        cout << "El número " << numero << " no es múltiplo de 7." << endl;
    }

    return 0;
}