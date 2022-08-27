/*Realice un programa que lea de una cadena de caracteres de la entrada estandar y muestre en la salida estandar
cuantas ocurrencias de vocales existen en la cadena*/

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[100];
	int vocal_a = 0,vocal_e = 0,vocal_i = 0,vocal_u = 0,vocal_o=0;
	int vocales= 0;
	cout<<"Introduzca una frase: "<<endl;
	cin.getline(cad,100,'\n');
	
	for ( int i = 0;i<100;i++){
		switch(cad[i]){
			case 'a': vocal_a++;break;
			case 'e': vocal_e++;break;
			case 'i': vocal_i++;break;
			case 'o': vocal_o++;break;
			case 'u': vocal_u++; break;
		}
	}
	
vocales= vocal_a +vocal_e+vocal_i+vocal_u +vocal_o;

cout<<"La cantidad de vocales en la frase son: "<<vocales;
/*	cout<<"Vocal a: "<<vocal_a<<endl;
		cout<<"Vocal e: "<<vocal_e<<endl;
			cout<<"Vocal i: "<<vocal_i<<endl;
				cout<<"Vocal o: "<<vocal_o<<endl;
					cout<<"Vocal u: "<<vocal_u<<endl;
					*/

	
	getch();
	return 0;
}
