#include <iostream>
using namespace std;

//class definition
class Car{
    
    //private area
    private:
        int horsepowers;
    //public area
    public:
        //complete the setter function
        void setHorsepowers(int x) {
            horsepowers = x;
        }
        
        //complete the getter function
        void getHorsepowers(int horsepowers) {
            
            if(horsepowers>=800){
                cout<<"Too much"<<endl;
                cout<<horsepowers;
                
            }
            else{
                cout<<horsepowers;
            }
        }
};


int main() {
    //getting input
    int horsepowers;
    cin >> horsepowers;
    //creating the object of class Car
    Car *car = new Car();
    //setting the value for private member
    car->setHorsepowers(horsepowers);
    //printing the value of private member
    car->getHorsepowers(horsepowers);

    return 0;
}