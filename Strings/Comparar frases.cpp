//Comparar cadenas--Funcion strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
/*	char p1[] = "COME KK";
	char p2[] = "COME KK";*/
	
	char p1[30];
	char p2[30];
	
	cout<<"Escriba una frase: ";
	cin.getline(p1,30,'\n');
	
	cout<<"Inserte otra frase: ";
	cin.getline(p2,30,'\n');
	
	if(strcmp(p1,p2)==0){
		cout<<"Las dos frases son iguales"<<endl;
	}
	
	else if(strcmp(p1,p2)<0)
	{
		cout<<"Las frases son diferentes y la frase de mayor extension es: "<<p1<<endl;
	}
	else{
		cout<<"Las frases son diferentes y la frase de mayor extension es: "<<p2<<endl;
	}
	
	getch();
	return 0;
}
