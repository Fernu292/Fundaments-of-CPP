/*8. Pedirle al usuario 2 cadenas de caracteres de numeros
convertirlos a sus respectivos valores y sumarlos*/

#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){

    stringstream ss;
    string n1, n2;
    int num1, num2;

    cout<<"Digite el primer numero: "; getline(cin, n1);
    cout<<"Digite el segundo numero: ";getline(cin, n2);

    ss<<n1; ss>>num1;ss.clear(); ss<<n2; ss>>num2;

    int suma = 0;

    suma = num1+num2;

    cout<<suma;

    return 0;
}