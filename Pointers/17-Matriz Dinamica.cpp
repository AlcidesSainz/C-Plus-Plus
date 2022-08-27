//Matriz Dinamica 
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirDatos();
void mostrarMatriz(int **,int,int);
int **puntero_matriz,nfilas,ncol;
int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nfilas,ncol);
	for(int i=0;i<nfilas;i++){
		delete[]puntero_matriz[i];}
		
		delete[]puntero_matriz;
		
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Numero de Filas: ";
	cin>>nfilas;
	cout<<"Numero de Columnas: ";
	cin>>ncol;
	
	puntero_matriz = new int *[nfilas];
	for(int i=0;i<nfilas;i++){
		puntero_matriz[i] = new int [ncol];
	}
	cout<<"\nIntroduciendo datos a la matriz:";
	for(int i=0;i<nfilas;i++){
		for (int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
}
void mostrarMatriz(int **puntero_matriz,int nfilas,int ncol){
	cout<<"\nImprimiendo la matriz: \n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(puntero_matriz+i)+j);
		}
		cout<<"\n";
	}
}
