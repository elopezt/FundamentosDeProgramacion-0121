/*Escriba una función que reciba una cadena que contiene letras del alfabeto, cuente la
cantidad de cada una de las vocales que contiene y cuantas celdas tienen un carácter que
no es vocal. Devuelva a main todos estos resultados por medio de argumentos por
referencia.*/

#include <iostream>
using namespace std;

void contarVocales(char *); 
char palabra[30]; 
	
int main(){
	
	cout<<"Escriba una palabra: "<<endl;
	cin.getline(palabra,30,'\n');
	
	contarVocales(palabra);
	return 0;
	
}

void contarVocales(char *palabra){
	int a=0,e=0,i=0,o=0,u=0,otros=0;
	while(*palabra){
		switch(*palabra){
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			
			case 'i':
				i++; break;
			case 'o':
				o++;break;
			case 'u':
				u++;break;
			default:
				otros++;
				break;
		}
		palabra++;
	}
	cout<<"CONTADOR DE VOCALES "<<endl;
	cout<<"A encontrada "<<a<<" veces"<<endl;
	cout<<"E encontrada "<<e<<" veces"<<endl;
	cout<<"I encontrada "<<i<<" veces"<<endl;
	cout<<"O encontrada "<<o<<" veces"<<endl;
	cout<<"U encontrada "<<u<<" veces"<<endl;
	cout<<"Otros caracteres encontrados "<<otros<<" veces"<<endl;;
}
