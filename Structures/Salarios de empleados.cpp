//Programa que lea un arreglo de datos de empleados de la empresa 
//y que imprima los datos del empleado con mayor y menos salario

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct empleado{
	char nombre[20];
	int edad;
	float salario;
}e[100];
int main(){
	float mayor=0;
	float menor=0;
	int pos;
	int neg;
	int n_empleados;
	cout<<"Ingrese el numero de empleados: ";
		cin>>n_empleados;
	cout<<"*****Ingrese los datos de los empleados*****"<<endl;
	for(int i=0;i<n_empleados;i++){
			fflush(stdin);
	cout<<"\nNombre: ";
	cin.getline(e[i].nombre,20,'\n');
	cout<<"Edad: ";
	cin>>e[i].edad;
	cout<<"Salario: ";
	cin>>e[i].salario;
	if(e[i].salario>mayor){
			mayor=e[i].salario;
			pos=i;
	if(e[i].salario<menor){
			menor=e[i].salario;
			neg=i;
	}
		}
}
cout<<"\n*****Datos de empleado con mejor salario*****"<<endl;
		cout<<"\nNombre: "<<e[pos].nombre<<endl;
		cout<<"Edad: "<<e[pos].edad<<endl;
		cout<<"Salario: "<<e[pos].salario<<endl;
cout<<"\n*****Datos de empleado con peor salario*****"<<endl;
		cout<<"\nNombre: "<<e[neg].nombre<<endl;
		cout<<"Edad: "<<e[neg].edad<<endl;
		cout<<"Salario: "<<e[neg].salario<<endl;
	getch();
	return 0;
}
