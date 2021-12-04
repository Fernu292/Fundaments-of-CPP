/*7.Determinar si una matriz es simetrica o no lo es 
Una matriz es simetrica si es cuadrada y si es igual a su matriz 
transpuesta 

*/

#include<iostream>

using namespace std;

int main(){
    int n, m;
    bool band = false;
    cout<<"Digite el numero de filas: ";cin>>n;
    cout<<"Digite el numero de columnas: ";cin>>m;

    int mat1[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }

    if(n==m){
        for(int i=0;i<n;i++){
            for (int j = 0; j <m; j++){
                if(mat1[i][j] == mat1[j][i]){
                    band = true;
                }

            }
        }
    }
    if(band){
        cout<<"La matriz es simetrica";
    }
    else{
        cout<<"La matriz no es simetrica";
    }
    
       
    return 0;
}