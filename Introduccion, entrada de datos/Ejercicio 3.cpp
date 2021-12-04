/* Realice un programa que lea la entrada estandar de los siguientes datos
de una persona:
edad: tipo entero
sexo:tipo caracter
altura:tipo real

tras leer los datos, mostrarlos en la salida estandar */

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	
	cout<<"Digite su sexo: "; cin>>sexo;
	
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	
	cout<<"Los datos introducidos fueron: "<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;
	
	
	return 0;
}
