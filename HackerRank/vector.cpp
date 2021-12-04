#include<iostream>
#include<vector>
#include<bits/stdc++.h>//Permite usar sort()

using namespace std;

int main(){

    int size, temp;
    cin>>size;
    vector<int> arr(size);


    //Llenando un vector 
    for(int i=0;i<size;i++){
        cin>>temp;

        arr.push_back(temp);
        // arr.push_back(x); coloca un elemento al final del arreglo
    }
    //Sorting the vector

    sort(arr.begin(), arr.end());

    //Output vector
    for(int i=0; i<arr.size();i++){
        
        if(arr[i]==0){
            continue;
        }
        else{
        cout<<arr[i]<<" ";
        }
    }


}