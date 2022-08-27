/*Pedir nombre de usuario con MAYUSCULA si el nombre comienza con la letra A
, convertir su nombre a minuscula, caso contrario no convertirlo*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char n[50];
	
	cout<<"Introduzca su nombre en MAYUSCULA: ";
	cin.getline (n,50,'\n');
	
	if(n[0]=='A'){
		strlwr(n);
		cout<<n;
	}
	else{
		cout<<"El nombre no comienza con la letra A";
	}
	
	
	getch(); 
	return 0;
}
