/*Escriba una función que indique si un valor, x, está contenido en el intervalo cerrado [a,
b]. Su función debe recibir los tres enteros, a, b, y x. Deberá retornar un valor
booleano.*/

#include <iostream>
using namespace std;

bool verificar(int,int,int);

int main(){
    int x=0,a=0, b=0;

    cout<<"Ingrese el intervalor: "<<endl;
    cin>>a>>b;

    cout<<"ingrese su numero a verificar: "<<endl;
    cin>>x;

    if(verificar(x,a,b)){
        cout<<"El numero esta dentro del rango "<<endl;
    }
    else cout<<"Numero fuera del rango"<<endl;

    return 0;
}

bool verificar(int n, int x, int y){
    if(n>=x && n<=y)
    return true;
    else
    return false;
}