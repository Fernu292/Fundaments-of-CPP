//Ordenamiento shell

#include<iostream>

using namespace std;

void intercambio(float &x, float &y){
    float auxiliar = x;
    x = y;
    y = auxiliar;

}

//Funcion de ordenamiento shell
void ordShell (float a[],int n){
    int salto, i, j, k;
    salto = n/2;

    while(salto>0){
        for(i=salto;i<n;i++){
            j = i - salto;

            while(j>=0){
                k = j+salto;

                if(a[j]<=a[k]){//Significa que estan ordenados si da true 
                     j = -1;
                }
                else{//Ambos estan desordenados
                    intercambio(a[j], a[k]);
                    j-=salto;
                }
            }
        }
        salto = salto/2;
    }
};

int main(){
    float arr[] = {1,5,4,3,6,8,9,2,7};

    ordShell(arr, 9);

    cout<<"Arreglo Ordenado"<<endl;

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}