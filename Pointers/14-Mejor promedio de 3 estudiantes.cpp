/*Hacer una estructura llamada alumnos con los siguientes campos: nombre,edad,promedio,pedir datos para tres alumnos 
y comprobar cual de los 3 tiene el mejor promedio e imprimir sus datos
NOTA: Usar punteros a estructuras*/
#include<iostream>
#include<conio.h>
using namespace std;
struct Alumnos{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3],*puntero_alumno = alumno;
void pedirDatos();
void mejorNota(Alumnos *);


int main(){
pedirDatos();	
mejorNota(puntero_alumno);	
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"                 DATOS DE LOS ALUMNOS";
	for(int i = 0;i<3;i++){
		fflush(stdin);
		cout<<"\nIngrese su NOMBRE: ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Digite su EDAD: ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Digite su PROMEDIO: ";
		cin>>(puntero_alumno+i)->promedio;
	}
}
void mejorNota(Alumnos *puntero_alumno){
	float mayor = 0.0;
	int pos=0;
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio>mayor){
			mayor=(puntero_alumno+i)->promedio;
			pos=i;
	}
}
cout<<"\nEl ALUMNO con MEJOR PROMEDIO es: \n";
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}
