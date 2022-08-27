//Escriba un prgrama que lea tres numeros y determine cual de ellos es mayor 


#include<iostream>

using namespace std;
int main(){
	
	double numero1,numero2,numero3;
	
	cout<<"Digite tres numeros "; cin>> numero1>>numero2>>numero3;
	
	if ((numero1 == numero2) && (numero1 == numero3)){
			cout<<"Los tres numeros son iguales";
		}
	else  if((numero1 > numero2) && (numero1 > numero3)){
    cout<<"\nEl numero mayor es: "<<numero1;}
    
    else if((numero2> numero1)&&(numero2 > numero3)){
    	cout<<"\nEl numero mayor es: "<<numero2;}
    		else {
			cout<< "\nEl numero mayor es: "<<numero3;
			}
		
	
    	
	

 	

 	return 0;
 	
 }
