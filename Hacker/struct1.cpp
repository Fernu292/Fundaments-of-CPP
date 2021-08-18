#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){

    int age, standard;
    string first, last, resultado;

    stringstream ss;

    cin>>age;

    cin.ignore(); getline(cin,first);

    getline(cin,last);

    cin>>standard;



    ss<<age<<" "<<first<<" "<<last<<" "<<standard;


    resultado = ss.str();

    cout<<resultado;


    return 0;
}
