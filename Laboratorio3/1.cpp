/*Lea dos valores enteros desde teclado y calcule su suma, resta producto, división,
cociente de la división entera, y residuo de la división entera. Luego despliegue
todos estos resultados. Tome en cuenta que si el segundo valor es cero, habría un
error en tiempo de ejecución. Para evitar esta situación aprenderemos a tomar
medidas más adelante.*/

#include <iostream>
using namespace std;

int main(){
    int a=0, b=0;
    cout<<"ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"ingrese el segundo numero: "<<endl;
    cin>>b;

    int suma=a+b;
    int resta=a-b;
    int producto=a*b;
    int div=a/b;
    int residuo=a%b;


    cout<<"la suma es: "<<a+b<<endl;
    cout<<"la sum es: "<<suma<<endl;

    cout<<"la rest es: "<<a-b<<endl;
    cout<<"la rest es: "<<resta<<endl;

    cout<<"el producto es: "<<a*b<<endl;
    cout<<"el producto es: "<<producto<<endl;

    cout<<"la div es: "<<a/b<<endl;
    cout<<"la div es: "<<div<<endl;

    cout<<"El residuo suma es: "<<a%b<<endl;
    cout<<"El residuo es: "<<residuo<<endl;

    return 0;
}
