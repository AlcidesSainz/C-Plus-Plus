//Plantilla con funcion llamada despliegue() que despliegue el valor del argumento unico que se 
//transmite cuando se invoca la funcion
#include <iostream>
#include<conio.h>
using namespace std;
template <class TIPOD>
void despliegue(TIPOD dato);
int main(){
	int dato1=5;
	float dato2= 4.56;
	double dato3=456.6799;
	char dato4='a';
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	getch();
	return 0;
}
template <class TIPOD>
void despliegue(TIPOD dato){
	cout<<"El dato es: "<<dato<<endl;
}
