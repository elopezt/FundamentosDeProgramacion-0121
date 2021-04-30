/*Doña Canuta se ubica todos los sábados por la tarde en un puesto improvisado en
el parque central de Antiguo Cuscatlán. Vende riguas, a 75 centavos cada una;
pastelitos de verduras, a 50 centavos cada uno y atol de elote, a 60 centavos cada
vaso. Elabore un programa al que se le pueda introducir desde teclado la cantidad
de riguas, pastelitos y vasos de atol que le pide un cliente, y calcule lo que este
cliente debe pagarle.*/

#include <iostream>
using namespace std;

int main(){
    float r=0.75, p=0.50, e=0.60;
    int cr=0, cp=0,ce=0;
  

    cout<<"# riguas: "<<endl;
    cin>>cr;

    cout<<"# pasteles: "<<endl;
    cin>>cp;

    cout<<"# atol: "<<endl;
    cin>>ce;

    float total = (r*cr)+(p*cp)+(e*ce);
    cout<<"el total es: "<<total<<endl;
    cout<< "el total es: "<< (r*cr)+(p*cp)+(e*ce);

}