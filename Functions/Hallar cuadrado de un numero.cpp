/*Funcio cuadrado() que calcule el cuadrado de cualquier numeero que se indique en el programa.*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void pedirD();
void cuadrado(float x);
float n1;


int main(){
	pedirD();
	cuadrado(n1);
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Ingrese un numero: ";
	cin>>n1;
}
void cuadrado(float x){
	float n_cuadrado = pow(n1,2);
	
	cout<<"El cuadrado del numero introducido es: "<<n_cuadrado;
}
