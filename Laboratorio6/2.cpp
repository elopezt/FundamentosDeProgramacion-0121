/*2) Solicite n carácteres desde teclado, luego indique la cantidad de vocales y la
cantidad de no vocales que fueron digitados.*/

#include <iostream>
using namespace std;

int main(){
    int n=0, contadorVocales=0, contadorNoVocales=0;
    char aux;
    cout<<"Ingrese n: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<"ingrese un caracter: "<<endl;
        cin>>aux;

        switch (aux)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        contadorVocales++;
        break;

        default:
        contadorNoVocales++;
        break;
                }
    }
    
    cout<<" se ingresaron "<<contadorVocales<<" vocales"<<endl;
  
    cout<<"Se ingresaron "<<contadorNoVocales<<" no vocales"<<endl;
    return 0;

}