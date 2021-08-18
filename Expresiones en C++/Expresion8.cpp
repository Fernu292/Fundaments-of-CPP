/*Escriba un programa que lea de la entrada estandar los dos catetos 
de un triangulo rectangulo y escriba en la salida estandar su hipotenusa*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float ca, co, h=0;
	
	cout<<"Digite el valor del cateto adyacente: ";
	cin>>ca;
	cout<<"Digite el valor del cateto opuesto: ";
	cin>>co;
	
	h = sqrt(pow(ca, 2)+pow(co, 2));//sqrt es para raiz cuadrada y pow para potencias
	
	cout.precision(2);
	
	cout<<"La hipotenusa del triangulo es: "<<h<<endl;
	
	return 0;
}


