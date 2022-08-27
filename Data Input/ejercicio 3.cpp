/* Realice un programa que lea de la entrada estándar los siguientes datos de una persona
Edad: dato de un tipo entero 
Sexo: dato de tipo caracter
Altura en metros: dato de tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estándar*/

#include<iostream>

using namespace std;

int main (){

	int edad;
	char sexo [9];
	float altura;
	
	cout<<"Digite su edad:"; cin>>edad;
	cout<<"Escriba su sexo:"; cin>>sexo;
	cout<<"Escriba su altura en metros:"; cin>>altura;
	
	cout<<"/Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura:"<<altura<<endl;
	
	
	
	
	return 0;
}
