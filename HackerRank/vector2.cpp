//Erease an element

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size, temp, de;
    cin>>size;
    vector<int>v;
    vector<int>dl;

    for(int i=0; i<size;i++){
        cin>>temp;
        v.push_back(temp);
    }
    
    cin>>de;


    for(int i=0;i<2;i++){
        cin>>temp;
        dl.push_back(temp);
    }


    int min, max;

    min = dl[0]-1;
    max = dl[1];



    v.erase(v.begin()+de-1);
    v.erase(v.begin()+min, v.begin()+max);

    size = v.size();

    cout<<size<<endl;

    for(int i=0;i<size;i++){

        cout<<v[i]<<" ";
    }


    return 0;
}
