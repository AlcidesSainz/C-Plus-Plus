//Hacer un programa que calcule  el resultado de la siguiente expresion: 1-2+3-4+5-6...n

#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int par,impar,n,operacion = 0,sumapares = 0,sumaimpares = 0;
	
	cout<<"Digite un numero: "<<endl;
	cin>>n;

	for(int i = 1;i<=n;i++){
		if(i%2==0){
			par=i*-1;	
			sumapares+=par;
			
		}
		else{
			sumaimpares+=i;
		}


	operacion = sumapares+sumaimpares;
	}
	cout<<"El resultado de la operacion es: "<<operacion<<endl;
	
	getch();
	return 0;
}
