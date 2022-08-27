//Ordenar elementos de un arreglo con punteros
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirD();
void ordenarA(int *,int);
void mostrarA(int *,int);

int nElementos,*elemento;


int main(){
	pedirD();
	ordenarA(elemento, nElementos);
	mostrarA(elemento, nElementos);
	delete[]elemento;
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Digite el numero de elementos de la matriz: ";
	cin>>nElementos;
	
	elemento=new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero: ";
		cin>>*(elemento+i);
	}
}
void ordenarA(int *elemento,int nElementos){
	int aux;
	
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos;j++){
			if(*(elemento+j)>*(elemento+j+1)){
				aux=*(elemento+j);
				*(elemento+j)=*(elemento+j+1);
				*(elemento+j+1)=aux;
			}
		}
	}
}
void mostrarA(int *elemento,int nElementos){
	cout<<"\nMostrando Arreglo ordenado: "<<endl;
	for(int i=0;i<nElementos;i++){
		cout<< *(elemento+i)<<" ";
	}
}	
	
