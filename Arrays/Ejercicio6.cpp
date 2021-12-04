/*6. Describe en un programa si un numero de un arreglo 
es igual a la suma de sus elementos*/

#include<iostream>

using namespace std;

int main(){
    int arr[100], suma = 0,n, mayor=0;

    cout<<"Digite la cantidad de datos del arreglo: ";
    cin>>n;

    for(int i = 0; i<n;i++){
        cout<<i+1<<".Digite un numero: ";
        cin>>arr[i];
        suma += arr[i];
        
        if(arr[i]>mayor){
            mayor = arr[i];
        }
    }

    
    if(mayor==suma-mayor){
            cout<<"El numero igual a la suma de elementos es: "<<mayor;
    }
    else{
            cout<<"Ningun elementos es igual a la suma de los mismos";
    }
    
    return 0;
}