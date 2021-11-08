//Ordenamiento por seleccion
#include<iostream>

using namespace std;

int main(){
     int arr[] = {1,5,4,3,2};
     int i, j, aux, min;

    //Algoritmo por seleccion
    for(i = 0;i<5;i++){
         min = i;

         for(j=i+1;j<5;j++){

             if(arr[j]< arr[min]){
                 min = j;
             }
         }

         aux = arr[i];
         arr[i] = arr[min];
         arr[min] = aux;
    }

    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}