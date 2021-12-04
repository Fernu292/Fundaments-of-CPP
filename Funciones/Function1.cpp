//Make a program that print in screen if a int number is a 
//palindrome, with a function 

#include<iostream>

using namespace std;

bool isPalindrome(int x){
	int y;
	
	y=x;
	
	int temp=((y%10)*10);
	y=y/10;
	
	y+=temp;
	
	if(x==y){
		return true;
	}
}


int main(){
	
	int n;
	cin>>n;
	
	if(isPalindrome(n)==true){
		cout<<n<<" is a palindrome";
	}
	else{
		cout<<n<<" is NOT a palindrome";
	}
	
	return 0;
}
