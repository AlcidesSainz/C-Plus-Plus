//Programa que lea entradasde numeros hasta que se introduzca un cero y luego en la salida estandar el numero de valores mayores que 0 leidos.


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n,i=0;
	
	do{ 
	cout<<"Digite un numero: "<<endl;
	 cin>>n;	
	if(n>0){
	i++;
		
	}
	}
	while(n!=0);
	
	cout<<"La cantidad de numeros mayores que 0 son: "<<i<<endl;
	
	getch();
	return 0;
}
