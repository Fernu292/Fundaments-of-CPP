/*Pedir un string al usuario y contar cada vocal de la frase*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    int cA = 0, cE= 0, cI=0, cO=0, cU=0;
    string frase;

    cout<<"Digita una frase: "; getline(cin, frase);

    for(int i=0;i<frase.size();i++){
        switch(frase[i]){
            case 'a': cA++; break;
            case 'e': cE++; break;
            case 'i': cI++; break;
            case 'o': cO++; break;
            case 'u': cU++; break;
        }
    }

    cout<<"Las veces que esta la letra a: "<<cA<<endl;
    cout<<"Las veces que esta la letra e: "<<cE<<endl;
    cout<<"Las veces que esta la letra i: "<<cI<<endl;
    cout<<"Las veces que esta la letra o: "<<cO<<endl;
    cout<<"Las veces que esta la letra u: "<<cU<<endl;


    return 0;
}