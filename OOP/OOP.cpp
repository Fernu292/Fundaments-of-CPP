/* 
    La Programacion Orientada a Objetos marca la diferencia 
    fundamental entre C y C++

    Un objeto es una entidad que puede existir con propiedades descriptivas, clase 
    y metodos 
*/

#include<iostream>
#include<string>

using namespace std;

class Persona{
    public:
        string nombre = "Luis Fernando";
        int age = 18;
    
        void saludar(){
            cout<<"Hola "<<nombre<<endl;
        }
};

int main(){

    //Creacion de un objeto mediante la clase creada
    Persona *p = new Persona();
    Persona *p2 = new Persona();

    p2->nombre = "Jimena";

    cout<<p->age<<" "<<p->nombre<<endl;

    cout<<"Cambios en mi objeto"<<endl;

    p->age = 22;
    p->nombre = "Fer";

    cout<<"Las nuevas propiedades son: "<<"Edad:"<<p->age<<" "<<"Nombre: "<<p->nombre<<endl;

    p->saludar();
    p2->saludar();

    return 0;
}