//Hacer un programa que simule un cajero automatico con un saldo de 1000 dolares

#include<iostream>

using namespace std;

int main(){
	
	int saldo = 1000, dinero,opcion;
	
	start:
	cout<<"-------------------------------------"<<endl;
	cout<<"\tBienvenido a su cajero virtual"<<endl;
	cout<<"1. Ingresar dinero"<<endl;
	cout<<"2. Retirar dinero"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Seleccione la opcion: ";
	cin>>opcion;
	
/*	if (opcion==1){
		cout<<"Ingresar dinero: ";
		cin>>dinero;
		suma = dinero + saldo;
	cout<<"Su saldo actual es: "<<suma;
	}
	else if (opcion ==2){
		cout<<"Retirar dinero:";
		cin>>dinero;
		resta = saldo - dinero;
		cout<<"Su saldo actual es: "<<resta;			
	}
	*/

    char msg[] = "Su saldo actual es: ";
    
		switch(opcion)
		{
		   case 1:
			 cout<<"Ingresar dinero: ";cin>>dinero;
			 saldo += dinero;			
			 break;
			 
		   case 2:
		 	 cout<<"Retirar dinero: ";cin>>dinero;
			     if (dinero > saldo){
				 	cout<<"El saldo no es suficiente para extraer esa cantidad. "<<endl;
				 	break;
				 }			 
				 saldo -= dinero;
		     break;	
			 
			 case 3:
			   	cout<<"Gracias por usar nuestros servicios "<<endl;
				break; 
				   
		 }
		 
    cout<<msg<<saldo<<endl<<endl;
    cout<<"-------------------------------------"<<endl;
    
    if	(opcion!=3){
    	goto start;
	}
	
	return 0;
}
