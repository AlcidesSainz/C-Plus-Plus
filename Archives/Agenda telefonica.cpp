/*Hacer una guia telefonica
	1.Crear (nombre,apellidos,numero)
	2.Agregar mas contactos(nombre,apellido,numero)
	3.Visualizar contactos existentes
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;
void menu();
void crear_contacto();
void aniadir_contacto();
void lectura_agenda();
int main(){
	
menu();	
	
	
	system("pause");
	getch();
	return 0;
}
void menu(){
	int opcion;
	do{
		cout<<"\t\tMENU\n";
	cout<<"1.Crear"<<endl;;
	cout<<"2.Agregar mas contactos"<<endl;
	cout<<"3.Visualizar contactos"<<endl;
	cout<<"4.SALIR"<<endl;
	cout<<"OPCION: ";
	cin>>opcion;
	switch(opcion){
		case 1: crear_contacto();
				break;
		case 2: aniadir_contacto();
				break;		
		case 3: lectura_agenda();
				break;
			
		case 4: break;

	}
			system("pause");
		system("cls");	
}while(opcion!=4);
	
}
void crear_contacto(){
	string nombreArchivo;
	string n_contacto;
	string a_contacto;
	string tel_contacto;
	ofstream archivo;
	
	
	fflush(stdin);
	cout<<"Ingrese el nombre del archivo: ";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(),ios::out);//Crear
	
	if(archivo.fail()){
		cout<<"ERROR";
		exit(1);
	}
	cout<<"Nombre del contacto: ";
	getline(cin,n_contacto);
	cout<<"Apellido del contacto: ";
	getline(cin,a_contacto);
	cout<<"Telefono del contacto: ";
	getline(cin,tel_contacto);
	archivo<<"Nombre: "<<n_contacto<<endl;
	archivo<<"Apellido: "<<a_contacto<<endl;
	archivo<<"Telefono: "<<tel_contacto<<endl;
	archivo<<" "<<endl;
		
archivo.close();
}
void aniadir_contacto(){
	string n_contacto;
	string a_contacto;
	string tel_contacto;
	char opc;
	ofstream archivo;
	
	archivo.open("AGENDA TELEFONICA.txt",ios::app);//AÑADIR
	
	if(archivo.fail()){
		cout<<"ERROR";
		exit(1);
	}
	do{
		fflush(stdin);
		cout<<"\t\tIngrese el nuevo contacto\n";
			cout<<"Nombre del contacto: ";
			getline(cin,n_contacto);
			cout<<"Apellido del contacto: ";
			getline(cin,a_contacto);
			cout<<"Telefono del contacto: ";
			getline(cin,tel_contacto);
	archivo<<"Nombre: "<<n_contacto<<endl;
	archivo<<"Apellido: "<<a_contacto<<endl;
	archivo<<"Telefono: "<<tel_contacto<<endl;
	archivo<<" "<<endl;
			
			cout<<"¿Desea agregar otro CONTACTO?(S/N): ";
			cin>>opc;
	}while((opc == 'S') || (opc == 's'));	
	archivo.close();
}
void lectura_agenda(){
	ifstream archivo;
	string  contactos;
	
	archivo.open("AGENDA TELEFONICA.txt",ios::in);//LEER
	
	if(archivo.fail()){
		cout<<"ERROR";
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,contactos);
		cout<<contactos<<endl;
	}
	archivo.close();	
}

