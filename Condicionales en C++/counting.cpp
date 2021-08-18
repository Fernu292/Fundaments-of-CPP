#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int co=0;
    co=n;
    while(co>=1){
    	cout<<co<<endl;
    	if(co%5==0){
    		cout<<"Beep"<<endl;
		}
    	co--;
	}
    return 0;
}
