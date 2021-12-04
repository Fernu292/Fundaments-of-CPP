/*Escriba una funcion nombrada funpot() que eleve un numero entero
que se le transmita a una potencia con numero entero positivo y 
despliegue el resultado

El numero entero positivo debera ser el segundo valor transmitido 
a la funcion
*/

#include<iostream>

using namespace std;

long funpot(int potencia, int numero){
    long resultado = 1;

    for(int i=1;i<=potencia;i++){
        resultado*=numero;
    }

    return resultado;
}

int main(){

    int n, m;
    cin>>n>>m;

    cout<<"El resultado de elevar "<<n<<" a la "<<m<<endl;
    cout<<"Es : "<<funpot(m, n);

    return 0;
}