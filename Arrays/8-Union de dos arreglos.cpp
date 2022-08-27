//Programa que una a dos vectores que se introduzcan en la entrada estandar y mostrar la union en la salida estandar

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	char l1[] = {'a','b','c','d','e'}; 
	char l2[] = {'f','g','h','i','j'};
	char l3[10];
	
	for(int i = 0;i<5;i++){
		l3[i] = l1[i];
	}
		for (int i = 5;i<10;i++){
		l3[i] = l2[i-5];
	}
			for(int i = 0;i<10;i++)
	cout<<l3[i]<<endl;
	
	
	
	getch();
	return 0;
}
