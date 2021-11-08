//Escribir una funcion que retorne el cuadrado de un numero

#include<iostream>

using namespace std;

template<class num>

num cuadrado(num numero){
    return numero*numero;
}

int main(){

    cout<<"El cuadrado de 15 es: "<<cuadrado(15);

    return 0;
}