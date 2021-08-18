/*Escribe un programa que lea de la entrada estandar el precio de un producto
y muestre en la salida el precio del producto al aplicarle el IVA*/

#include<iostream>

using namespace std;

int main(){
	
	float precio, IVA=0, final=0;
	
	cout<<"Digite el precio de un producto: ";
	cin>>precio;
	
	IVA = precio*.16;
	
	final=IVA+precio;
	
	cout<<"\nEl precio con IVA es: "<<final<<endl;
	
	
	return 0;
}
