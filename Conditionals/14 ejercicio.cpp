/*Hacer un menu que considere las siguientes opciones:

1- Cubo de un numero
2- Par o impar
3- Salir*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int numero,n,opcion,cubo,par;
	
		cout<<"\Seleccione la operacion"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Par o impar" <<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Seleccione la opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Digite un numero: ";cin>>numero;
			cubo = pow(numero,3);
			cout<<"El cubo del numero es: "<< cubo;
			break;
		case 2: cout<<"Digite un numero: "; cin>>numero;
		   if (numero%2==0) { 
		   cout<<"Su numero es par";
		    
			}
			else {
				cout<<"Su numero es impar";
			}
			break;
		case 3: cout<<"FIN"; break;
			
						
		
	}
		
	
	
	
	
	return 0;
}
