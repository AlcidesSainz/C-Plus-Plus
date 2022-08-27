/*Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y
,a continuacion la lectura de todo el fichero*/
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void lectura();

int main(){
	lectura();
	
	system("pause");
	return 0;
}
void lectura(){
	ifstream archivo;
	string nombreArchivo;
	string texto;
	cout<<"Digite el nombre o la ubicacion del archivo o fichero: ";
	getline(cin,nombreArchivo);
	
		archivo.open(nombreArchivo.c_str(),ios::in);
	
	if(archivo.fail()){
		cout<<"ERROR"<<endl;
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
	
	
}

