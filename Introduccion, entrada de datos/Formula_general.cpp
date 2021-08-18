//Programa que calcule x1 y x2 de una ecuacion cuadratica 

#include<iostream>
#include<math.h>

//sqrt(x) es la raiz cuadrada
//pow(x) es la potencia 2 o el cuadrado de un numero 

using namespace std;

int main (){
	cout<<"Programa que calcula la formula general de una expresion cuadratica"<<endl;
	
	float a, b, c, resultado1=0, resultado2=0 ;
	
	cout<<"Digita a: ";
	cin>>a;
	
	cout<<"Digita b: ";
	cin>>b;
	
	cout<<"Digita c: ";
	cin>>c;
	
	float b2 = pow(b, 2);

	
	resultado1= (-b+(sqrt( b2 - (4*a*c))))/(2*a);
	resultado2= (-b-((sqrt( b2 -(4*a*c)))))/(2*a);
	
	cout<<"Los resltados son: "<<resultado1<<endl;
	cout<<resultado2<<endl;
	
	
	
	return 0;
}
