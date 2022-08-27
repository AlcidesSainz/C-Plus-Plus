#include<iostream>
#include<conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char f1[] = "Hola que tal mi nombre es ";
	char f2[30];
	
	cout<<"Escriba su nombre: ";
	cin.getline (f2,30,'\n');
	
	strcat(f1,f2);
	cout<<"La union de las dos frases es: "<<endl<<f1;
	
	
	getch();
	return 0;
}
