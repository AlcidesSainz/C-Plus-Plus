//Mostras los meses de a�o, pidiendolo al usuario un numero entre 1-12 y mostrandole el mes correspondiente

#include<iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"Digite un numero del 1 al 12: ";
	cin>>numero;

switch(numero){
	case 1: cout<<"Enero";break;
	case 2: cout<<"Febrero";break;
	case 3: cout<<"Marzo";break;
	case 4: cout<<"Abril";break;
	case 5: cout<<"Mayo";break;
	case 6: cout<<"Junio";break;
	case 7: cout<<"Julio";break;
	case 8: cout<<"Agosto";break;
	case 9: cout<<"Septiembre";break;
	case 10: cout<<"Octubre";break;
	case 11: cout<<"Noviembre";break;
	case 12: cout<<"Diciembre";break;
	
	default: cout<<"El numero no se encuentra en el rango requerido";
	
	
}
	
	
	
	
	
	
	return 0;
}
