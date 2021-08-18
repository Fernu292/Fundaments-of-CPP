#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        int set_age(int x){
            age = x;
            
            return age;
        }
        int set_standard(int a){
            standard = a;
            
            return standard;
        }
        
        string set_first_name(string name){
            first_name = name;
            return first_name;
        }
        
        string set_last_name(string name2){
            
            last_name = name2;
            return last_name;
        }
        int get_age(){
            return age;
        }
        string get_last_name(){
            return last_name;
        }
        string get_first_name(){
            return first_name;
        }
        int get_standard(){
            return standard;
        }
        
        string to_string(){
            stringstream frase;
            frase<<age<<','<<first_name<<','<<last_name<<','<<standard;
            string resultado;
            
            resultado = frase.str();
            return resultado;
                                  
             
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
