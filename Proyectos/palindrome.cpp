#include<iostream>
using namespace std;

class Solution{
    public:
        bool isPalindrome(int x){

        }


        int revInt(int y){
            int rem, rev=0;

            while (y>0)
            {
                rem=y%10;
                rev=rev*10+rem;
                y/=10;
            }
            return rev;
        }
};



int main(){
    Solution = &s;
    
}