//Funcion donde el signo de los elementos sea cambiado
#include<iostream>
#include<conio.h>
using namespace std;
void pedirD();
int vec[100],tam;
void cambiarS(int vec[],int);

int main(){
	pedirD();
	cambiarS(vec,tam);
	getch();
	return 0;
}
void pedirD(){
	cout<<"Ingrese el numero de elementos del vector: ";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<"."<<"Digite un numero: ";
		cin>>vec[i];
	}
}
void cambiarS(int vec[],int tam){
	for(int i=0;i<tam;i++){
			vec[i]*=-1;
			cout<<vec[i]<<" ";
	}
	
}
