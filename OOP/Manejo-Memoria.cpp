
//Los punteros nos ayudan a acceder a valores mediante la 
//direccion de memoria de una variable almacenada en nuestra memoria 
//RAM, permitiendo tener un control eficiente de la memoria 

#include<iostream>

using namespace std;

int main(){

    int numero = 18;
    int *puntero = &numero;

    //Mediante el operador & podemos optener la diceccion de memoria de 
    //una variable y con * indicamos que la variable sera un puntero 
    //Y que almacenara direccion de memoria 

    cout<<"La direccion de memoria es: "<<puntero<<endl;
    cout<<"El valor del espacion de memoria es: "<<*puntero<<endl;

    *puntero = 117;

    cout<<"El nuevo valor es: "<<*puntero<<endl;
    

    return 0;
}