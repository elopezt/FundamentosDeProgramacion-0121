/*El valor de ex
se puede aproximar mediante la serie:
Note que es una sumatoria de infinitos términos, pero, en la práctica, con unos cuantos
términos se obtiene una muy buena aproximación. Escriba una función que reciba como
parámetros el valor de x y la cantidad de términos a incluir en la sumatoria, luego
calcule una aproximación de ex
. Esta función deberá retornar el valor calculado.
*/

#include <iostream>
#include <math.h>
using namespace std;

float serie(int,int);

int main(){
    int x=0, n=0;

    cout<<"Ingrese el numero de datos: "<<endl;
    cin>>n;
    cout<<"Ingrese el valor de la x: "<<endl;
    cin>>x;

    cout<<"el resultado es: "<< serie(n,x);
    return 0;
}

float serie(int k,int y){
    double resultado=1;
    int factorial=1;
    
    for(int i=1;i<=k;i++){
        factorial=factorial*i;
        resultado=resultado+(pow(y,i)/factorial);
    }
    return resultado;
}