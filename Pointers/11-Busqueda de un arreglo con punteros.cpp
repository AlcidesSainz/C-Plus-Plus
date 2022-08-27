//Busqueda de un arreglo con punteros
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirD();
void buscarE(int*,int);

int nElementos,*elemento;
int main(){
	 pedirD();
 buscarE(elemento,nElementos);
	
	delete[]elemento;
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>nElementos;
	elemento= new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Ingrese un numero: ";
		cin>>*(elemento+i);
	}
}
void buscarE(int *elemento,int nElementos){
	int dato,i;
	bool band= false;
	
	 cout<<"\n\nDigite un numero para buscarlo: ";
	 cin>>dato;
	 
	 i=0;
	 while((i<nElementos)&&(band==false)){
	 	if(*(elemento+i)==dato){
	 		band=true;
	 	}
	 	i++;
		}
		if(band == false){
			cout<<"El numero: "<<dato<<" NO EXISTE"<<endl;
		}
		else{
			cout<<"El numero: "<<dato<<" SI EXISTE"<<endl;
		}
	 		}		
