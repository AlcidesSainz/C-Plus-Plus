//Escriba la siguiente expresión matematica como expresion en C++    (A+B/C+D)

#include<iostream>

using namespace std;

int main (){
	
	float a,b,c,d,resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	cout<<"Digite el valor de d: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	cout.precision (3);
	 
	 cout<<"/El resultado de la operacion es: " <<resultado<<endl;
	
	
	
	
	
	
	return 0;
}

