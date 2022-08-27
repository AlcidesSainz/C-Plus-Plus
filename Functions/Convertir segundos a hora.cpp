//Convertir segundos a HORAS.MINUTOS,SEGUNDOS
#include<iostream>
#include<conio.h>
using namespace std;
void tiempo(int,int&,int&,int&);
int main(){
	int totalS,horas,minutos,segundos;
	cout<<"Digite la cantidad de segundos a convertir: ";
	cin>>totalS;
	tiempo(totalS,horas,minutos,segundos);
	cout<<"La hora es: "<<endl;
	cout<<"Hora: "<<horas<<endl;
	cout<<"Minutos: "<<minutos<<endl;
	cout<<"Segundos: "<<segundos<<endl;
	getch();
	return 0;
}
void tiempo(int totalS,int&horas,int&minutos,int&segundos){
horas=totalS/3600;
totalS%=3600;
minutos=totalS/60;
totalS%=60;
segundos=totalS%60;


	
	
}
