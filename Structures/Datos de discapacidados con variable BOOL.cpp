/*Defina una estructura que sirva para representar una persona.La estructura debe contener dos campos: nombre y valor de tipo
logico que indica si la persona tiene discapacidad . Realice un programa que dado un vector de personas rellene dos nuevos 
vectores: uno que contenga a las personas que no tienen discapacidad y otro que contenga las personas con discapacidad.*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
struct persona{
	char nombre[20];
	bool discapacidad;
}personas[100],personassinD[100],personasconD[100];
int main(){
	int np,j=0,p=0;
	
	cout<<"Digite el numero de personas: ";
	cin>>np;
	for(int i=0;i<np;i++){
		fflush(stdin);
		cout<<"Ingrese su nombre: ";
		cin.getline(personas[i].nombre,20,'\n');
		cout<<"La persona tiene discapacidad(1/0): ";
		cin>>(personas[i].discapacidad);
		
		if(personas[i].discapacidad==1){
			strcpy(personasconD[j].nombre,personas[i].nombre);
			j++;
		}
		else{
			strcpy(personassinD[p].nombre,personas[i].nombre);
			p++;
			}
		}
		cout<<"Mostrar las personas sin discapacidad: "<<endl;
		for(int i=0;i<p;i++){
			cout<<personassinD[i].nombre<<endl;
		}
		cout<<"Mostrar las personas con discapacidad: "<<endl;
		for(int i=0;i<j;i++){
			cout<<personasconD[i].nombre<<endl;
		}
			
	getch();
	return 0;

	}
	
	




