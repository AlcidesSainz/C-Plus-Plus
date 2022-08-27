/*Estructura alumno con los datos:
Nombre
edad
promedio
PEDIR DATOS
3 ALUMNOS 
COMPROBAR CUAL TIENE EL MEJOR PROMEDIO
IMPRIMIR LOS DATOS*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}a[3];
int main(){
	float mayor=0;
	int pos;
	cout<<"*****Ingrese los datos de los estudiantes*****"<<endl;
	for(int i=0;i<3;i++){
			fflush(stdin);
	cout<<"\nNombre: ";
	cin.getline(a[i].nombre,20,'\n');
	cout<<"Edad: ";
	cin>>a[i].edad;
	cout<<"Promedio: ";
	cin>>a[i].promedio;
	if(a[i].promedio>mayor){
			mayor=a[i].promedio;
			pos=i;
		}
}
cout<<"\n*****Datos del alumno con mejor promedio*****"<<endl;
		cout<<"\nNombre: "<<a[pos].nombre<<endl;
		cout<<"Edad: "<<a[pos].edad<<endl;
		cout<<"Promedio: "<<a[pos].promedio<<endl;
		
	
	getch();
	return 0;
}
