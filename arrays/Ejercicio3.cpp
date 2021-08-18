/*3. Escribe un programa que lea de la entrada estandar un vector
de numeros y muestre en la salida estandar los numeros del vercot con sus indices*/


#include<iostream>

using namespace std;


int main(){

    int num[] = {1,2,3,4,5};

    for(int i=0; i<5;i++){
        cout<<"El valor es: "<<num[i]<<" y su indice es: "<<i<<endl;
    }


    return 0;
}