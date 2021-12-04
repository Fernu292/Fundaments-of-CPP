/*6.Realice un programa que calcule la suma de dos matrices cuadradas de 
3x3*/

#include<iostream>

using namespace std;

int main(){

    int mat1[3][3], mat2[3][3];

    int suma[3][3];

    for(int i=0;i<3;i++){
        for(int j = 0; j<3;j++){
            mat1[i][j] = {rand()%9};
            mat2[i][j] = {rand()%8};

            suma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    //Primera matriz y segunda 
    cout<<"\n** Primera matriz **"<<endl;
    for(int i=0;i<3;i++){
            for(int j = 0; j<3;j++){

                cout<<mat1[i][j]<<" ";
            }
        cout<<"\n";
    }

    cout<<"\n** Segunda matriz **"<<endl;

    for(int i=0;i<3;i++){
            for(int j = 0; j<3;j++){

                cout<<mat2[i][j]<<" ";
            }
        cout<<"\n";
    }

    cout<<"\n** Suma de matrices **"<<endl;

     for(int i=0;i<3;i++){
            for(int j = 0; j<3;j++){

                cout<<suma[i][j]<<" ";
            }
        cout<<"\n";
    }


    
    return 0;
}