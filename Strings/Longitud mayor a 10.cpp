//Hacer un programa que pida al ususario una cadena de caracteres, luego que mida la longitud, 
//y si esta supera los 10 caracteres que no lo muestre en pantalla

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char frase[20];
	int longitud=0;
	
	cout<<"Digite una frase que no exceda los 10 caracteres: ";cin.getline(frase,20,'\n');
	
	longitud=strlen(frase);
	
	if(longitud>10){
		cout<<"Su frase excede el limite requerido"<<endl;
	}else{
		cout<<"El numero de caracteres de su frase son: "<<longitud;
	}
	
	
	
	
	
	getch();
	return 0;
}
