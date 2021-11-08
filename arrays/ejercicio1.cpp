/*1. Escribe un programa que defina un vector de numeros y calcule
la suma de sus elemntos*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[] = {1,2,3,4,5};
    int resultado = 0;

    for(int i = 0; i<5;i++){
        resultado+=numeros[i];
    }
    cout<<"La suma de los elementos es: "<<resultado;
    getch();//Detiene el programa antes de finalizar
    return 0;
}