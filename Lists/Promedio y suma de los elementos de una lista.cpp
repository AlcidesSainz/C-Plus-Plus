//Crear una lista que almacene n numeros y calcular su suma y promedio
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo{
	float dato;
	Nodo *siguiente;
};
Nodo *lista= NULL;
//Prototipo
void menu();
void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void suma(Nodo *);
void promedio(Nodo *);
int main(){
	menu();
	
	getch();
	return 0;
}
void menu(){
	int opcion;
	float dato;
	do{
	cout<<"\t\tMENU\n"<<endl;
	cout<<"1-INGRESAR datos a la lista"<<endl;
	cout<<"2-MOSTRAR los datos de la lista"<<endl;
	cout<<"3-SUMAR los datos de la lista"<<endl;
	cout<<"4-Hallar PROMEDIO de los datos de la lista"<<endl;
	cout<<"5-SALIR"<<endl;
	cout<<"OPCION: ";
	cin>>opcion;
	switch(opcion){
		case 1: cout<<"Ingrese el numero deseado: ";
				cin>>dato;
				insertarLista(lista,dato);
				cout<<"\n\nNumero "<<dato<<" INGRESADO a la lista"<<endl;
				system("pause");
		break;
		case 2: cout<<"\tMostrando TODOS los datos de la LISTA"<<endl;
				mostrarLista(lista);
				system("pause");
		break;
		case 3: cout<<"\tSUMANDO TODOS los datos de la LISTA"<<endl;
				suma(lista);
				system("pause");
		break;
		case 4: cout<<"\tHALLANDO el PROMEDIO de los datos de la LISTA"<<endl;
				promedio(lista);
				system("pause");
		break;
		case 5:
		break;
	}
	system("cls");
}while (opcion != 5);
}
void insertarLista(Nodo *&lista,float n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL)&&(aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
}
void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	
	actual = lista;
	while(actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual -> siguiente;
	}
}
void suma(Nodo *lista){
	float suma = 0;
	int contador= 0;
	while(lista !=NULL){
		suma += lista->dato;
		contador++;
		lista=lista->siguiente;
	}
	cout<<"\t\nLa suma es "<<suma<<endl;
	}
void promedio(Nodo *lista){
	float promedio = 0;
	float suma = 0;
	int contador= 0;
	while(lista !=NULL){
		suma += lista->dato;
		contador++;
		lista=lista->siguiente;
	}
	promedio = suma/contador;
	cout<<"\nEl PROMEDIO de todos los elementos insertados es: "<<promedio<<endl;
}

