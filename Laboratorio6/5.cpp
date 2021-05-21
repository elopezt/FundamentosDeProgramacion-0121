/*Dados dos enteros a y b, que son los límites de un intervalo, muestre todos los
enteros en ese intervalo que son números pares.*/

#include <iostream>
using namespace std;

int main(){
    int a=0, b=0;

    cout<<"ingrese limite a: ";
    cin>>a;
    cout<<"Ingrese limite b: ";
    cin>>b;

    for(int i=a;i<=b;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}