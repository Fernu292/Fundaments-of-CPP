/*Make a program that read a numbrer and determinate if it's a 
palindrome and return a message in console*/

#include<iostream>

using namespace std;

int revNum(int y){ //Funcion para invertir un numero 
    int rem, rev=0;

    while (y>0)
    {
        rem=y%10;
        rev=rev*10+rem;
        y/=10;
    }
    return rev;
    
}

bool isPalindrome(int x){
    //Complete the function
    if(x == revNum(x)){
        return true;
    }

    else{
        return false;
    }

}

int main(){

    int n;
    cin>>n;

    if(isPalindrome(n)){
        cout<<n<<" is a palindrome";
    }
    else{
        cout<<n<<" is NOT a palindrome";
    }

    return 0;
}