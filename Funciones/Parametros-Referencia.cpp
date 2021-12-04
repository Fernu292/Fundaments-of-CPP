//Paso de parametros por referencia 

#include<iostream>

using namespace std;

void valNuevo(int&, int&);

int main(){

    int num1,num2;
    cout<<"Digite dos numeros: ";cin>>num1>>num2;

    valNuevo(num1, num2);

    return 0;
}

void valNuevo(int& xnum, int& ynum){
    cout<<"El valor del primero numero es: "<<xnum<<endl;
    cout<<"El valor del segundo numero es: "<<ynum<<endl;
}