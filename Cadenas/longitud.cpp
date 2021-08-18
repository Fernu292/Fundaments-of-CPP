//Longitud de una cadena de caracteres - funcion srtlen()

#include<iostream>
#include<string>


using namespace std;


int main(){

    string palabra;
    int longitud = 0;
    
    
    getline(cin, palabra);//Forma de guardar un string 

    longitud = palabra.size();//Comprobar el tamaño de la cadena 


    if(longitud>10){
        cout<<palabra;
    }


    return 0;
}