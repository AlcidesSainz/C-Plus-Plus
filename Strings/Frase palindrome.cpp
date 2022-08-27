//Hacer un programa que determine si una frase es palindrome
//por ejemplo: reconocer, anita lava la tina

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	char f1 [50];
	char f2[50];
	/*char f3 [50];*/
	cout<<"Escriba una frase: ";
	cin.getline(f1,50,'\n');
	cout<<"La palabra insertada es: "<<f1<<endl;
	
	strcpy (f2,f1);
	strrev (f2);
	cout<< "El inverso de la frase insertada es: "<<f2<<endl;
	if(strcmp(f1,f2)==0){
		cout<<"La frase insertada es palindrome"<<endl;
	}
/	else{
		cout<<"No es palindrome";
	}
	
	
	
	
	getch();
	return 0;
}
