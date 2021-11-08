/*2. Realiza un programa que defina una matriz 3x3 y escriba 
un ciclo para que muestre la diagonal principal de la matriz*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num[3][3] = {{1,2,3,},{4,5,6},{7,8,9}};

    //Mostrando matriz completa

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<num[i][j];
        }
        cout<<"\n";
    }


    //Mostrando diagonal principal

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<num[i][j]<<endl;
            }
        }
    }




    getch(); //Funcion que inpide que un programa se cierre al terminar 
    return 0;
}