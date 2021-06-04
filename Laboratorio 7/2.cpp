/*Escriba una función para determinar si un año es, o no, bisiesto. Su función deberá
recibir como parámetros el año y deberá retornar un valor booleano de acuerdo a si el
año cumple ser bisiesto o no. Utilice el algoritmo ya visto en clases anteriores.
*/

#include <iostream>
using namespace std;

bool esBisiesto(int);

int main(){
    int a=0;

    cout<<"ingrese el año a verificar: "<<endl;
    cin>>a;

    if(esBisiesto(a)){
        cout<<"es bisiesto"<<endl;
    }
    else
    cout<<"no es bisiesto"<<endl;

    return 0;

}

bool esBisiesto(int year){
    if(year>0){
        if(year%400==0 || (year%4==0 && year%100!=0))
        return true;

        else
        return false;
    }
}