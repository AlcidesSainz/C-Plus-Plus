/*Hacer un programa utilizando PILA contenga el siguiente menu: 

1-Insertar un caracter a la PILA 
2-Mostrar los elementos de la PILA
3-Salir*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};
void menu();
void agregarPila(Nodo *&,char);
void sacarPila(Nodo *&,char &);
int main(){
	
	
	menu();
	
	getch();
	return 0;
}
void menu(){
	int opcion;
	char dato;
	Nodo *pila = NULL;
	
	do{
		cout<<"\t.:Menu:.\n";
		cout<<"1-Insertar un caracter a la PILA "<<endl;
		cout<<"2-Mostrar los elementos de la PILA"<<endl;
		cout<<"3-Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un caracter: ";
					cin>>dato;
					agregarPila(pila,dato);
					break;
			case 2: cout<<"\nMostrando todos los elementos de la PILA: "<<endl;
					while(pila != NULL){
						sacarPila(pila,dato);
						if(pila != NULL){
							cout<<" , "<<endl;
							
						}else{
							cout<<" . "<<endl;
						}
					} 
					cout<<"\n";
					system("pause");
					break;
			case 3: break;
		
	}
		system("cls");//LIMPIAR LA PANTALLA
	}
	while(opcion != 3);
}

void agregarPila(Nodo *&pila,char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
}
void sacarPila(Nodo *&pila,char &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
