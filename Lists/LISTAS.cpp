/*LISTA
Ingresar datos a la lista
Mostrar datos de la lista
Buscar elemento de la lista
Eliminar elemento de la lista
Eliminar TODOS los datos de una lista
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
Nodo *lista = NULL;
//PROTOTIPO DE LA FUNCION
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *,int);
void eliminarLista(Nodo *&,int);
void eliminar_Toda_Lista(Nodo *&,int &);
int main(){
	menu();
	

	getch();
	return 0;
}
void menu(){
	int opcion;
	int dato;
	char rpt;
	do{
	cout<<"\t\nMenu:\n";
	cout<<"1.Ingresar Datos"<<endl;
	cout<<"2.Mostrar Datos"<<endl;
	cout<<"3.Buscar Dato"<<endl;
	cout<<"4.Eliminar elemento"<<endl;
	cout<<"5.Eliminar TODOS los elementos de la LISTA"<<endl;
	cout<<"6.Salir"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1: cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarLista(lista,dato);
			
				break;
				
		case 2: mostrarLista(lista);
					cout<<"\n";
					system("pause");
				break;
		case 3:cout<<"Digite un numero: ";
				cin>>dato; 
		buscarLista(lista,dato);
					cout<<"\n";
					system("pause");
					break;
		case 4:cout<<"Digite el elemento a BORRAR: ";
				cin>>dato;
				eliminarLista(lista,dato);
				cout<<"\n";
				system("pause");
				break;
		case 5:
				while(lista != NULL){
				eliminar_Toda_Lista(lista,dato);
				cout<<dato<<"->";
				}
				cout<<"\n";
				system("pause");
				break;
	
	}
	system("cls");
	}while(opcion!=6);
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
	cout<<"\n\tMOSTRANDO ELEMENTOS DE LA LISTA"<<endl;
	Nodo *actual = new Nodo();
	
	actual = lista;
	while(actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual -> siguiente;
	}
}
void buscarLista(Nodo *lista,int n){
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual != NULL )&&(actual ->dato <=n)){
		if(actual->dato == n){
			band = true;
		}
		actual = actual->siguiente;
	}
	if(band == true){
		cout<<"Elemento "<<n<<" ha sido ENCONTRADO  en la LISTA"<<endl;
	}else{
		cout<<"Elemento "<<n<<" NO se encuentra en la LISTA"<<endl;
	}
}
void eliminarLista(Nodo *&lista,int n){
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;
		while((aux_borrar != NULL)&&(aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		if(aux_borrar == NULL){
			cout<<"El elemento no existe"<<endl;
		}
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux_borrar;
		}
		else{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}	
	}
}
void eliminar_Toda_Lista(Nodo *&lista,int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}
