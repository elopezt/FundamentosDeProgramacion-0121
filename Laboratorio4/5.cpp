/*Ingrese tres números enteros desde teclado, a, b y c, y despliegue el mayor.
Restricción: debe haber una sola instrucción cout en todo el programa,
colocada al final. Para lograrlo realice comparaciones y asignaciones. Utilice
una variable auxiliar, que es la que desplegará.*/

#include <iostream>
using namespace std;

int main(){
    int a=0,b=0,c=0, mayor=0;

    cout<<"ingrese 3 numeros: "<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    mayor=a;

    if(b>a && b>c)
    mayor=b;

    if(c>a && c>b)
    mayor=c;

    cout<<"el mayor es: "<< mayor<<endl;

    return 0;
}