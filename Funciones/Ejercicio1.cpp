//Hacer una funcion que multiplique dos numeros tipo float 

#include<iostream>

using namespace std;

float mult(float n, float m){
    return n*m;
};

int main(){

    float resultado = mult(1.5, 5.9);

    cout<<"El resultado es: "<<resultado;
    return 0;
}

