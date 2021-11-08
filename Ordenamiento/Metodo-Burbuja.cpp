//Metodo burbuga 
#include<iostream>

using namespace std;

int main(){
    
    int arr[] = {1,8,6,2,5,4,7,9,3};
    int i, j, aux;

    //Algoritmo de metodo burbuja 
    for(i=0;i<9;i++){

        //Buvle que verifica el ordenamiento
        for(j=0;j<9;j++){

            if(arr[j]>arr[j+1]){
                aux = arr[j];

                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }

    
    cout<<"Orden ascendente: ";
    for(i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nOrden descendente: ";

    for(int i=8;i>=0;i--){

        cout<<arr[i]<<" ";
    }
    return 0;
}