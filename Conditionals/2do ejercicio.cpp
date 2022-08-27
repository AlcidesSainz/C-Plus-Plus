/* La sentenia switch 

switch ( expresion) {
case literal 1:
conjunto de instrucciones 1;
break;

case literal 2:
conjunto de instrucciones 2;
break;

case literal n:
conjunto de instrucciones n;
break;

deafault:
conjunto de instrucciones por defecto;
break;
} */


#include<iostream>

using namespace std;
int main(){
	
	int numero;
	
	cout<<"Digite un numero entero entre 1-5: "; cin>> numero;
	
	switch(numero){
			case 1: cout<< "El numero es 1"	;
			break;
	    	case 2: cout<< "El numero es 2"	;
			break;
			case 3: cout<< "El numero es 3"	;
			break;
			case 4: cout<< "El numero es 4"	;
			break;
			case 5: cout<< "El numero es 5"	;
			break;
			default: cout<< "El numero no se encuentra entre 1-5";
			break;}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	return 0;
}

