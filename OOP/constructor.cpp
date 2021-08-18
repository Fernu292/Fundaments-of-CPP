#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
        //define the constructor
        Painting(string oc){
            painting(oc);
        }
        void painting(string x){
            cout<<x;
        }
        
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}