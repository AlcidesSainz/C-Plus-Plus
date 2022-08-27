//Añadir o Unir cadenas--Funcion strcat()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char cad1 [] = "Hola mi nombre es Alcidito";
	char cad2 [] = " y me gusta el playstation";
	char cad3 [30];
	
	strcat(cad1,cad2);
	
	cout<<cad1;






	getch();
	return 0;
}
