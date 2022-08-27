//Archivos BINARIOS
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
struct Registro{
	char nombre[20];
	char apellido[20];
};

void escribir();
void leer();

int main(){
	escribir();
	leer();

	getch();
	return 0;
}
void escribir(){
	ofstream archivoB;
	
	archivoB.open("PRUEBA BINARIO.dat",ios::out | ios:: binary);
	
	if(archivoB.fail()){
		cout<<"ERROR"<<endl;
		exit(1);
	}	
	Registro persona;
	cout<<"Pidiendo DATOS"<<endl;
	cout<<"Nombre: ";
	cin.getline(persona.nombre,20,'\n');
	cout<<"Apellido: ";
	cin.getline(persona.apellido,20,'\n');
	
	//Escribimos datos en el archivo BINARIO
	archivoB.write((char *)&persona,sizeof (Registro));
	archivoB.close();
}
void leer(){
	ifstream archivoB;
	
	archivoB.open("PRUEBA BINARIO.dat",ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"ERROR"<<endl;
		exit(1);
}
Registro persona;
archivoB.read((char *)&persona,sizeof(Registro));
cout<<"\nMOSTRANDO LOS DATOS DEL REGISTRO"<<endl;
cout<<"NOMBRE: "<<persona.nombre<<endl;
cout<<"APELLIDO: "<<persona.apellido<<endl;
archivoB.close();
}
