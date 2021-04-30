/*Escriba un programa que calcule el valor de la distancia recorrida (m) para un
objeto que se mueve a velocidad constante (m/s), durante un tiempo dado en
segundos. Utilice para ello la fórmula d = v * t. Escoja el tipo apropiado para
declarar cada variable. Además de desplegar el valor de la distancia recorrida,
también despliegue la dirección de memoria RAM en la que se encuentra cada una
de las tres variables del problema.*/

#include <iostream>
using namespace std;

int main(){
    float d=0, v=2, t=0;
    
    cout<<"introducir t: "<<endl;
    cin>>t;

    d= v*t;

    cout<<"d = "<<d<<endl;

    cout<<"direccion de memoria de d "<< &d<<endl;
    cout<<"direccion de memoria de v "<< &v<<endl;
    cout<<"direccion de memoria de t "<< &t<<endl;


    return 0;
}