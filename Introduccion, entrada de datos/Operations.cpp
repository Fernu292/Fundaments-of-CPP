/*1.Escribe un programa que lea la entrada estardar de dos numeros y muestre
en la salida estandar y muestre en la salida la suma, resta, multiplicacion y 
division*/

#include<iostream>

using namespace std;

int main(){
	int numero1, numero2, suma=0, resta=0, multiplicacion=0, division = 0;
	
	cout<<"Digite un numero: ";
	cin>>numero1;
	
	cout<<"Digite otro numero: ";
	cin>>numero2;
	
	suma = numero1+numero2;
	resta = numero1-numero2;
	multiplicacion=numero1*numero2;
	division= numero1/numero2;
	
	cout<<"\nLa suma de los numeros es: "<<suma<<endl;
	cout<<"La resta de los numeros es: "<<resta<<endl;
	cout<<"La multiplicacion de los numeros es: "<<multiplicacion<<endl;
	cout<<"La division de los numeros es: "<<division<<endl;
	
	return 0;
}
