//Escriba un programa que calcule el valor de: 1!+2!+3!+...n!(suma de factoriales).

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,factorial = 1, sumaf = 0;
	cout<<"Introduzca un numero: "<<endl;
	cin>>n;
	
	for(int i = 1;i<=n;i++){
		factorial= factorial*i;
		sumaf+=factorial;	
	}
	cout<<"El resultado de la suma de factoriales es: "<<sumaf<<endl;
	
	getch();
	return 0;
}
