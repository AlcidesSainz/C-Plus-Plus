#include<iostream>
#include<conio.h>
using namespace std;

struct atletas{
	char nombre[20];
	char pais[20];
	int n_medallas;
}a[100];
int main(){
	int n_atletas;
	int mayor;
	int pos;
cout<<"Digite la cantidad de atletas: ";
cin>>n_atletas;
cout<<"****Datos de los atletas****"<<endl;
	for(int i=0;i<n_atletas;i++){
		fflush(stdin);
		cout<<"\nNombre: ";
		cin.getline(a[i].nombre,20,'\n');
		cout<<"Pais: ";
		cin.getline(a[i].pais,20,'\n');
		cout<<"Cantidad de medallas: ";
		cin>>a[i].n_medallas;
		if(a[i].n_medallas>mayor){
			mayor=a[i].n_medallas;
			pos=i;
		}
	}
	cout<<"\n***ATLETA CON MAYOR NUMERO DE MEDALLAS***"<<endl;
	cout<<"Nombre: "<<a[pos].nombre<<endl;
	cout<<"Pais: "<<a[pos].pais<<endl;
	
	getch();
	return 0;
}
