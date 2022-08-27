//Transformar una cadena a numeros -FUNCION atoi() y atof()

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[]="123";
	char cad1[]="123.45";
	int numero;
	float numero1;
	numero = atoi(cad);
	numero1 = atof(cad1);
	cout<<numero<<endl;
	
	cout<<"\n"<<numero1<<endl;
	
	
	
	getch();
	return 0;
}
