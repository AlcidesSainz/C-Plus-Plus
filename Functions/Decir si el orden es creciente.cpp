//Decir si el vector esta ordenado crecientemente o no
#include<iostream>
#include<conio.h>
using namespace std;
void pedirD();
int vec[100],tam;
void orden(int vec[],int);

int main(){
pedirD();	
orden(vec,tam);
	
	return 0;
}

void pedirD(){
	cout<<"Ingrese el numero de elementos del vector: ";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<"-"<<"Digite un numero: ";
		cin>>vec[i];
	}
}
void orden(int vec[],int tam){
	char band='F';
	int i=0;
	while((band=='F')&&(i<tam-1)){
		if(vec[i]>vec[i+1]){
			band='V';
		}
		i++;
	}
	if(band=='F'){
		cout<<"El arreglo esta ordenado";
	}else{cout<<"El arreglo NO esta ordenado";
	}
}
