//Programa que calcule x1 y x2 de una ecuacion cuadratica 

#include<iostream>
#include<math.h>

// sqrt (x) is the square root
// pow (x) is the power 2 or the square of a number

using namespace std;

int main (){
	cout<<"Program that calculates the general formula of a quadratic expression"<<endl;
	
	float a, b, c, resultado1=0, resultado2=0 ;
	
	cout<<"Digit a: ";
	cin>>a;
	
	cout<<"Digit b: ";
	cin>>b;
	
	cout<<"Digit c: ";
	cin>>c;
	
	float b2 = pow(b, 2);

	
	resultado1= (-b+(sqrt( b2 - (4*a*c))))/(2*a);
	resultado2= (-b-((sqrt( b2 -(4*a*c)))))/(2*a);
	
	cout<<"The answers are: "<<resultado1<<endl;
	cout<<resultado2<<endl;
	
	
	
	return 0;
}
