//Convertir dos cadenas de minuscula a mayuscula, compararlas y decir si son iguales o no

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char c1[30];
	char c2[30];
	
	cout<<"Escriba una frase: ";
	cin.getline(c1,30,'\n');
	cout<<"Escriba otra frase: ";
	cin.getline(c2,30,'\n');
	cout<<"\nAhora se convertiran en mayuscula por arte de magia\n"<<endl;
	strupr(c1);
	strupr(c2);
	cout<<c1<<endl;
	cout<<c2<<endl;
	
	if(strcmp(c1,c2)==0){
		cout<<"Las dos frases son iguales"<<endl;
	}
	else{
		cout<<"\nLas dos frases son diferentes"<<endl;
	}
	
	
	
	getch();
	return 0;
}
