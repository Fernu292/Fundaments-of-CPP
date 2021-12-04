//Comparacion de cadenas con strmp de string.h
//Y la forma de string con libreria de c++

#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>


using namespace std;

int main(){


    //Forma con la libreria <string>
    string palabra1, palabra2;

    cout<<"Digite un mensaje: "; getline(cin, palabra1);

    cout<<"Digite otro mensaje: "; getline(cin, palabra2);

    if(palabra1==palabra2){
        cout<<"Los mensajes son iguales";
    }
    else{
        cout<<"Los mensajes no son iguales";
    }

    //Forma con la funcion strcmp()

    char palabra3[] = "Hola";
    char palabra4[] = "Hola";


    if(strcmp(palabra3, palabra4)==0){
        cout<<"\nAmbas cadenas son iguales";
    }


    getch();
    return 0;
}