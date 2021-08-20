/*You are making a program for a bus service.
A bus can transport 50 passengers at once.
Given the number of passengers waiting in the bus station as input, you need to calculate and output 
how many empty seats the last bus will have.

Sample Input:
126

Sample Output:
24

Explanation: The first bus will transport 50 passengers, leaving 126-50=76 in the station. 
The next one will leave 26 in the station, thus, the last bus will take all of the 26 passengers, having 50-26=24 seats left empty.*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int passengers=0,bus=50,emptyseats=0;
    cout<<"Enter the number of passager on the station: ";
	cin>>passengers;
    
	passengers%=bus; //Calculate the module of division into input passengers and seats on the bus
	emptyseats=bus - passengers ;
    
    cout<<"Empty Seats: "<<emptyseats;
 
}
