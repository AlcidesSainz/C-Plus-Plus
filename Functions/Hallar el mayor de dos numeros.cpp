//Encontrar el mayor de dos numeros
#include<iostream>
#include<conio.h>

using namespace std;
//PROTOTIPO DE LA FUNCION
int encontrarMax(int x,int y);
int main(){
	int n1,n2;
	int mayor;
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
	
	mayor=encontrarMax(n1,n2);
	
	cout<<"El mayor de los dos numeros es: "<<mayor;
	getch();
	return 0;
}
//Definiciones de Funcion
int encontrarMax(int x,int y){
	int numMax;
	if(x>y){
		numMax=y;
	}
	else{
		numMax=y;
	}
	return numMax;
}
