#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str1 = "abc", str2 = "ABC";

    transform(str1.begin(), str1.end(), str1.begin(), [](unsigned char c){return toupper(c); } );

    if(str1 == str2){
        cout<<"Son iguales"<<endl;
    }
    else{
        cout<<"No son iguales";
    }

    return 0;
}