/*Ejercicio 6: Escriba una platilla de funcion llamada Maximo() que devuelva 
el valor maximo de tres argumentos que se transmitan a la funcion cuando sea 
llamada
Suponiendo que los tres argumentos son del mismo tipo de dato*/

#include<iostream>

using namespace std;

template<class dato>

dato Maximo (dato x, dato y, dato z){
    if(x>y && x>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else{
        return z;
    }
};

int main(){
    int n=50, m=100, d=10;

    cout<<"El mayor numero es: "<<Maximo(n,m,d);

    return 0;
}