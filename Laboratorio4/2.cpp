/*Muestre un menú que calcule las áreas de las siguientes figuras geométricas:
a) Círculo.
b) Cuadrado.
c) Rectángulo.
d) Triángulo.
Dependiendo de la opción ingresada el programa deberá solicitar los datos
necesarios para el cálculo del área.
*/

#include <iostream>

#include <math.h>
using namespace std;

int main()
{
    int opc = 0;
    float radio=0, baseC=0, alturaC=0, baseR=0, alturaR=0, baseT=0, alturaT=0;

    cout << "Introduzca figura a calcular: " << endl;
    cout << "1. circulo" << endl;
    cout << "2. cuadrado" << endl;
    cout << "3.rectangulo" << endl;
    cout << "4. triangulo" << endl;

    cin >> opc;

    switch (opc)
    {
    case 1:
        cout<<"ingrese el valor del radio: ";
        cin>>radio;
        cout<<"el radio es: "<<3.1416*pow(radio,2)<<endl;
        break;

    case 2:
        cout<<"ingrese la base: ";cin>>baseC;
        cout<<"Ingrese la altura: ";cin>>alturaC;
        cout<<"El area es: "<<baseC*alturaC<<endl;
        break;

    case 3:
        cout<<"ingrese la base: ";cin>>baseR;
        cout<<"Ingrese la altura: ";cin>>alturaR;

        cout<<"El area es: "<<baseR*alturaR<<endl;
        break;

    case 4:
        cout<<"ingrese la base: ";cin>>baseT;
        cout<<"Ingrese la altura: ";cin>>alturaT;
        cout<<"El area es: "<<(baseT*alturaT)/2<<endl;
        break;
    
    default:
        cout<<"opcion no valida ";
        break;
    }
return 0;
}
