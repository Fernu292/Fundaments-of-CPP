//Escribe un programa que copie el contenido de una cadena a otra

#include<iostream>
#include<string>

using namespace std;

int main(){

    string palabra1, palabra2;


    cout<<"Digite un mensaje: ";getline(cin,palabra1);

    palabra2 = palabra1;

    cout<<palabra2;


    return 0;
}