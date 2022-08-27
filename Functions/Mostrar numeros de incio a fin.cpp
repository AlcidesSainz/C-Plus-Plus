//Funcion escribenumeros(int ini,int fin)que devuelva en la salida estandar los numeros de inicio a fin. En orden ascendente
#include<iostream>
#include<conio.h>
using namespace std;
int escribenumeros(int,int);

int main(){
	int ini,fin;
	cout<<"Escriba un inicio: ";
	cin>>ini;
	cout<<"Escriba un final: ";
	cin>>fin;
	for(int i=ini;i<=fin;i++){
		cout<<escribenumeros(i,fin)<<" ";
	}
	
	getch();
	return 0;
}
int escribenumeros(int ini,int fin){
	if(ini==fin){
		return ini;
	}else {
		return escribenumeros(ini,fin-1);
	}
	
}
