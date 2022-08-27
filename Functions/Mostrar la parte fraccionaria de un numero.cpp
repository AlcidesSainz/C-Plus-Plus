//Crea un programa que devuelva la parte fraccionaria de un numero introducido por el usuario

#include <iostream>
#include <conio.h>

using namespace std;
void pedirD();
float fraccion(float x);
float n1;


int main(){
	pedirD();
	 cout<<"La parte fraccionaria es: "<<fraccion(n1);
	getch();
	return 0;
}
void pedirD(){
	cout<<"Digite un numero con coma: ";
	cin>>n1;
}
float fraccion(float x){
int entero=x;
float resultado= x-entero;

return resultado;	
	
}
