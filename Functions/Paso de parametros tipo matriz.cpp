//Paso de parametros por matriz
//Elevar al cuadrado elementos de una matriz
#include<iostream>
#include<conio.h>
using namespace std;
void mostrarM(int m[][3],int,int);
void cuadrado(int m[][3],int,int);

int main(){
	const int nfilas=2;
	const int ncolum=3;
	int m[nfilas][ncolum]={{1,2,3},{4,5,6}};
	
	mostrarM(m,nfilas,ncolum);
	cuadrado(m,nfilas,ncolum);
	
	getch();
	return 0;
}
void mostrarM(int m[][3],int nfilas,int ncolum){
	cout<<"Mostrando la matriz original: "<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncolum;j++){
			cout<<m[i][j]<<" ";
		}
			cout<<"\n";
	}
}
void cuadrado(int m[][3],int nfilas,int ncolum){
	cout<<"Mostrando matriz elevada al cuadrado: "<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncolum;j++){
			m[i][j]*=m[i][j];
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}
