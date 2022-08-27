/*Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int n,i;
	
		do{	cout<<"Digite un numero del 1 al 10"<<endl;
			cin>>n;
			
					}
		while((n<1)||(n>10));
	
	for(i = 1;i<=10;i++){
		cout<<i<<"*"<<n<<"="<<i*n<<endl; 
	}
	
	
/*	{
		imprime i * n = i*n;
	}
	
	i= 1
	
	1 * 5 = 5 
	2 * 5 = 10
	3 * 5 = 15*/
	
	
	
	system("pause");
	return 0;
}
