/*Escriba un programa que defina un vector de numeros y calcule si existe algun numero en el vector 
cuyo valor equivale a la suma del resto de numeros del vector*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int vector[100],numeros,suma = 0,mayor= 0;
	
	cout<<"Digite el numeros de elementos que tendra el arreglo: ";
	cin>>numeros;
	
	for(int i = 0; i<numeros;i++){
	cout<<"Digite los numeros del arreglo: ";
	cin>>vector[i];	
	suma += vector[i];
	
		if(vector[i] > mayor){
			mayor = vector [i];
		}	
	}
	
		if(mayor == suma-mayor){
			cout<<"El numero "<<  mayor  << " equivale a la suma de los otros numeros";
		}
		else{
			cout<<"No existe ningun numero que equivale a la suma de los demas";
		}
	
	
	getch();
	return 0;
} 
