//5.Determinar si una palabra es palindroma

#include <iostream>
#include <conio.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

    string palabra1, palabra2;

    cout<<"Digite un mensaje: "; getline(cin, palabra1);

    palabra2 = palabra1;

    reverse(palabra2.begin(), palabra2.end());

    if(palabra1==palabra2){
        cout<<"La palabra es un palindromo";
    }
    else{
        cout<<"La palabra no es un palindromo";
    }

    getch();
    return 0;
}