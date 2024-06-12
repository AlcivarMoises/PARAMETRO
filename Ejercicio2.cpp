//AUTOR: MOISES ALCIVAR
//TEMA: PASO POR REFERENCIA
#include<iostream>
using namespace std;

int FuncionPasoReferencia(int& num)
{
    num = num * 10;
    cout<<endl<<"El valor de num dentro de la funcion :"<<num;
    return 1;
}
 //Funcion  que no retorna valores, pero que intercambia los valores de
 //2 variables. Sean 2 variables a=10 y b=20. La funcion debe hacer que 
 //a sea igual a 20 y b sea igual 10. USE PARAMETROS POR REFERENCIA
 void Intercambio(int& A, int& B)
 {
    int AUX = A;
    A = B;
    B = AUX;
}
int main()
{
    int p=2;
    cout<<endl<<"El valor de num antes de la llamada: "<<p;
    FuncionPasoReferencia(p);
    cout<<endl<<"El valor de num despues de la llamada: "<<p;

    int num1= 10, num2=20;
    Intercambio(num1, num2);
    cout<<endl<<"num1 = "<<num1;
    cout<<endl<<"num2 = "<<num2;
    return 0;
}