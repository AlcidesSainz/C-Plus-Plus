//Ordenamiento por selección
#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int numeros []= {3,2,4,1,5};
	int i,j,aux,min;
	
//Algoritmo de Ordenamiento por Selección
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(numeros[j]<numeros[min]){
				min=j;
			}
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]= aux;
	}
	
	cout<<"Ordenamiento ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\nOrdenamiento descendente: ";
	for(j=4;j>=0;j--){
		cout<<numeros[j]<<" ";
	}
	
	
	
	getch();
	return 0;
}
