/*Hacer 2 estructuras una llamada promedio que tendra los siguientes campos:
nota1
nota2
nota3
y otra llamada que tendra los siguientes miembros:
nombre
sexo
edad
hacer que la estructura promedio este anidada a la de alumno,pedir todos los datos para un alumno
calcular su promedio e imprimir los datos incluido el promedio*/

#include<iostream>
#include<conio.h>

using namespace std;
struct promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct alumno{
	char nombre[20];
	char sexo [20];
	int edad;
	struct promedio prom_alumnos;
}
alumno[1];
int main(){
	float promedio=0;
	cout<<"***DATOS DEL ESTUDIANTE***"<<endl;
	cout<<"Nombre: ";
	cin.getline(alumno[1].nombre,20,'\n');
	cout<<"Genero: ";
	cin.getline(alumno[1].sexo,20,'\n');
	cout<<"Edad: ";
	cin>>alumno[1].edad;
	cout<<"\n";
	cout<<"***REGISTRO DE NOTAS DEL ESTUDIANTE***"<<endl;
	cout<<"Nota 1: ";
	cin>>alumno[1].prom_alumnos.nota1;
	cout<<"Nota 2: ";
	cin>>alumno[1].prom_alumnos.nota2;
	cout<<"Nota 3: ";
	cin>>alumno[1].prom_alumnos.nota3;
//MOSTRAR INFO
cout<<"\n***INFORMACION DIGITADA DEL ESTUDIANTE***"<<endl;
cout<<"Nombre: "<<alumno[1].nombre<<endl;
cout<<"Genero: "<<alumno[1].sexo<<endl;
cout<<"Edad: "<<alumno[1].edad<<endl;
//Mostrar promedio
cout<<"***PROMEDIO DEL ESTUDIANTE***"<<endl;
promedio=(alumno[1].prom_alumnos.nota1+alumno[1].prom_alumnos.nota2+alumno[1].prom_alumnos.nota3)/3;
cout<<"Promedio: "<<promedio;
	
	
	
	getch();
	return 0;
}
