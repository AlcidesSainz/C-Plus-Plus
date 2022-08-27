/*Escriba un programa que calcule el valor de: 1+2+3...+n*/
#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	
	int n ,suma = 0;

		cout<<"Introduce un numero : "<<endl;
		cin>>n;

		for(int i = 1;i<=n;i++){
			suma = suma + i;
		}
	
		cout<<"El resultado de la operacion es: "<<suma<<endl;			

	


	
	
	
	
	
	getch();
	return 0;
}
