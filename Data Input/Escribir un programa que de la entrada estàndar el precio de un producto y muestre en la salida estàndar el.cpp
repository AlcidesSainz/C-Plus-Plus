/* 2- Escribir un programa que de la entrada estàndar el precio de un producto y muestre en la salida estàndar el 
precio del producto al aplicarle el IVA*/ 

#include<iostream>

using namespace std;

int main (){
	
	float precio, iva, preciofinal; 
	
	cout << "Precio del producto:"; 
	cin>> precio;
	
	iva = precio * 0.21;
	preciofinal = precio+ iva;
	
	cout<<"/nEl precio final es:" <<preciofinal<<endl;
	
	 
	
	
	
	
	return 0; 
}


