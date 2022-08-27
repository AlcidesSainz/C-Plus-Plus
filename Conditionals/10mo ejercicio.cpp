/*Escribir 3 numeros que se lean en la entrada estandar . Despues debe leer un cuarto numero e 
indicar si ese numero coincide con alguno de los introducidos con anterioridad*/


#include<iostream>

using namespace std;
 int main(){
 	
 	int numero1, numero2,numero3,numero4; 
 	
 	cout<<"Digite tres numeros: "; cin>>numero1>>numero2>>numero3;
 	cout<<"Digite un numero mas: "; cin>>numero4;
 	
 	if((numero4 == numero1)||(numero4==numero2)||(numero4==numero3)){
	 
 	cout<<"El cuarto numero es igual a uno de los numeros digitados anteriormente"; 
    	}
		else {
		cout<<"El cuarto numero no es igual a ningun numero insertado anteriormente";
		}
    
    

 	return 0;
 	
 }
