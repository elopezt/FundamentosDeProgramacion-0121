/*Escriba un programa que solicite n números desde el teclado, y calcule: la
suma de todos los números ingresados y su promedio.

#include <iostream>
using namespace std;

int main(){
    int n=0, aux=0,sum=0;

    cout<<"Ingrese n: "<<endl;
    cin>>n;

    for(int i=1; i<=n;i++){
        cout<<"ingrese el numero: ";
        cin>>aux; //2  3  4

        sum=sum+aux;//2 +3+4
    }
    float promedio=0;
    promedio=sum/n;
    cout<<"la suma de los numeros es: "<<sum<<endl;
    cout<<"el promedio es: "<<promedio;
    return 0;
    }*/

#include <iostream>
using namespace std;

int main(){
    int n = 0, aux = 0, sum = 0;

    cout << "Ingrese los datos a ingresar: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> aux;
        sum = sum + aux;
    }
    float prom=0;
    prom = sum / n;

    cout << "La suma de los numeros es: " << sum << endl;
    cout << "El promedio es : " << prom << endl ;

    cout << endl << endl;
}