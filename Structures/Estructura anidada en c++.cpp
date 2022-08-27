//Estructuras anidadas C++

#include<iostream>
#include<conio.h>
using namespace std;

struct info_direccion{
	char direccion [30];
	char ciudad[20];
	char provincia[20];
};
struct empleado {
	char nombre[50];
	struct info_direccion dir_empleado;
	double salario;
}
empleado[2];
int main(){
	for(int i=0;i<2;i++){
		fflush(stdin);//Vaciar el buffer y permitir digitar mas datos
		cout<<"Nombre: ";
		cin.getline(empleado[i].nombre,20,'\n');
		cout<<"Direccion: ";
		cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
		cout<<"Ciudad: ";
		cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
		cout<<"Provincia: ";
		cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
		cout<<"Salario: ";
		cin>>empleado[i].salario;
		cout<<"\n";	
	}
	//Imprimir datos
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<empleado[i].nombre<<endl;
		cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleado[i].salario<<endl;
		cout<<"\n";	
		}
	
	
	getch();	
	return 0;
}
