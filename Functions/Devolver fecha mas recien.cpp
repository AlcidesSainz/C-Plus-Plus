//Devolver la fecha mas reciente de las dos insertadas
#include<iostream>
#include<conio.h>
using namespace std;
struct fecha{
	int dia;
	int mes;
	int anio;
}f1,f2;

void pedirD();
fecha mayor(fecha,fecha);
void mostrar(fecha);

int main(){
	pedirD();
	fecha x =mayor(f1,f2);
	mostrar(x);
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"PRIMERA FECHA: "<<endl;
	cout<<"Dia: ";
	cin>>f1.dia;
	cout<<"Mes: ";
	cin>>f1.mes;
	cout<<"Anio: ";
	cin>>f1.anio;
	
		cout<<"\n\nSEGUNDA FECHA: "<<endl;
	cout<<"Dia: ";
	cin>>f2.dia;
	cout<<"Mes: ";
	cin>>f2.mes;
	cout<<"Anio: ";
	cin>>f2.anio;
}
fecha mayor(fecha f1,fecha f2){
	fecha mayorfecha; 
	if((f1.anio>=f2.anio)&&(f1.mes>=f2.mes)&&(f1.dia>=f2.dia)){
		mayorfecha=f1;
	}else{
		mayorfecha=f2;
	}
	return mayorfecha;
}
void mostrar(fecha x){
	cout<<"\nLa fecha mas reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;;
}

