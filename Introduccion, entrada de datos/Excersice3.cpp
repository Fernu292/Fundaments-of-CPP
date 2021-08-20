/* Make a program that reads the standard input of the following data
of a person:
age: whole type
gender: character type
height: real type

after reading the data, display it in the standard output */

#include<iostream>
#include<string>//For work with strings use this library 

using namespace std;

int main(){
	
	int age;
	string sex;
	float heigth;
	
	cout<<"Digit your age: "; cin>>age;
	
	cout<<"Digit your gender: ";getline(cin, sex);
	
	cout<<"Digit your heigth in meters: "; cin>>heigth;
	
	
	cout<<"Te input data is: "<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Sex: "<<sex<<endl;
	cout<<"Heigth: "<<heigth<<endl;
	
	
	return 0;
}
