//Longitud de una cadena de caracteres --FUNCION strlen()


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char word[1000];
	int size = 0;
	cout<<"Write a phrase: ";
	gets(word);
	
	size= strlen(word);
	cout<<"The number of elements of the chain is: "<<size<<endl;
	
	
	getch();
	return 0;
}
