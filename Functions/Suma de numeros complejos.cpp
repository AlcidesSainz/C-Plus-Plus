//Suma de numeros complejos
#include<iostream>
#include<conio.h>
using namespace std;
struct complejo{
	float real,imaginaria;
}z1,z2;
//Prototipo de la funcion
void pedirD();
complejo suma(complejo,complejo);
void muestra(complejo);
int main(){
	pedirD();
	
	complejo x=suma(z1,z2);
	muestra(x);
	getch();
	return 0;
}
void pedirD(){
	cout<<"Digite los datos para el primer numero COMPLEJO: "<<endl;
	cout<<"Parte Real: ";
	cin>>z1.real;
	cout<<"Parte Imaginaria: ";
	cin>>z1.imaginaria;
	
	cout<<"\nDigite los datos para el segundo numero COMPLEJO: "<<endl;
	cout<<"Parte Real: ";
	cin>>z2.real;
	cout<<"Parte Imaginaria: ";
	cin>>z2.imaginaria;
}
complejo suma(complejo z1,complejo z2){
	z1.real+=z2.real;
	z1.imaginaria+=z2.imaginaria;
	
	return z1;
	
}
void muestra(complejo x){
	cout<<"\nResultado: "<<x.real<<","<<x.imaginaria<<endl;
}
