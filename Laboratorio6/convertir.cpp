/* 11) Solicite un carácter desde teclado. Si es una letra minúscula, despliegue la
mayúscula correspondiente. Si es una letra mayúscula, despliegue la minúscula
correspondiente. Puede valerse de la tabla ASCII para resolver este problema.

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char letra;
 
    cout << "Escriba una letra: ";
    cin >> letra;

    if (letra >= 97 && letra <= 122) //codigos de letras en tabla ASCII
    {
        cout << "Su letra en mayuscula es: " << (letra -= 32); //el 32 se resta hacia el codigo de la letra en mayuscula
    }
    else
    {
        cout << "Su letra en minuscula es: " << (letra += 32); //el 32 se suma hacia el codigo de la letra en minuscula
    }
}*/

/*Solicite un carácter desde teclado. Si es una letra minúscula, despliegue la
mayúscula correspondiente. Si es una letra mayúscula, despliegue la minúscula
correspondiente. Puede valerse de la tabla ASCII para resolver este problema.*/

#include <iostream>

using namespace std;

int main(){

char caracter;

cout<<"Digite un caracter"<<endl;
cin>>caracter;

//A
if (caracter>='A'&& caracter<='Z')
{     //A   + 32         
    caracter -= 'A' - 'a';
    cout<< caracter;
}

else if(caracter>='a'&& caracter<='z')
{    //a    -     32
    caracter -= 'a' - 'A';
    cout<< caracter;

}

    return 0;
}