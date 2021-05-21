/*Dados dos enteros a y b, que son los límites de un intervalo, realice la suma de
todos los números pares, la suma de todos los números impares y muestre
ambos resultados.*/

#include <iostream>
using namespace std;

int main(){
    int a=0, b=0,sumaPares=0, sumaImpares=0;

    cout<<"limite a: "<<endl;
    cin>>a;
    cout<<"limite b: "<<endl;
    cin>>b;

    for(int i=a; i<=b;i++){
        if(i%2==0){
            sumaPares=sumaPares+i;
        }
        else
        sumaImpares=sumaImpares+i;
    }

    cout<<"la suma de los pares es : "<<sumaPares<<endl;
    cout<<"la suma de los impares es : "<<sumaImpares<<endl;

    return 0;
}