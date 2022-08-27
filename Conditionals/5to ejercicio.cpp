/* Realice un programa que lea un valor entero y determine si se trata de un numero par o impar*/

#include<iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero==0)
	
	cout<<"\nEl numero es 0";
	
	else if (numero%2 == 0 ){ 	
	
	cout<<"\nEl numero es par";
	}
	else {
		cout<< "\nEl numero es impar";
	}
	
	
	return 0;
}
