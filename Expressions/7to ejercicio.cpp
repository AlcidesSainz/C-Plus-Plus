/*la calificación final de un estudiante es el promedio de tres notas: 
-La nota de prácticas que cuenta con un 30% del total
-La nota teórica que cuenta con un 60%
-La nota de participación que cuenta el 10% restante
Escriba un programa que lea las tres notas del alumno y escriba su nota final*/	

#include<iostream>

using namespace std;

int main (){
	float notadepracticas, notateorica,notadeparticipacion, notafinal = 0;
	
 cout<<"Digite la nota de practicas: "; cin>>notadepracticas;
 cout<<"Digite la nota teorica: "; cin>>notateorica;
 cout<<"Digite la nota de participacion: "; cin>>notadeparticipacion;
 
 	notadepracticas = (notadepracticas*0.30);
 	notateorica = (notateorica*0.60);
 	notadeparticipacion=(notadeparticipacion*0.10);
 	
 	notafinal = notadepracticas+notateorica+notadeparticipacion;
 	cout.precision(3);
 	
 	cout<<"La nota de practicas es:"<<notadepracticas<<endl;
 	cout<<"La nota teorica es:"<<notateorica<<endl;
 	cout<<"La nota de participacion es:"<<notadeparticipacion<<endl;
 	cout<<"La nota final es:"<<notafinal<<endl;
 	   
 
 
 
 
 
 
	return 0;
}

