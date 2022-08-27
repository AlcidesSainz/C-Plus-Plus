//Programa que lea de entrada estandar un vector de numeros y en la salida estandar los numeros del vector con sus indices

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int elementos[100],n;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i = 0;i<n;i++){
		cout<<"Digite un numero: "<<endl;
		cin>>elementos[i];
	}
	//Ahora se mostraran los elementos con sus indices asociados
	
	for(int i = 0;i<n;i++){
		cout<<i<<" --> "<<elementos[i]<<endl;
		
	}
	
/*	n[0] = 1;
	n[1] = 2;
	n[2] = 3;
	n[3] = 4;
	n[4] = 5;
	
	cout<<"Los numeros que comprenden el vector son: "<<n<<endl;*/
		
	getch();
	return 0;
}
