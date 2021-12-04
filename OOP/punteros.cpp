//Punteros

#include<iostream>

using namespace std;

int main(){

    char letra = 'A';
    char *puntero = &letra; //El tipo del puntero debe ser igual a
                            //La del tipo de dato 

    cout<<(int *)&letra<<endl;//Convertir puntero de caracter a numero
    cout<<(int *)puntero<<endl;//Valor del punter
    cout<<*puntero<<endl;//Acceder al espacio en memoria del puntero
    return 0;
}