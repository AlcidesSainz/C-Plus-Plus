//Programa una matriz de 3x3 y escribe un ciclo para que muestre la diagonal principal

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n[3][3]{{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Mostrando la matriz completa"<<endl;
	
	
for(int i = 0;i<3;i++){
	for (int j = 0; j < 3; j++){
			cout<<n[i][j];
	}
cout<<"\n";
}

	cout<<"\nMostrando la diagonal principal"<<endl;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j< 3; j++){
			if(i==j){
				cout<<n[i][j]<<endl;
			
			}
		}
	}
	
	
	getch();
	return 0;
}
