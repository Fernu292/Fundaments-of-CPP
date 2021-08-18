/*Escribe un programa que calcule el promedio de 4 notas*/

#include<iostream>

using namespace std;

int main(){
	
	float alum1, alum2, alum3, alum4, promedio = 0;
	
	cout<<"Digite la calificacion del primer alumno: "; cin>> alum1; 
	cout<<"Digite la calificacion del segundo alumno: "; cin>> alum2;
	cout<<"Digite la calificacion del tercero alumno: "; cin>> alum3;
	cout<<"Digite la calificacion del cuarto alumno: "; cin>> alum4;
	
	
	promedio = (alum1+alum2+alum3+alum4)/4;
	cout.precision(2);
	cout<<"El promedio es: "<<promedio<<endl;
	
	return 0;
}
