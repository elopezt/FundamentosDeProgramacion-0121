/*Solicite los coeficientes a, b, y c, de un polinomio de la forma ax2+bx+c, y calcule
sus raíces por medio de la conocido ecuación cuadrática:
a
b b ac
x
2
4
2
  

Para el discriminante
D b 4ac
2
  debe considerar:
Si D > 0, dos soluciones.
Si D = 0, una solución.
Si D < 0, no hay solución real.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a=0,b=0,c=0,d=0;

    cout<<"introduzca un valor para a: "<<endl;
    cin>>a;
    cout<<"introduzca un valor para b: "<<endl;
    cin>>b;
    cout<<"introduzca un valor para c: "<<endl;
    cin>>c;

    d=pow(b,2)-4*a*c;
    cout<<"El discriminante es: "<<d<<endl;

    if(d>0){
        cout<<"Tiene 2 soluciones: "<<endl;
        cout<<"x1: "<<(-b+sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
        cout<<"x2: "<<(-b-sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
    }

    else if(d==0){
        cout<<"solo tiene una solucion real: "<<endl;
        cout<<"x1: "<<(-b+sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
        cout<<"x2: "<<(-b-sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
    }

    else if(d<0)
    cout<<"No hay solucion real "<<endl;


return 0;
} 