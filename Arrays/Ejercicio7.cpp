//Almacenar el contenido de dos arreglos en uno solo 

#include<iostream>

using namespace std;

int main(){

    char arr1[] = {'a','b','c','d','e'};
    char arr2[] = {'f','g','h','i','j'};
    char arrSum[100];
    

    //Bucles 
    for(int i=0;i<5;i++){
        arrSum[i] = arr1[i];

    }
    for(int i =5; i<10;i++){
        arrSum[i] = arr2[i-5];
    }

    for(int i =0; i<10;i++){

        cout<<arrSum[i]<<endl;
    }

    return 0;
}