//Concatenacion de strings 

#include<iostream>
#include<string>
#include<conio.h>

using namespace std;


int main(){

    string mensaje1, mensaje2, mensaje3;

    cout<<"Digite un mensaje: "; getline(cin, mensaje1);
    cout<<"Digite otro mensaje: "; getline(cin, mensaje2);

    mensaje3 = mensaje1+mensaje2;

    cout<<mensaje3;

    return 0;
}