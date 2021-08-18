/*Comprobar si una string es igual a otro 
caso contrario verificar si una es mayor alfabeticamente*/

#include<iostream>
#include<string>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){

    string mensaje1, mensaje2;

    cout<<"Digite un mensaje: "; getline(cin, mensaje1);
    cout<<"Digite un otro mensaje: "; getline(cin, mensaje2);

    if(mensaje1==mensaje2){
        cout<<"Los mensajes son iguales";
    }
    else if(mensaje1>mensaje2){
        cout<<mensaje1<<" Es mayor alfabeticamente";
    }
    else{
        cout<<mensaje2<<" Es mayor alfabeticamente";
    }


    getch();
    return 0;
}