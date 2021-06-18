#include <iostream>
#include <ctime>
using namespace std;

void llenarArreglo(int [],int *);
void llenarArregloAleatorio(int [],int *);
int sumarElementos(int [],int );
float promedioElementos(int [],int );
void susticionElementos(int [],int );
void imprimirArreglo(int [],int);

const int longitudArreglo = 20;

int main(){
    int a[longitudArreglo], n=0,opcion=0;
    bool menu=true;
    
    srand(time(NULL));

    do{
        cout<<"Seleccione una opcion del menu: "<<endl;
        cout<<"1)Llenar arreglo "<<endl;
        cout<<"2)Llenar arreglo aleatoriamente "<<endl;
        cout<<"3)Sumar elementos del arreglo "<<endl;
        cout<<"4)Promedio de elementos del arreglo "<<endl;
        cout<<"5)sustituir elementos del arrego "<<endl;
        cout<<"6)Imprimir arreglo "<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
                llenarArreglo(a,&n);
                break;
            
            case 2:
                llenarArregloAleatorio(a,&n);
                break;
            
            case 3:
                if(n==0)
                    cout<<"El arreglo esta vacio "<<endl;
                else
                    cout<<"La suma de los elementos del arreglo es: "<<sumarElementos(a,n)<<endl;
            break;

            case 4:
                if(n==0)
                    cout<<"El arreglo esta vacio "<<endl;
                else
                    cout<<"El promedio de los elementos del arreglo es: "<< promedioElementos(a,n);
            break;

            case 5:
                if(n==0)
                    cout<<"El arreglo esta vacio "<<endl;
                else
                    cout<<"Sustiyendo numeros: "<<endl;
                    susticionElementos(a,n);
                    cout<<endl;
            break;

            case 6:
            imprimirArreglo(a,n);
            break;

            case 7:
            cout<<"Salir del menu "<<endl;
            menu=false;
            break;

            default:
            cout<<"opcion no valida "<<endl;
        }
    }while(menu);
}

void llenarArreglo(int x[],int *n){
    cout<<"cuantos datos quiere ingresar en el arreglo? "<<endl;
    cin>>*n;
    //8
    if(*n>longitudArreglo){
        cout<<"No se puede exceder de 20";
        *n=0;
    }
    else{
        cout<<"Digite los numeros: "<<endl;
        for(int i=0;i<*n;i++){
            cin>>x[i];
        }
    }
}

void llenarArregloAleatorio(int x[],int *n){
    int a=0,b=0;

    cout<<"cuantos datos desea ingresar? "<<endl;
    cin>>*n;
    
    if(*n>longitudArreglo){
        cout<<"No podemos exceder los 20 datos "<<endl;
        *n=0;
    }else{
        cout<<"Ingrese los limites del rango: "<<endl;
        cin>>a>>b;

        for(int i=a;i<=b;i++)
        x[i]=rand()%(b-a+1)+a;
    }
}

int sumarElementos(int x[],int n){
    int suma=0;

    for(int i=0;i<n;i++){
        suma+=x[i]; 
    }
    return suma;
}

float promedioElementos(int x[], int n){
    return sumarElementos(x,n)/(float)n;
}

void susticionElementos(int x[],int n){
    for(int i=0;i<n;i++){
        if(x[i]<0)
        x[i]=0;
    
        else 
            if(x[i]%2==0)
                x[i]=2;
            
            else
                x[i]=1;
}
}

void imprimirArreglo(int x[],int n){
    if(n==0){
        cout<<"El arreglo aun esta vacio "<<endl;
    }
    else{
        cout<<"Los datos del arreglo son: "<<endl;
        for(int i=0;i<n;i++){
            cout<<x[i]<<endl;
        }
    }
}