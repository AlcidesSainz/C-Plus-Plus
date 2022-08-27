//Ordenamiento SHELL

#include<iostream>
#include<conio.h>

using namespace std;

//Algoritmo de Shell
void intercambio(float & x,float & y){
	float aux;
	
	aux=x;
	x=y;
	y=aux;
}
void ordenacionShell(float a[],int n){
	int salto,i,j,k;
	salto = n/2;
	
	while (salto >0){
		for(i=salto;i<n;i++){
			j=i-salto;
			while(j>=0){
				k=j+salto;
				if(a[j]<=a[k]){
					j=-1;
				}
				else{
					intercambio(a[j],a[k]);
					j=j-salto;
				}
			}
		}
		salto=salto/2;
	}
}

int main(){
float arreglo [] = {4,6,1,9,2,5,7,8,10,3};

ordenacionShell(arreglo,10);

cout<<"Arreglo ordenado - Orden Ascendente: ";
for(int i=0;i<10;i++){
	cout<<arreglo[i]<<" ";
}
cout<<"\nArreglo Descendente: ";
for(int i=9;i>=0;i--){
	cout<<arreglo[i]<<" ";
}
	
	getch();
	return 0;
}
