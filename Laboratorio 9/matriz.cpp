#include <iostream>
using namespace std;

int main(){
	int numeros[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite el elemento correspondiente a ["<<i<<"]["<<j<<"]: "<<endl;
			cin>>numeros[i][j];
		}
	}
	
	cout<<"MATRIZ: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j]<<"  ";
		}
		cout<<"\n";
	}
	return 0;
}
