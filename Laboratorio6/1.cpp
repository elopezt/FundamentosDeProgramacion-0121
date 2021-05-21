/*1) Solicite n carácteres desde teclado y luego indique cuántas vocales han sido
digitadas*/

#include <iostream>
using namespace std;

int main(){
    int n=0, contadorA=0, contadorE=0,ContadorI=0, contadorO=0, contadorU=0;
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
            contadorA++;
            break;

        case 'e':
            contadorE++;
            break;
        
        case 'i':
            ContadorI++;
            break;
        
        case 'o':
        contadorO++;
        break;

        case 'u':
        contadorU++;
        break;
        }
    }
    
    cout<<" la a se ingreso "<<contadorA<<" veces"<<endl;
    cout<<" la e se ingreso "<<contadorE<<" veces"<<endl;
    cout<<" la i se ingreso "<<ContadorI<<" veces"<<endl;
    cout<<" la o se ingreso "<<contadorO<<" veces"<<endl;
    cout<<" la u se ingreso "<<contadorU<<" veces"<<endl;
    return 0;

}