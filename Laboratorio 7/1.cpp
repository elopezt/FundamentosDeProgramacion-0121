#include <iostream>
using namespace std;

int mcd(int,int,int);

int main(){
    int mayor=0, menor=0,residuo=0;

    cout<<"MCD DE DOS NUMEROS "<<endl;

    cout<<"digite el mayor y el menor "<<endl;
    cin>>mayor>>menor;
/*
    do{
        residuo=mayor%menor;
        if(residuo!=0){
        mayor=menor;
        menor=residuo;}
    }while (residuo!=0);
    
    cout<<"EL MCD  ES:"<<menor;
*/
    cout<<"el mcd es: "<<mcd(mayor, menor, residuo);
    return 0;    
}

int mcd(int a, int b, int residuo){
    do{
        residuo=a%b;
        if(residuo!=0){
        a=b;
        b=residuo;}
    }while (residuo!=0);
    
    return b;
}