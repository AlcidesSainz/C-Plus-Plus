//A�adir texto al final de un archivo
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void aniadir();

int main(){
	aniadir();
	
	

	system("pause");
	return 0;
}
void aniadir(){
	ofstream archivo;
	string texto,nombreArchivo;
	char respuesta;
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(),ios::app);   //A�ADIR TEXTO A UN ARCHIVO
	
	if(archivo.fail()){
		cout<<"ERROR"<<endl;
		exit(1);
	}
		
		do{
			cout<<"Ingrese el texto que desee a�adir: ";
		getline(cin,texto);
		archivo<<texto<<endl;
		
		cout<<"Desea a�adir mas texto(S/N): ";
		cin>>respuesta;
			fflush(stdin);
	
}while((respuesta == 's') ||(respuesta == 'S'));
archivo.close();	
}
