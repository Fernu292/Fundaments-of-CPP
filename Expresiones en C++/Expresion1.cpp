//Escribe la siguiente expresion como expresion en C++:
//a/b+1

#include<iostream>

using namespace std;

int main(){
	float a, b, total=0;
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"\nDigita el valor de b: ";cin>>b;
	total=(a/b)+1;
	
	cout.precision(2);//Es para redondear decimales segun lo necesitemos
	cout<<"\nEl resultado es: "<<total;
	
	return 0;
}
