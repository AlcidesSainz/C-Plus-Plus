//	Metodo burbuja

#include <iostream>
#include<conio.h>


using namespace std;

int main(){
	int numeros [] = {4,1,3,2,5};
	int i,j,aux;
	
	//	ALGORITMO DEL METODO BURBUJA
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(numeros[j]<numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros [j+1];
				numeros[j+1] = aux;
			}
		}
	}
	cout<<"Ordenamiento descendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\nOrden ascendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	getch ();
	return 0;
}
