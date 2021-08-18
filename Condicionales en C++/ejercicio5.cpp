#include<iostream>

using namespace std;

int main(){

    char letra;

    cout<<"Digite un caracter: ";cin>>letra;

    switch (letra){
        case 'a': cout<<"Es una vocal minuscula";break;
        case 'e': cout<<"Es una vocal minuscula";break;
        case 'i': cout<<"Es una vocal minuscula";break;
        case 'o': cout<<"Es una vocal minuscula";break;
        case 'u': cout<<"Es una vocal minuscula";break;
        default : cout<<"El caracter no es una vocal minuscula";break;
    }
    

    return 0;
}