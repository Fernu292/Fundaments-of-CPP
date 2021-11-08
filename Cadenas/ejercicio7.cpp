//7. Pedir al usuario su nombre en mayuscula y si este comienza 
//Con a transformarlo a minuscula, caso contrario no hacerlo

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string nombre;
    cout<<"Digite su nombre en mayusculas: "; 
    getline(cin, nombre);

    if(nombre[0]=='A'){
        transform(nombre.begin(), nombre.end(), nombre.begin(),
        [](unsigned char c){return tolower(c);});
    }

    cout<<nombre;
    return 0;
}