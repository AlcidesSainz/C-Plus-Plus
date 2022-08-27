//Adivinar un numero del 1 al 100

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int n,na,conteo = 0;
	
	srand(time(NULL)); //GENERAR Un aleatorio
	na = 1+rand()%(100); //variable = limite inferior + rand() % (limite superior +1 - limite inferior);

	
	do{	
	conteo++;		
	cout<<"\nAdivina el numero del 1 al 100: ";
	cin>>n;
	
	if(n>100||n<1){
		cout<<"\nEl numero introducido no se encuentra en el rango requerido"<<endl;
	}	
	else if(n>na){
	cout<<"Digite un numero menor"<<endl;
	}
	else if(n<na){
	cout<<"Digite un numero mayor"<<endl;
	}

	else if(n=na){
	cout<<"Muy bien,adivinaste"<<endl;
	cout<<"El numero de intentos fue de: "<<conteo<<endl;}
	


}
	while(n<=100 && n>=1 && n!=na);
	
		
		
	system("pause");
	getch();
	return 0;
}
