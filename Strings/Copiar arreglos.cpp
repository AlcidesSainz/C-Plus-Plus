
//Pedir al usuario una cadena de caracteres, almacenar en arreglo y copiarlo a otro arreglo y mostrarlo

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char cadena[50];
	char arreglo[50];
	cout<<"Digite una frase: "; cin.getline(cadena,50,'\n');
	
	strcpy(arreglo,cadena);
	
	cout<<arreglo;
	
	
	
	getch();
	return 0;
}
