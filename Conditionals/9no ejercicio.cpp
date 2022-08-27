/* Determinar si la edad insertada esta dentro del rango de (18-25)*/

#include<iostream>

using namespace std;
int main(){
	
	int edad;
	
	cout<<"Escriba su edad: "; cin>> edad;
	
	switch(edad){
			case 18:
	    	case 19:
			case 20: 
			case 21:
			case 22:
			case 23:
	    	case 24:
			case 25: cout<< "La edad se encuentra en el rango de (18-25)";
				break;
			
			default: cout<< "La edad no se encuentra en el rango de (18-25)";
			break;}
		
		
		
	return 0;
}
