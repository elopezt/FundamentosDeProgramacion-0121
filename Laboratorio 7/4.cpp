/*Escriba una función que, dados los valore x e y de una coordenada, Retorne un entero
que representa al cuadrante en que se encuentra. Si la coordenada es el origen, (0, 0),
retorne 0. Si la coordenada está sobre cualquiera de los ejes, retorne 5.*/

#include <iostream>
using namespace std;

int cuadrantes(int, int);

int main(){
    int x=0, y=0;
    cout<<"Ingrese x,y: "<<endl;
    cin>>x>>y;

    cout<<"El cuadrante correspondiente para "<<x<<","<<y<<" es: "<<cuadrantes(x,y)<<endl;
    return 0;
}

int cuadrantes(int a, int b){
    if(a==0 && b==0)
    return 0;

    else if(a>0 && b>0)
    return 1;

    else if(a<0 && b>0)
    return 2;

    else if(a<0 && b<0)
    return 3;

    else if(a>0 && b<0)
    return 4;

    else return 5;
}