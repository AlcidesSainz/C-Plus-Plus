//Escriba un programa que defina un vector de numeros y calcule la suma de sus elementos

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int n[] = {1,2,3,4,5};
	int suma = 0;
	
	for(int i = 0; i<5; i++){
		suma += n[i];
	}
	
	cout<<"La suma de los elementos del vector es: "<<suma<<endl;
	
	 
	 
	getch();
	return 0;
}
