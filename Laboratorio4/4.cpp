/*Lea tres números enteros desde teclado y, basándose en comparaciones,
despliegue el mayor. Utilice instrucciones if anidadas.*/

#include <iostream>
using namespace std;

int main(){
    int a=0,b=0,c=0;

    cout<<"ingrese 3 numeros: "<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    cout<<"el mayor es "<< a<<endl;
 
    else if(b>a && b>c)
    cout<<"el mayor es "<<b<<endl;

    else if(c>a && c>b)
    cout<<"el mayor es "<<c<<endl;


    return 0; 
}