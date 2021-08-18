/*1. Hacer un programa que pida al usuario un string, luego verificar
su longitud y si es mayor a 10, mostrarla de lo contrario no hacerlo 
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char nombre[100];
    int longitud;

    cout<<"Digita un mensaje: "; cin.getline(nombre, 100, '\n');
    
    longitud = strlen(nombre);

    if(longitud>=10){
        cout<<nombre;
    }
    
    return 0;
}

