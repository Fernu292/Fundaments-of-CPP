//Uniones o enumeraciones para usar un mismo espacio en memoria 
//para gestionar de una mejor manera la RAM

#include<iostream>
#include<string>

using namespace std;

int main(){

    //Union de datos para ahorrar memoria 
    union numero_letra{
        int numero;
        char letra;
    };

    numero_letra unionLet = {'A'};

    cout<<unionLet.numero<<endl;
    cout<<unionLet.letra<<endl;

    //Enumeracion dinamica para ahorro de memoria 

    enum dias_semana { lunes = 'l', martes = 'm', miercoes = 'i'};

    dias_semana dia = martes;
    cout<< (char) dia<<endl;

    return 0;
}