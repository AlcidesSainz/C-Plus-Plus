//Calcule un programa que calcule el valor de 1*2*3....*n(factorial)

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, factorial = 1;
	
	cout<<"Introduzca el numero para saber su factorial: "<<endl;
	cin>>n;
	
	for(int i = 1; i <= n; i++){
		factorial = factorial*i;
	}		
	cout<<"El factorial es: "<<factorial<<endl;			
	
	
	
	
	getch();
	return 0;
}
