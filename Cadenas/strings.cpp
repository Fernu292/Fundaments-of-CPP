//Cadena de caracteres  

#include<iostream>
#include<conio.h>
#include<string.h> //Permite usar los strings

using namespace std;

int main(){
    char palabra[] = "Fernando";
    char nombre[30];
    cout<<palabra<<endl;

    cout<<"Digite su nombre: ";cin.getline(nombre, 20, '\n');

    cout<<nombre;


    return 0;
}