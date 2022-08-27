//Funcion recursiva que sume los n primeros numeros positivos
#include<iostream>
#include<conio.h>
using namespace std;
int sumar(int );


int main(){
int nelementos;
do{
	cout<<"Digite el numero de elementos: ";
	cin>>nelementos;
}while (nelementos<=0);

cout<<"\nLa suma es: "<<sumar(nelementos)<<endl;
	
	
	
	getch();
	return 0;
}

int sumar(int n){
int suma=0;
if(n==1){//CASO BASE
	suma=1;
}else{ //CASO GENERAL
	suma=n+sumar(n-1);
}
return suma;
}
