/*Producto de los elementos de un arreglo*/

#include<iostream>

using namespace std;

int main(){

    int num[] = {1,2,3,4,5};
    int producto = 1;

    for(int i=0; i<5;i++){
        producto*=num[i];
    }
    cout<<"El producto es: "<<producto;
    return 0;
}