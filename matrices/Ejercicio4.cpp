/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas
llenar con numero aleatorios, copear el contenido de la matriz 
y mostrarla en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n, m;
    cout<<"Digite el numero de filas de la matriz: ";cin>>n;
    cout<<"Digite el numero de columnas de la matriz: ";cin>>m;

    int mat[n][m];
    int mat2[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            mat[i][j] = {rand()%10};//Generar numeros aleatorios entre 1-100
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n**MAtriz copeada**"<<endl;
    cout<<"\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat2[i][j] = mat[i][j];
            cout<<mat2[i][j]<<" ";

        }
        cout<<"\n";
    }
    
    getch();
    return 0;
}