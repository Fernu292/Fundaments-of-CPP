#include<iostream>

using namespace std;

int main(){
    int  num;

    cout<<"Digite un numero entre 1-12: ";cin>>num;

    switch (num)
    {
    case 1: cout<<"El mes es enero";
        break;
    case 2: cout<<"El mes es febrero";
        break;
    case 3: cout<<"El mes es marzo";
        break;
    case 4: cout<<"El mes es abril";
        break;
    case 5: cout<<"El mes es mayo";
        break;
    case 6: cout<<"El mes es junio";
        break;
    case 7: cout<<"El mes es julio";
        break;
    case 8: cout<<"El mes es agosto";
        break;
    case 9: cout<<"El mes es septiembre" ;
        break;
    case 10: cout<<"El mes es octubre";
        break;
    case 11: cout<<"El mes es noviembre";
        break;
    case 12: cout<<"El mes es diciembre";
        break;
    default: cout<<"Digite un numero valido entre 1-12";
        break;
    }

    return 0;
}