//Rellenar un array de 10 numeros posteriormente utilizar punteros y señalar los nueros paares y su direccion
#include<iostream>
#include<conio.h>
using namespace std;



int main(){
	int numeros[10];
	int *dir_numeros;
	int pares=0;
	cout<<"Pedir numeros del arreglo"<<endl;
	for(int i=0;i<10;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i];
	}
dir_numeros=numeros;
for(int i=0;i<10;i++){
if(*dir_numeros%2==0){
	cout<<"El numero: "<<*dir_numeros<<" es PAR"<<endl;
	cout<<"Direccion:  "<<dir_numeros<<endl;	
}
dir_numeros++;
}
	

	
	
	getch();
	return 0;
}
