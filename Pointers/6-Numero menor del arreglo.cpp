//Utilizando punteros determinar el numero menor del arreglo
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[100],nelementos,menor=999999;
	int *dir_numeros;

	cout<<"      Pedir elementos del arreglo"<<endl;
		cout<<"Digite el numero de elementos del arreglo: ";
		cin>>nelementos;
	for(int i=0;i<nelementos;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i];
	}
	dir_numeros=numeros;
for(int i=0;i<nelementos;i++){
	if(*dir_numeros<menor){
		menor= *dir_numeros;
	
	}
	dir_numeros++;
}
cout<<"El menor elemento es: "<<menor<<endl;

	
	
	
	getch();
	return 0;
}
