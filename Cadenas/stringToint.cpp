//Transformar una cadena de texto a int 

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    stringstream ss;
    string s; 
    int n;

    cout<<"Digite datos tipo int: "; getline(cin, s);

    ss<<s;
    ss>>n;

    cout<<n;

    return 0;
}