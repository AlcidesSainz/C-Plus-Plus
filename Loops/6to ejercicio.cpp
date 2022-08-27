/*Escriba un programa que calcule x elevado a la y,donde tanto x como y son enteros positivos, sin utilizar la funcion pow.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	
	int x ,y ,o = 1;

		cout<<"Introduce un numero positivo para x: "<<endl;
		cin>>x;
		cout<<"Introduce un numero positivo para y: "<<endl;
		cin>>y;	
		
		for(int i = 1;i<=y;i++){
			o = o * x;
		}
	
		cout<<"El resultado de la operacion es: "<<o<<endl;			

	


	
	
	
	
	
	getch();
	return 0;
}
