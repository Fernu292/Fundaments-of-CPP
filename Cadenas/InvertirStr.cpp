//Invertir una cadena de caracteres

#include<iostream>
#include<string>
#include<string.h>
#include<conio.h>

using namespace std;


int main(){

    string mensaje, mensaje2;

    cout<<"Digite un mensaje: "; getline(cin, mensaje);
    
    

    int size = mensaje.size();

    
    for(int i = size; i>=0;i--){
        mensaje2 += mensaje[i];
    }

    cout<<mensaje2;

    getch();
    return 0;
}