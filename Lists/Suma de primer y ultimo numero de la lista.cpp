//Crear una lista que almacene "n" numeros enteros y calcular el menor y mayor
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
Nodo *lista = NULL;
//PROTOTIPO
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void suma(Nodo *);
int main(){
	menu();
	
	getch();
	return 0;
}
void menu(){
	int dato;
	int opcion;
	do{
		cout<<"\tMenu: \n";
		cout<<"1-Ingresar Datos"<<endl;
		cout<<"2-Mostrar Datos"<<endl;
		cout<<"3-Sumar el primer y ultimo dato"<<endl;
		cout<<"4-SALIR"<<endl;
		cout<<"OPCION: ";
		cin>>opcion;
		switch(opcion){
			case 1: cout<<"Ingrese un NUMERO: ";
					cin>>dato;
					insertarLista(lista,dato);
					break;
			case 2: cout<<"\t\tMOSTRANDO ELEMENTOS DE LA LISTA"<<endl;
					mostrarLista(lista);
					system("pause");
					break;
			case 3: suma(lista);
			system("pause");
					break;
		}
		system("cls");
	}while(opcion != 4);
	
	
	
}
void insertarLista(Nodo *&lista,int n){
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
cout<<"\n\tElemento "<<n<<" agregado a la LISTA"<<endl;

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
	int mayor=0;
	int menor= 9999999;
	int suma = 0;
	while(lista != NULL){
			if((lista->dato) > mayor){
				mayor = lista->dato;
	}
if((lista->dato) < menor){
	menor = lista->dato;
}
	lista = lista->siguiente;	
	}
	cout<<"El MAYOR elemento es: "<<mayor<<endl;
	cout<<"El MENOR elemento es: "<<menor<<endl;
	suma = mayor+menor;
	cout<<"El resultado de la suma es: "<<suma<<endl;
}

