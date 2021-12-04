/*5. Realice una matriz 3x3 y cree su matriz transpuesta.
la matriz transpuesta es aqueela que la columna i era la fila i de la 
matriz original

/1 2 3/         /1 4 7/
/4 5 6/  -->    /2 5 8/
/7 8 9/         /3 6 9/


*/
#include<iostream>

using namespace std;

int main(){

    int n =3, m =3;
    int mat1[n][m];
    int mat2[n][m];

    //Relleno de matriz principal
    for(int i =0;i<n; i++){
        for(int j=0; j<m;j++){
            mat1[i][j] = {rand()%9};
            cout<<mat1[i][j]<<" ";

        }
        cout<<"\n";
    }
    cout<<"\n**MAtriz Transpuesta**"<<endl;

    for(int i =0;i<n; i++){
        for(int j=0; j<m;j++){
            mat2[i][j] = mat1[j][i];

            cout<<mat2[i][j]<<" "; 
        }
        cout<<"\n";
    }
    return 0;
}
