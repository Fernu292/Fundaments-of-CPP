#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int arr[] = {4,2,3,1,5};
    int i, pos, aux;

    //Metodo insercion
    //Arlgoritmo del ordenamiento por insercion 
    for(i = 0;i<5;i++){
        pos = i;
        aux = arr[i];

        while((pos>0) && (arr[pos-1]>aux)){
            arr[pos] = arr[pos-1];
            pos--;
        }

        arr[pos] = aux;
    }

    cout<<"Orden ascendente"<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Orden descendente"<<endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    getch();
    return 0;
}