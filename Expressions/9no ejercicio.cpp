/*Realice un programa que calcule el valor que toma la siguiente funcion para valores dados de x,e,y:
f(x,y)=raiz cuadrada de X / y al cuadrado - 1*/


#include<iostream>
#include<cmath>

using namespace std;

int main (){
	float x,y,resultado = 0;
	
 cout<<"Digite el valor de x : "; cin>>x;
 cout<<"Digite el valor de y: "; cin>>y;
 
 resultado = ((sqrt(x))/((pow(y,2))-1));
 


 	cout.precision(3);
 	
 	cout<<"El resultado de la funcion f(x,y) es:"<<resultado<<endl;
 	
 	   
 
 
 
 
 
 
	return 0;
}
