//Programa que lea de la entrada estandar un vector de enteros y determinar el mayor elemento del vector

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n[100],e,nm = 0;
	
	cout<<"Digite el numero de elementos para el arreglo: ";
	cin>>e;
	
	for(int i = 0;i<e;i++){
		cout<<i+1<<"-"<<"Digite un numero: ";
		cin>>n[i];
		if(n[i]>nm){
		nm = n[i];
		
		}
	
	}
	cout<<"\nEl numero mayor del arreglo es:  "<<nm<<endl;
	
	getch();
	return 0;
}
