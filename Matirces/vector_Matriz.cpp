#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; 
    cout<<"Digita el numero de elementos: ";cin>>n;

    vector< vector<int> >matriz(n);

    for(int i=0;i<n;i++){

        vector<int>v1;

        for(int j=0;j<n;j++){
            int m; cin>>m;
            v1.push_back(m);
        }

        matriz.push_back(v1);
    }

    cout<<"\n**Matriz**";

    for(int i=0;i<matriz.size();i++){

        for(int j=0;j<matriz[i].size();j++)
            cout<<matriz[i][j]<<" ";
        cout<<endl;
     }


    return 0;
}