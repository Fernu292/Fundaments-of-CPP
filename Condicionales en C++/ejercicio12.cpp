/*Hacer un programa que considere las siguientes opciones

caso 1 cubo de un numero 
caso 2 numero par o impar
caso 3 salir*/

#include<iostream>
#include<math.h>

using namespace std;


int main(){

    int num, numero;
    float total = 0;
    cout<<"--Menu de 3 opciones--"<<endl;
    cout<<"1.Calcular el cubo de un numero"<<endl;
    cout<<"2.Calcular si un numero es inpar o par"<<endl;
    cout<<"3.Salir"<<endl;
    
    
    cout<<"Digite un numero: ";
    cin>>num;

    switch (num)
    {
    case 1:
        cout<<"Calcular el cubo de un numero"<<endl;
        cout<<"Digite un numero: ";
        cin>>numero;
        
        total = pow(numero, 3);
        cout<<"El resultado es: "<<total;

        break;
    case 2: 
        cout<<"Calcular si un numero es par o impar";
        cout<<"\nDigite un numero: ";
        cin>>numero;

        if(numero%2==0){
            cout<<"El numero ingresado es par";
        }
        else{
            cout<<"El numero es impar";
        }
        break;
    case 3: 
        cout<<"Gracias, vuelva pronto ";
    default:
        cout<<"Introduzca un numero valido ";
        break;
    }

    return 0;
}