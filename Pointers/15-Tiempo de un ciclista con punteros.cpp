//Medir tiempo de un ciclista con punteros
#include<iostream>
#include<conio.h>
using namespace std;
struct etapa{
	int horas,minutos,segundos;
}etapas[3], *puntero_etapa = etapas;
void pedirDatos();
void calcularTiempo(etapa *);

int main(){
	pedirDatos();
	calcularTiempo(puntero_etapa);
	
	
	getch();
	return 0;
}
void pedirDatos(){
	for(int i=0;i<3;i++){
		cout<<"\nHoras: ";
		cin>>(puntero_etapa+i)->horas;
		cout<<"Minutos: ";
		cin>>(puntero_etapa+i)->minutos;
		cout<<"Segundos: ";
		cin>>(puntero_etapa+i)->segundos;
	}
}
void calcularTiempo(etapa *puntero_etapa){
	int horasT=0,minutosT=0,segundosT=0;
	for(int i=0;i<3;i++){
		horasT+=(puntero_etapa+i)->horas;
				minutosT+=(puntero_etapa+i)->minutos;
					if(minutosT>=60){
						minutosT-=60;
						horasT++;
					}
					segundosT+=(puntero_etapa+i)->segundos;
					if(segundosT>=60){
						segundosT-=60;
						minutosT++;
					}
	}
	cout<<"\nMOSTRANDO EL TIEMPO EMPLEADO POR EL CICLISTA\n";
	cout<<"HORAS: "<<horasT<<endl;
	cout<<"MINUTOS: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	
	
}
