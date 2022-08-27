//Cadenas de caracteres


#include<iostream>
#include<conio.h>
#include<string.h> //BIBLIOTECA PARA LAS CADENAS

using namespace std;

int main(){
	
	char palabra[] = "Alcidito";
	char palabra2[] = {'A','l','c','i','d','i','t','o'};
	char nombre [20];
	
	cout<<"Escriba un nombre: ";
	cin.getline (nombre,20,'\n'); //PARA ALMACENAR INFORMACIÓN EN ESTE ORDEN (CARACTER, EXTENSION, FINAL con comillas simples)
	//Otra forma de almacenar info
	
	/*gets(nombre); NO TIENE LIMITE DE EXTENSION
	cin NO GUARDA LA INFO DESPUES DE PRESIONAR SPACE*/
	
	cout<<nombre<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
		getch();
		return 0;
}
