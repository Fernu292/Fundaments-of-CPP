/*La calificacion final de un alumno es el promedio de tres notas

-La nota de practicas cuenta un 30% del total
-La not ateorica un 60%
-La nota de participacion un 10%

Escriba un programa que lea las tres notas del alumno y su nota final*/

#include<iostream>

using namespace std;

int main(){
	float practicas, teorica, participacion, calf=0;
	
	cout<<"Digite la calificacion de practicas: "; cin>>practicas;
	cout<<"Digite la calificacion de teorica: "; cin>>teorica;
	cout<<"Digite la calificacion de participacion: "; cin>>participacion;
	
	practicas*=.3;
	teorica*=.6;
	participacion*=.1;
	
	calf=(practicas+teorica+participacion);
	
	cout<<"\nEl promedio es: "<<calf<<endl;
	
	return 0;
}
