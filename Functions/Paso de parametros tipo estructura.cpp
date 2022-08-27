//Paso de parametros tipo esctructura
#include<iostream>
#include<conio.h>
using namespace std;
struct persona{
	char nombre[30];
	int edad;
}p;
void pedirD();
void mostrarD(persona);

int main(){
	pedirD();
	mostrarD(p);
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Ingrese un nombre: ";
	cin.getline(p.nombre,30,'\n');
	cout<<"Ingrese una edad: ";
	cin>>p.edad;
}
void mostrarD(persona p){
	cout<<"\n\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}

