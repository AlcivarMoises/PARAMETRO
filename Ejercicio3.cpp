//AUTOR: ALCIVAR MOISES
//TEMA: SOBRE CARGA DE FUNCIONES
#include<iostream>
using namespace std;

string Saludos()
{
    return "Bienvenidos...";
}

string Saludos(string nombre)
{
    return "Bienvenido " + nombre;
}

string Saludos(string nombre, int edad)
{
    if(edad >=18)
    return "Bienvenido señor " + nombre;
    else
    return "Bienvenido joven " + nombre;
}

int main()
{
    cout<<endl<<Saludos();
    cout<<endl<<Saludos("Juan");
    cout<<endl<<Saludos("Juan Perez", 18);

    string nombre= "Jose Alcivar";
    Saludos(nombre, 16);
    return 0;
}