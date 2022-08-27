//Matriz entera 2*2 llenarla de numeros y luego copiar su contenido a otra matriz

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n[2][2] {{1,2},{4,5}};
	int n2 [2][2];
cout<<"Mostrando la matriz principal"<<endl;

	for(int i = 0; i <2;i++){
		for(int j = 0;j<2;j++){
		cout<<n[i][j];
		
	}
	cout<<"\n";
	}
	//Copiando la matriz 1 a la 2
	
	for(int i = 0; i <2;i++){
		for(int j = 0;j<2;j++){
		n2[i][j] = n[i][j];
		
		
		}
	}
			
cout<<"\nMostrando la copia de la matriz original"<<endl;
for(int i = 0; i <2;i++){
		for(int j = 0;j<2;j++){
			cout<<n2[i][j];}
			cout<<"\n";}
			
	
	
	
	getch();
	return 0 ;
}
