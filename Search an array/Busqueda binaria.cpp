//BUSQUEDA BINARIA

#include<iostream>
#include<conio.h>

using namespace std;	
int main(){
	int numeros[]={1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band='F';
	
	dato = 4;
	//ALGORITMO DE LA BUSQUEDA BINARIA
 inf=0;
 sup=5;
 while(inf <=sup){
 	mitad=(inf+sup)/2;
 	if(numeros[mitad]==dato){
 		band ='V';
 		break;
 	}
 	if(numeros[mitad]>dato){
 		sup=mitad;
 		mitad=(inf+sup)/2;
 	}
 	if(numeros[mitad]<dato){
 		sup= mitad;
 		mitad=(inf+sup)/2;
 	}
 }
 	if(band=='V'){
 	cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
 }
 else {cout<<"El numero NO HA SIDO ENCONTRADO";
 }
	getch();
	return 0;
}	
