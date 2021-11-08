//Creacion de una plantilla de funcion 
//Que perimite usar datos variables segun lo requiera la situacion 

//ejemplo: Scarl el valor absoluto de un numero

#include<iostream>

using namespace std;

//Crear plantilla de func para tipos de datos variables 
template<class tipo>

tipo mostarAbs(tipo numero){
    if(numero<0){
        numero*=-1;
    }
    return numero;
};

int main(){

    cout<<"El valor absoluto es: "<<mostarAbs(-55);
    return 0;
}