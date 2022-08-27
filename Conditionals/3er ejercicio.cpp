// Escribe un programa que lea dos numero y determine cual de ellos es el mayor

#include<iostream>

using namespace std;
 int main(){
 	
 	int numero1, numero2; 
 	
 	cout<<"Digite dos numeros: "; cin>>numero1>>numero2;
    
    if(numero1==numero2){
    cout<<"Los dos numeros son iguales";
    	}
		else{"Los dos numeros no son iguales";
		
    	

 	

 	if(numero1 > numero2){
 		cout<< "El numero mayor es "<<numero1; 
	 }
else {
	cout<<"EL numero mayor es "<<numero2;
} 

}

 	
 	
 	

 	return 0;
 	
 }
