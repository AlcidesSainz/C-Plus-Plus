//Funcion que calcule un numero potenciado usando RECURSIVIDAD
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int potencia(int,int);

int main(){
	int numero,elevacion;
		cout<<"Digite la base:  ";
		cin>>numero;
		cout<<"Digite el exponente: ";
		cin>>elevacion;
		
		cout<<"\nPotencia de "<<numero<<" elevado a "<<elevacion<<" es: "<<potencia(numero,elevacion)<<endl; 
	
	getch();
	return 0;
}
int potencia(int x,int y){
	int pot;
	if(y==1){
		pot=x;
	}else{
		pot=x*potencia(x,y-1);
	}
	return pot;
}
