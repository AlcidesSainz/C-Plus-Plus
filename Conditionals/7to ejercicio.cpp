// Esciba un programa que lea de la entrada estandar un caracter e indique en la salida si es una vocal minuscula o no.

#include<iostream>

using namespace std;
int main(){
	
	char letra;
	
	cout<<"Escriba un caracter: "; cin>> letra;
	
	switch(letra){
			case 'a' : cout<< "La vocal es minuscula"	;
			break;
	    	case 'e': cout<< "La vocal es minuscula"	;
			break;
			case 'i': cout<< "La vocal es minuscula"	;
			break;
			case 'o': cout<< "La vocal es minuscula"	;
			break;
			case 'u': cout<< "La vocal es minuscula"	;
			break;
			default: cout<< "El caracter insertado no es una vocal minuscula";
			break;}
		
		
		
	return 0;
}
