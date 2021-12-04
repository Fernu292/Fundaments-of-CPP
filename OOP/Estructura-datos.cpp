//Estructuras de datos con manejo de memoria 

#include<iostream>
#include<string>

using namespace std;

//Generando una estructura con la palabra reservada 
//Struct
struct Persona {
    string nombre;
    int edad;
};

int main(){

    //Inicializando nuestra estructura de persona
    //Haciendo uso de punteros 
    //Para acceder al valor de un puntero usaremos -> una flecha
    Persona *p = new Persona();
    p->nombre = "Luis Fernando";
    p->edad = 18;

    cout<<p->nombre<<" "<<p->edad<<endl;

    return 0;
}