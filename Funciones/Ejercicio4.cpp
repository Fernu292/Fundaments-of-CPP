/*Escribe un programa que reciba una parte fraccionaria de cualquier numero
ejempl, 256.879 deberia devolver 0.879 */

#include<iostream>

using namespace std;


float pedirDatos(){
    float numero;
    cout<<"Digite un numero: "<<endl;
    cin>>numero;

    return numero;
};

float parteFrac(float n){
    int entero = n;

    float resul = n-entero;

    return resul;
};


int main(){
    float num;

    num = pedirDatos();
    cout<<"El resultado es: "<<parteFrac(num);

    return 0;
}