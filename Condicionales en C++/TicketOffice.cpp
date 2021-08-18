//Escribe un programa que lea de la entrada estandar 5 edades 
//determine la menor de ellas y haga un descuento de esa edad

#include<iostream>

using namespace std;

int main(){
	int ages[5];
	float M=100, total=50, p;
	
	for(int i=0; i<5; i++){
		cin>>ages[i];
		
		
		if(ages[i]<M && ages[i]!=0){
			M=ages[i];
		}
	}
	M/=100;
	p=total;
	p*=M;
	total-=p;
	cout<<total;
	
	
	return 0;
}
