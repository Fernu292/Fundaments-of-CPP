//4.Escribe ;a siguiente expresion en C++

#include<iostream>

using namespace std;

int main(){
	
	float a, b, c, d, total=0;
	
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	cout<<"Digite el valor de c: ";
	cin>>c;
	cout<<"Digite el valor de d: ";
	cin>>d;
	
	
	total=a+(b/(c-d));
	
	cout<<"El resultado es: "<<total<<endl;
	
	return 0;
}



