#include<iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4;
    
    cout<<"Digite un numero: ";
    cin>>n1;

    cout<<"Digite un numero: ";
    cin>>n2;

    cout<<"Digite un numero: ";
    cin>>n3;


    cout<<"Digite un numero: ";
    cin>>n4;

    if(n4==n1){
        cout<<"El numero coincide con: "<<n1;
    }
    else if(n4==n2){
        cout<<"El numero coincide con: "<<n2;
    }
    else if(n4==n3){
        cout<<"El numero coincide con: "<<n3;
    }

    return 0;
}