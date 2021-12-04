#include<iostream>
#include<string>

using namespace std;

int main(){

    string a ; 
    string b ;

    cin>>a;cin>>b;

    char a1  = a[0];
    char b1 = b[0];

    int lenA = a.size();
    int lenB = b.size();

    string c = a+b;


    cout<<lenA<<" "<<lenB<<endl;
    cout<<c<<endl;

    a[0] = b1;
    b[0] = a1;

    cout<<a<<" "<<b;
    

    return 0;
}