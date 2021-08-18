//Multiplicar por dos los numeros de un arreglo

#include <iostream>

using namespace std;

int main(){

    int arr[] ={1,2,3,4,5};

    int arr2[5];


    for(int i=0;i<5;i++){
        arr2[i] = arr[i]*2;

    }
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }


    return 0;
}