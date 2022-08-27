//Escriba una funcion con nombre mult()que acepte dos numeros en float y luego multiplicarlos y poner el resultado

#include<iostream>
#include<conio.h>
using namespace std;
//Prototipos de funcion
void pedirD();
void mult(float x,float y);
float n1,n2;

int main(){
	pedirD();
	mult(n1,n2);
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Ingrese dos numeros: ";
	cin>>n1>>n2;
}
void mult(float x,float y){
	float multiplicacion=x*y;
	
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
}
