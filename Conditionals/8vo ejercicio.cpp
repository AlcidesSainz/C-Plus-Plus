/* Escriba un programa que lea de la entrada estandar un caracter e indique en la 
salida estandar si el caracter es una vocal minuscula, vocal mayuscula o no es una vocal*/

#include<iostream>

using namespace std;
int main(){
	
	char vocal;
	
	cout<<"Escriba un caracter: "; cin>> vocal;
	
	switch(vocal){
			case 'a':
	    	case 'e':
			case 'i': 
			case 'o':
			case 'u': cout<< "La vocal es minuscula";
			break;
			case 'A':
	    	case 'E':
			case 'I': 
			case 'O':
			case 'U': cout<< "La vocal es mayuscula";
			break;
			default: cout<< "El caracter insertado no es una vocal";
			break;}
		
		
		
	return 0;
}
