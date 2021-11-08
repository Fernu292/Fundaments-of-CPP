/*3. Hacer una matriz de tipo entera de 2*2,
llenarla de numeros y copear su contenido hacia otra matriz*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num1[2][2] = {{1,2} , {3,4}} ;
    int num2[2][2];

    //Copeando todo a una segundda matriz

    for(int i=0;i<2;i++){
        for(int j =0; j<2; j++){
            num2[i][j] = num1[i][j];

            cout<<num2[i][j]<<endl;
        }
    }

    getch();
    return 0;
}