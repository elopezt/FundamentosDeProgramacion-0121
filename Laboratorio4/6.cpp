/*Dados tres números enteros, a, b, y c, que se ingresan desde teclado,
despliéguelos en orden ascendente. Restricción: debe haber una sola
instrucción cout en todo el programa, colocada al final, la cual será: cout <<
a << “ “ << b << “ “ << c;. Para lograrlo realice comparaciones e intercambios.*/

#include <iostream>
using namespace std;

int main(){
    int a=0,b=0,c=0,aux=0;

    cout<<"ingrese 3 numeros: "<<endl;
    cin>>a>>b>>c;

    if(b<a){
        aux=a;
        a=b;
        b=aux;
    }

    if(c<a){
        aux=a;
        a=c;
        c=aux;
    }

    if(c<b){
        aux=b;
        b=c;
        c=aux;
    }

    cout<<"los datos ordenados ascendenteente son: " <<endl<<a <<endl<< b << endl << c<<endl;
}