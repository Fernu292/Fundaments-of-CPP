/*Determinar el mayor de un elemento*/

#include<iostream>

using namespace std;

int main(){
    int arr[100], n, mayor=0;

    cout<<"Digite el numero de elementos: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<".Digite un numero: ";
        cin>>arr[i];

         if(arr[i] > mayor){
            mayor = arr[i];
            }
    }

    cout<<"\nEl numero mayor es: "<<mayor;
   
    return 0;
}