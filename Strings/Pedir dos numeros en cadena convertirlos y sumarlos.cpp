//Pedir dos numeros uno entero y otro con coma decimal convertirlos a sus respectivos valores y sumarlos 

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[30];
	char cad1[30];
	int n;
	float f;
	float suma= 0;
	
	cout<<"Digite un numero entero: ";
	cin.getline(cad,30,'\n');
	cout<<"Digite un numero con coma decimal: ";
	cin.getline(cad1,30,'\n');
	n = atoi(cad);
	f = atof(cad1);
	suma = n+f;
	cout<<"\nLa suma de los dos numeros introducidos es: "<<suma<<endl;
	
	
	
	
	
	getch();
	return 0;
}
