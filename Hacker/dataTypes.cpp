#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>//Permite usar setprecision

using namespace std;

int main(){

    int i = 0;
    int long long  l = 0; 
    string c = "a"; 
    float  f = 0; 
    double long d = 0;

    cout<<"Digite un numero entero: "; cin>>i;
    cout<<"Digite un numero largo: "; cin>>l;
    cout<<"Digite una letra: "; cin>>c;
    cout<<"Digite un numero real: ";cin>>f;
    cout<<"Digite otro numero real: "; cin>>d;


    cout<<i<<endl;
    cout<<l<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;

    return 0;
}