/*Escriba un programa que lea de la entrada estandar los 
dos catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa*/	

#include<iostream>
#include<cmath>

using namespace std;

int main (){
	float cateto1, cateto2, hipotenusa = 0;
	
 cout<<"Digite el primer cateto: "; cin>>cateto1;
 cout<<"Digite el segundoc cateto: "; cin>>cateto2;
 
 
 hipotenusa = sqrt((cateto1*cateto1)+ (cateto2*cateto2)); 
 
 /*La ECUACION DE PITAGORAS tambien se puede escribar asi para abreviar:
 
  hipotenusa = sqrt(pow(cateto1,2)+ pow(cateto2)); */
 	

 	cout.precision(3);
 	
 	cout<<"La hipotenusa del triangulo es:"<<hipotenusa<<endl;
 	
 	   
 
 
 
 
 
 
	return 0;
}

