//Estructura llamada corredor con los siguientes campos: nombre,edad,sexo,club,pedir datos al usuario para un corredor
//y formar una categoria de competicion.
/*Juvenil <=18 años
  Señor<=40 años
  Veterano >40 años
Luego imprimir los datos del corredor junto a su categoria de competicion */

#include<iostream>
#include<conio.h>
using namespace std;
struct corredor{
	char nombre[20];
	int edad;
	char genero[20];
	char club [50];
}
corredores[3];
int main(){
	
	
	cout<<"Ingrese los datos de los corredores de la competicion"<<endl;
	for(int i =0;i<3;i++){
		cout<<"\nNombre: ";
		cin.getline(corredores[i].nombre,20,'\n');
		cout<<"Edad: ";
		cin>>corredores[i].edad;
			fflush(stdin);
		cout<<"Sexo: ";
		cin.getline(corredores[i].genero,20,'\n');
		cout<<"Club: ";
		cin.getline(corredores[i].club,50,'\n');
		}
		//Imprimir la info
		cout<<"\n*****Datos de los deportistas*****";
	for(int i=0;i<3;i++){
		cout<<"\nNombre: "<<corredores[i].nombre<<endl;
		cout<<"Edad: "<<corredores[i].edad<<endl;
		cout<<"Sexo: "<<corredores[i].genero<<endl;
		cout<<"Club: "<<corredores[i].club<<endl;
			if(corredores[i].edad<=18){
			cout<<"Categoria: JUVENIL"<<endl;	
		}
		if(corredores[i].edad<=40&&corredores[i].edad>=19){
			cout<<"Categoria: SENIOR"<<endl;	
		}
		if(corredores[i].edad>40){
			cout<<"Categoria: VETERANO"<<endl;
		}
		
	}
	  
	
	getch();
	return 0;
}
