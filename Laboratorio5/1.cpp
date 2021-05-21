/*1) Despliegue un menú que le pida al usuario que ingrese una de las siguientes
opciones:
a) Sumar dos números.
b) Restar dos números.
c) Multiplicar dos números.
d) Dividir dos números.
La opción tendrá que ser ingresada por medio de teclado, al igual que los dos
operandos.
*/

#include <iostream>
using namespace std;

int main(){
    int opc=0, n1=0, n2=0;

    cout<<"introduzca n1 y n2: "<<endl;
    cin>>n1>>n2;

    cout<<"ingrese una operacion a realizar: "<<endl;
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"la suma de los 2 numeros es: "<< n1+n2<<endl;
        break;
    
    case 2:
        cout<<"la resta de los 2 numeros es: "<< n1-n2<<endl;
        break;
    
    case 3:
        cout<<"el producto de los 2 numeros es: "<< n1*n2<<endl;
        break;

    case 4:
        cout<<"la division da como resultado: "<<n1/n2<<endl;
        break;

    default:
        cout<<"numero no es valido"<<endl;
        break;
    }

   /* if (opc==1)
        cout<<"la suma de los 2 numeros es: "<< n1+n2<<endl;

    else if(opc==2)
    cout<<"la resta de los 2 numeros es: "<< n1-n2<<endl;

    else if(opc==3)
    cout<<"el producto de los 2 numeros es: "<< n1*n2<<endl;

    else if(opc==4)
    cout<<"la division da como resultado: "<<n1/n2<<endl;

    else{
    cout<<"numero no es valido"<<endl; 
    }*/

    return 0;
}