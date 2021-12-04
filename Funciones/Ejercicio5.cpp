/*Ejercicio 5 : Escriba una plantilla de funcion llamada despliegue() que 
despliegue el valor del argumento unico que se le transmite cuando es invocada */

#include<iostream>

using namespace std;

template<class dato>

void desplegar(dato n){
    cout<<"El dato es: "<<n<<endl;
}

int main(){

    int numero = 5254;
    float flotante = 15.24;
    double doub = 534.25165;
    string nombre = "Luis Fernando ";

    desplegar(numero);
    desplegar(flotante);
    desplegar(doub);
    desplegar(nombre);

    return 0;
}