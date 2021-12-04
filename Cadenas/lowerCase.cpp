#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string name = "LUIS FERNANDO";

    transform( name.begin(), name.end(), name.begin(), [](unsigned char c){
        return tolower(c);
    });


    cout<<name;
    return 0;
}