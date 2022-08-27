/*Escribir 3 numeros que se lean en la entrada estandar . Despues debe leer un cuarto numero e 
indicar si ese numero coincide con alguno de los introducidos con anterioridad*/


#include<iostream>

using namespace std;
 int main(){
 	
 	int numero1, numero2,numero3,numero4; 
 	
 	cout<<"Digite tres numeros: "; cin>>numero1>>numero2>>numero3;
 	cout<<"Digite un numero mas: "; cin>>numero4;
 	
 	if(numero4 == numero1){
	 
 	cout<<"El cuarto numero es igual al primer numero digitado: "<<numero1; 
    	}
    else if(numero4 == numero2){
	 
 	cout<<"El cuarto numero es igual al segundo numero digitado: "<<numero2; 
    	}
    else if(numero4 == numero3){
	 
 	cout<<"El cuarto numero es igual al tercer numero digitado: "<<numero3; 
    	}
    	
		else {
		cout<<"El cuarto numero no es igual a ningun numero insertado anteriormente";
		}
    
    

 	return 0;
 	
	 }
