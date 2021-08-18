/*4. Crear una cadena que tenga la frase 
"Hola que tal", luego crear otra cadena para preguntarle al usuario su
nombre, por tultimo añadir el nombre al final de la primera cadena 
y mostrar el mensaje completo*/

#include<iostream>
#include<string>
#include<conio.h>

using namespace std;


int main(){

    string mensaje = "Hola que tal", nombre;

    cout<<"Digite su nombre: "; getline(cin, nombre);

    mensaje+=" "+nombre;

    cout<<mensaje;


    return 0;
}