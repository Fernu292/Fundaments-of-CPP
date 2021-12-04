#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    srand(0);//make the function random 
    int range;
    cin >> range;
    //your code goes here
    

    for(int i = 0; i<4; i++)//iterate in a range of 4 numbers and call func
    {
        cout<<rand()%range+1;
    }
    return 0;
}