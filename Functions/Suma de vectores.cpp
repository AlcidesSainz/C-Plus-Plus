//Realice una funcion que tome como paramatros un vector de numeros enteros y devuelva la suma de sus elementos
#include<iostream>
#include<conio.h>
using namespace std;
void pedirA();
int vec[100],tam;

int sumar(int vec[],int);

int main(){
	pedirA();
	sumar(vec,tam);
	cout<<"La suma de los elementos del vector es: "<<sumar(vec,tam)<<endl;
	
	getch();
	return 0;
}
void pedirA(){
	cout<<"Ingrese el numero de elementos del vector: ";
	cin>>tam;
		for(int i =0;i<tam;i++){
		cout<<i+1<<"."<<"Ingrese los numeros para el vector: ";
		cin>>vec[i];
	} 
}
int sumar(int vec[],int tam){
	int suma=0;
	for(int i=0;i<tam;i++){
suma+=vec[i];	
}
return suma;
}

