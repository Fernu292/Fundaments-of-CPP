/*Ejercicio 7. Intercambiar el valor de 2 variables utilizando el paso de 
parametros por referencia */

#include <iostream>

using namespace std;

void Intercambio( int& num1, int& num2){
    int aux = num1;

    num1 = num2;
    num2 = aux;

}

int main(){

    int numero1 = 5, numero2 = 10;

    Intercambio(numero1, numero2);

    cout<<"El primer numero es: "<<numero1<<endl;
    cout<<"El segundo numero es: "<<numero2;

    return 0;
}