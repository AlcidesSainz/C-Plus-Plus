/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. 
El programa debe entregar la suma de los valores mayores a 0 introducidos*/


#include<iostream>
#include<conio.h>

using namespace std;
	
int main(){
	
	int n,suma = 0;
	do{		
	cout<<"Introduzca un numero: "<<endl;
	cin>>n;
	if(n>0){
	suma+= n;
	}	
	}
	while ((n<20&&n!=0)||n>30);	
	cout<<"La suma de los numeros introducidos es: "<<suma<<endl;	
	getch();
	return 0;
}
