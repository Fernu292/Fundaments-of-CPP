/* La sentencia if
	
	if(condicion){
		Instruccion1;
	}
	else{
	Instrucion2;
	}
*/

#include<iostream>

using namespace std;

int main(){
	
	int numero, dato = 5;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if (numero!=dato){
		cout<<"Elnumero no es 5";
	}
	else{
		cout<<"El numero es 5"<<endl;
	}
	return 0;
}
