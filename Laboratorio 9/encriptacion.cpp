/*Dado una cadena de caracteres, que deben ser introducidos desde teclado, codifique su
contenido utilizando la clave del murciélago. Recuerde que las letras de esta clave tienen
la siguiente equivalencia: m = 0, u = 1, r = 2, c = 3, i = 4, e = 5, l = 6, a = 7, g = 8, o = 9.*/

#include <iostream>
#include <string>
using namespace std;

string clave(string);

int main(){
	string cadena="";
	cin>>cadena;
	cout<<"La cadena encriptada es: "<<clave(cadena);
	
	return 0;
}
	
string clave(string aEncriptar){
	for(int i=0;i<aEncriptar.length();i++ ){
		switch(aEncriptar[i]){
			case 'm':
			aEncriptar[i]= '0';
			break;
			
			case 'u':
			aEncriptar[i]= '1';
			break;
			
			case 'r':
			aEncriptar[i]= '2';
			break;
			
			case 'c':
			aEncriptar[i]= '3';
			break;
			
			case 'i':
			aEncriptar[i]= '4';
			break;
			
			case 'e':
			aEncriptar[i]= '5';
			break;
			
			case 'l':
			aEncriptar[i]= '6';
			break;
			
			case 'a':
			aEncriptar[i]= '7';
			break;
			
			case 'g':
			aEncriptar[i]= '8';
			break;
			
			case 'o':
			aEncriptar[i]= '9';
			break;
		}
	}
	return aEncriptar;
}
