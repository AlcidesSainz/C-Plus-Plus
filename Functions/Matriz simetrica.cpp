//Desarrollar una funcion que determine si una matriz es simestrica

#include<iostream>
#include<conio.h>
using namespace std;
void pedirD();
int m[100][100],nfilas,ncol;
void mostrarD(int m[][100],int,int);
void comprobarS(int m[][100],int,int);


int main(){

	pedirD();	
	mostrarD(m,nfilas,ncol);
	comprobarS(m,nfilas,ncol);
	
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
			cout<<"-"<<"Ingrese un numero: ";
			cin>>m[i][j];
		}
	}	
}
void mostrarD(int m[][100],int nfilas,int ncol){
	cout<<"\n\nMostrando Matriz Original"<<endl;
	for (int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void comprobarS(int m[][100],int nfilas,int ncol){
	int cont=0;
	if(nfilas==ncol){
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j]==m[j][i]){
				cont++;
				}
			}
		}
	}
	if(cont==nfilas*ncol){
		cout<<"\nLa matriz es simetrica.";
	}else{
		cout<<"\nLa matriz NO es simetrica.";
	}
}
