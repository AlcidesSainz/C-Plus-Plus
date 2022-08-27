//Mismo ejercicio anterior pero con varios alumnos y mostrar el que tiene mejor promedio
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
alumno[100];
int main(){
		float promedio[100];
		int estudiantes;
		float mayor=0;
		int pos;
	//pedir el numero de estudiante
	cout<<"Introduzca la cantidad de estudiantes: ";
	cin>>estudiantes;
	for(int i=0;i<estudiantes;i++){
			cout<<"***DATOS DEL ESTUDIANTE***"<<endl;
				fflush(stdin);
	cout<<"Nombre: ";
	cin.getline(alumno[i].nombre,20,'\n');
	cout<<"Genero: ";
	cin.getline(alumno[i].sexo,20,'\n');
	cout<<"Edad: ";
	cin>>alumno[i].edad;
	cout<<"\n";
	cout<<"***REGISTRO DE NOTAS DEL ESTUDIANTE***"<<endl;
	cout<<"Nota 1: ";
	cin>>alumno[i].prom_alumnos.nota1;
	cout<<"Nota 2: ";
	cin>>alumno[i].prom_alumnos.nota2;
	cout<<"Nota 3: ";
	cin>>alumno[i].prom_alumnos.nota3;
	//Sacar promedio
	promedio[i]=(alumno[i].prom_alumnos.nota1+alumno[i].prom_alumnos.nota2+alumno[i].prom_alumnos.nota3)/3;
	if(promedio[i]>mayor){
		mayor=promedio[i];
		pos=i;
	}	
	}

//MOSTRAR INFO
cout<<"\n***INFORMACION DIGITADA DEL MEJOR ESTUDIANTE***"<<endl;
cout<<"Nombre: "<<alumno[pos].nombre<<endl;
cout<<"Genero: "<<alumno[pos].sexo<<endl;
cout<<"Edad: "<<alumno[pos].edad<<endl;
//Mostrar promedio
cout<<"***PROMEDIO DEL MEJOR ESTUDIANTE***"<<endl;

cout<<"Promedio: "<<promedio[pos];
	
	
	
	getch();
	return 0;
}
