/*8. Realice un programa que calcule el producto de dos matrices 
cuadradad de 3x3*/


#include<iostream>

using namespace std;

int main(){

    int mat1[3][3], mat2[3][3], mat3[3][3];

    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++){
            mat1[i][j] = {rand()%5+1};
            mat2[i][j] = {rand()%7};
            mat3[i][j] = mat1[i][j]*mat2[i][j];

            
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}