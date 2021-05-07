/*Dado como dato de entrada el sueldo de un trabajador, considere un aumento
del 15% si su sueldo es inferior a 1000 y de un 12% en caso contrario. Imprima
el nuevo sueldo del empleado.*/

#include <iostream>
using namespace std;

int main(){
    float sueldo;

    cout<<"ingrese su sueldo: "<<endl;
    cin>>sueldo;

    if(sueldo<1000){
        cout<<"su nuevo sueldo es: "<<sueldo+(sueldo*0.15)<<endl;
    }

    if(sueldo>=1000)
    cout<<"su nuevo sueldo es: "<< sueldo + (sueldo*0.12)<<endl;

    return 0;


}