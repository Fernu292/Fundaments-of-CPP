#include <iostream>
using namespace std;

int recSum(int n) {
    //complete the function
    int num, total = 0;

    for(int i=1; i<=n;){
        num = n;
        total+=num;
        n--;
    }
    return total;
    cout<<total;
}

int main() {
    //getting input
    int n;
    cin >> n;
    
    //call the recursive function and print returned value
    cout<<recSum(n);
    
    return 0;
}