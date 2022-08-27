//Ordenamiento Rapid (QuickSort)

#include<iostream>
#include<conio.h>

using namespace std;
void intercambio(float &x,float &y){
	float aux;
	
	aux=x;
	x=y;
	y=aux;
}
	void quickSort(float a[],int primero, int ultimo){
		int i,j,central;
		float pivote;
		//Algoritmo de QUICKSORT
		central = (primero + ultimo)/2;
		pivote= a[central];
		i= primero;
		j=ultimo;
		
		do{
			while(a[i]<pivote)i++;
			while (a[j]>pivote)j--;
			
			if(i<=j){
				intercambio (a[i],a[j]);
				i++;
				j--;
			}
		}while(i<=j);
		if(primero<j){    //Ordenar sublista izquierda
			quickSort(a,primero,j);
		}
		if(i<ultimo){    //Ordenar sublista derecha
			quickSort(a,i,ultimo);
		}
	}
	int main(){
		float arreglo[]={10,8,2,5,1,3,6,4,7,9}; 
			quickSort(arreglo,0,9);
			
			cout<<"Ordenado en forma ascendente: "<<endl;
		
			for(int i = 0;i<10;i++){
				cout<<arreglo[i]<<"|";
			}
					cout<<"\n\nArreglo en forma descendente: "<<endl;
						for(int i=9;i>=0;i--){
							cout<<arreglo[i]<<"|";
			}
	
	getch();
	return 0;
}
