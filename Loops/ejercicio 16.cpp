//Realice un programa que calcule la descomposicion en factores primos de un numero entero.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n;
	
	cout<<"Introduzca un numero"<<endl;
	cin>>n;
	
	for(int i = 2;i>1;i++){
		while(n%i==0){
		cout<<i<<" "<<endl;
		n/=i;
		}
	}
	
	getch();
	return 0;
}
