#include <iostream>
using namespace std;

int main(){
	int n=0,i=0;
	
	cout<<"Ingrese el tamanio del arreglo: "<<endl;
	cin>>n;
	
	int a[n],b[n],c[n];
	
	while(i<n){
	
	cout<<"Ingrese el numero del primer arreglo: "<<endl;
	cin>>a[i];
	cout<<"Ingrese el numero del segundo arreglo: "<<endl;
	cin>>b[i];
	c[i]=a[i]+b[i];
	i++;
}
	i=0;
	while(i<n){
		cout<<c[i]<<"  ";
		i++;
	}
	return 0;
}

