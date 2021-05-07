/*Solicite el sueldo al usuario y muestre un menú con las opciones de calcular sus
aportes de renta (10%), AFP (6.25%) o ISSS (2%). Muestre el descuento de
acuerdo a la opción seleccionada.*/

#include <iostream>
using namespace std;

int main(){
    float sueldo= 0;
    int opc=0;

    cout<<"ingrese su sueldo: ";
    cin>> sueldo;

    cout<<"seleccione una opcion:"<<endl<<
    "1. renta"<<endl<<
    "2.afp"<<endl<<
    "3.isss"<<endl;
    cin>>opc;

    if(opc==1){
        cout<<"su sueldo con aportes de renta es: "<<sueldo-(sueldo*0.10)<<endl;
    }

    else if(opc==2)
    cout<<"su sueldo con descuento de afp es: "<<sueldo -(sueldo*0.0625)<<endl;

    else if(opc==3)
    cout<<"su sueldo con descuento de isss es: "<<sueldo-(sueldo*0.02)<<endl;

    else
    cout<<"opcion no valida";

    return 0;
}
