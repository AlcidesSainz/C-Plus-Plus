//Pedir nombre al usuario y devolver el numero de vocales que hay;
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void pedirNombre();
int contarVocales(char *);

char nombre[30];


int main(){
	pedirNombre();
	cout<<"El numero de vocales del nombre es: "<<contarVocales(nombre)<<endl;
	
	
	getch();
	return 0;
}
void pedirNombre(){
	cout<<"Ingrese su nombre: ";
	cin.getline(nombre,30,'\n');	
	strupr(nombre);//PASAR EL NOMBRE A MAYUSCULA
}
int contarVocales(char *nombreU){
	int conteo=0;

		while (*nombreU){
			switch(*nombreU){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':conteo++;
			}
			nombreU++;
		}
		return conteo;	
}
