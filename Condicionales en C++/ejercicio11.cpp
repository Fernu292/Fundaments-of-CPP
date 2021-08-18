//Hacer un programa que simule un cajero automatico con un saldo inicial
//de 1000 dolares


#include<iostream>

using namespace std;

int main(){
    float saldo = 1000, ope=0,dinero;

    cout<<"Su saldo disponible es: "<<saldo<<endl;

    cout<<"Seleccione la operacion a realizar: "<<endl;
    cout<<"1: Depositar dinero --- 2: Retirar dinero"<<endl;
    cin>>ope;

    if(ope==1){
        cout<<"Instroduzca el monto del deposito: ";
        cin>>dinero;

        saldo += dinero;
        cout<<"Su balance total es: "<<saldo<<" vuelva pronto"<<endl;
    }
    else if(ope==2){
        cout<<"Seleccione el monto del retiro: ";
        cin>>dinero;

        saldo -= dinero;

        cout<<"Su balance total es: "<<saldo<<" vuelva pronto"<<endl;
    }
    else{
        cout<<"Digite un numero valido"<<endl;
    }

    return 0;
}