/*Escribe la siguiente expresion matematica como expresion en C++:
(a+b)/(c+d)*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, total=0;
	
	cout<<"Digite el valo de a: ";cin>>a;
	cout<<"Digite el valo de b: ";cin>>b;
	cout<<"Digite el valo de c: ";cin>>c;
	cout<<"Digite el valo de d: ";cin>>d;
	
	total=(a+b)/(c+d);
	
	cout.precision(3);
	
	cout<<"\nEl resultado de la expresion es: "<<total<<endl;
	
	
	return 0;
}
