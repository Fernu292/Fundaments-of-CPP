//Escribe un fragmento de programa que intercambie los valores de dos variables 

#include<iostream>

using namespace std;

int main(){
	
	float a, b, aux;
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b: ";cin>>b;
	
	aux=a;
	a=b;
	b=aux;
	
	cout<<"\nEl nuevo valor de a es: "<<a;
	cout<<"\nEl nuevo valor de b es: "<<b;
	return 0;
}
