//Programa que lea numeros en el primer arreglo, los copie a un segundo arreglo pero multiplicados por 2.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a1[6],a2[6];
	
	
	for ( int i = 1; i<6;i++){
	cout<<i<<". Digite los numeros del arreglo: ";
	cin>>a1[i];
	}
	
	for(int i = 1; i<6; i++){
	a2[i]= a1[i]*2;
	}
	cout<<"Los elementos del segundo vector multiplicados por 2 son : \n";
	for ( int i = 1;i<6;i++){
		cout<<a2[i]<<" ";;
	}
	
	
	
	
		
	
	getch();
	return 0;
}
