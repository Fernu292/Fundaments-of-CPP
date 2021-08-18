#include<iostream>

using namespace std;

int main(){

    int a,b;
    cout<<"Digite el valor de un numero: ";
    cin>>a;

    cout<<"Digite el valor de otro numero: ";
    cin>>b;


    if(a>b){
        cout<<"El numero mayor es: "<<a<<endl;
    }
    else{
        cout<<"El numero mayor es: "<<b<<endl;
    }

    return 0;
}