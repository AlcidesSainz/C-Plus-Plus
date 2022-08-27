//Asignacion dinamica de arreglos
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirNotas();
void mostrarN();
int Ncalif,*calif;

int main(){
pedirNotas();
mostrarN();

delete[] calif;	
	
	getch();
	return 0;
}
void pedirNotas(){
		cout<<"Ingrese el numero de notas: ";
	cin>>Ncalif;
	
		calif= new int[Ncalif];

	for(int i=0;i<Ncalif;i++){
		cout<<"Digite una nota: ";
		cin>>calif[i];
	}
}
void mostrarN(){
	cout<<"\n\nMostrando datos al usuario: \n";
	for(int i=0;i<Ncalif;i++){
		cout<<calif[i]<<endl;
	}
}
