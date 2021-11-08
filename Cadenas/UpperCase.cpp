//Trnasform string to uppercase

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string name = "Luis Fernando";

    transform(name.begin(), name.end(), name.begin(), [](unsigned char c){return toupper(c); });

    cout<<name;

    return 0;
}