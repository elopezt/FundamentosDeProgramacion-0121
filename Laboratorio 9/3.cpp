/*Escriba una funci�n de tres argumentos que reciba, desde main, un n�mero entero en base
diez, lo convierte a su binario equivalente y lo almacene en un arreglo que ser� pasado en
el segundo argumento. En el tercer argumento coloque la cantidad de d�gitos claculados.
 Luego, la funci�n main invocar� a una funci�n que imprimir� el n�mero binario, mand�ndole el arreglo y la cantidad de d�gitos calculados.*/
 
 #include <iostream>
 using namespace std;
 
 void decToBinario(int,int*,int*);
 
 int main(){
 	int decimal=0, digitos=0;
 	int *array=new int[100];
 	
 	cout<<"Ingrese el decimal: "<<endl;
 	cin>>decimal;
 	
 	decToBinario(decimal, array,&digitos);
 	for(int i=digitos-1; i>=0; i--){
 		cout<<array[i];
	 }
 	cout<<"El total de digitos calculados es: "<<digitos;
 	return 0;
 }
 
 void decToBinario(int decimal,int* array,int* digitos){
 	int aux=0;
 	
 	while(decimal!=0){  
 		array[aux]+=decimal%2;  0 1 0 1
 		decimal/=2;  2/2 =0
 		aux++;
 		(*digitos)++;
	 }
 }
