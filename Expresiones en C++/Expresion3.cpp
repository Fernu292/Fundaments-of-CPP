//Escribe la siguiente expresion matematica en C++ (a+(b/c))/(d+(e/f)

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, total=0;
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b: ";cin>>b;
	cout<<"Digite el valor de c: ";cin>>c;
	cout<<"Digite el valor de d: ";cin>>d;
	cout<<"Digite el valor de e: ";cin>>e;
	cout<<"Digite el valor de f: ";cin>>f;
	
	total=(a+(b/c))/(d+(e/f));
	
	cout.precision(3);
	
	cout<<"\nEl resultado es: "<<total<<endl;
	
	return 0;
}
