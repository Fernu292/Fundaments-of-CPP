#include<iostream>
#include<vector>//Libreria para incluir vectores en C++

using namespace std;

int main(){
    int n; 
    cout<<"Digite el numero de elementos: ";cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}