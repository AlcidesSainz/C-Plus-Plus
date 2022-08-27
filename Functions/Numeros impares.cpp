//Vector y mostrar los numeros impares del mismo
#include<iostream>
#include<conio.h>
using namespace std;
void pedirD();
int vec[100],tam;
void impares(int vec[],int tam);
int main(){
	pedirD();
	impares(vec,tam);
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Ingrese el numero de elementos del vector: ";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Ingrese un numero: ";
		cin>>vec[i];
	}
}
void impares(int vec[],int tam){
	int imparesvec[100];
	int j=0;
	for(int i =0;i<tam;i++){
		if (vec[i]%2!=0){
			imparesvec[j]=vec[i];
			j++;
		}
	}
	cout<<"\nImprimiendo numeros impares del vector: ";
	for(int i=0;i<j;i++){
		cout<<imparesvec[i]<<" ";
	}
}
