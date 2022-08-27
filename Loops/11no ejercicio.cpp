//Escriba un programa que calcule el valor de: 2elevado a la 1+2elevado a la 2+....2elevado a la n

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;
int main(){
	
	int n,p,elevacion = 0,suma = 0;
	cout<<"Digite un numero: "<<endl;
	cin>>n;
	cout<<"Digite una potencia: "<<endl;
	cin>>p; 
	for(int i = 1;i<=p;i++){
		elevacion = pow(n,i);
		suma +=elevacion;
	}
	cout<<"El resultado de la potencia es: "<<elevacion<<endl;
	cout<<"El resultado de la suma de potencias es: "<<suma<<endl;
	getch();
	return 0;
}
