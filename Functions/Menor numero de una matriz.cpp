//Realizar funcion que devuelva el menor numero de una fila de una matriz
#include<iostream>
#include<conio.h>
using namespace std;
void pedirD();
void mostrarM(int m[][100],int,int);
int comprobarME(int m[][100],int,int);
int m[100][100],nfilas,ncol;


int main(){
	pedirD();
	mostrarM(m,nfilas,ncol);
	cout<<"El menor elemento es: "<<comprobarME(m,nfilas,ncol);
	getch();
	return 0;
}
void pedirD(){
	cout<<"Ingrese el numero de filas: ";
	cin>>nfilas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>ncol;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}	
}
void mostrarM(int m[][100],int nfilas,int ncol){
	cout<<"\nMostrando la matriz"<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int comprobarME(int m[][100],int nfilas,int ncol){
	int fila;
	int menor=9999;
	cout<<"\nDigite el numero de fila para ver el menor elemento: ";
	cin>>fila;

	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(i==fila){
				if(m[i][j]<menor){
					menor=m[i][j];
				}
			}
			
		}
	}
	return menor;
	
}
