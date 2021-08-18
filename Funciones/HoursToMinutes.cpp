// You are building an Hours to Minutes converter.
// // Complete the given function so that it will take from user the 
//count of hours as an 
// argument, convert them into minutes, and output.

#include<iostream>

using namespace std;

int toMinutes(int h){
    int time=0;
    time=h*60;
    return time;
}

int main(){
    int n;
    cin>>n;
    cout<<toMinutes(n);

    return 0;
}