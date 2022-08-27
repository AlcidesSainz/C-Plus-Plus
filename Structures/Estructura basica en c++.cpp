//Estructuras basicas en C++

#include <iostream>
#include<conio.h>

using namespace std;

struct mascotas{
	char nombre[50];
	int edad;
	char altura[50];
}
mascota1={"Arya Bonita",5,"mediana"},
mascota2={"Lucy",1,"enana"};

int main(){
	cout<<"Nombre y edad de las mascotas de la casa ";
	cout<<"\n"<<endl;
	cout<<"\nNombre de la primera mascota: "<<mascota1.nombre<<endl;
	cout<<"Edad: "<<mascota1.edad<<endl;
	cout<<"Tamaño: "<<mascota1.altura<<endl;
	
	cout<<"\nNombre de la segunda mascota: "<<mascota2.nombre<<endl;
	cout<<"Edad: "<<mascota2.edad<<endl;
	cout<<"Tamaño: "<<mascota2.altura<<endl;
	
	
	
	getch();
	return 0;
}
