//Programa que determine si una matriz es simetrica o no

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int filas, columnas,m[100][100];
	char band = 'F';
	cout<<"Digite el numero de filas de la matriz: ";
	cin>>filas;
	cout<<"Digite el numero de columnas de la matriz: ";
	cin>>columnas;
	for(int i = 0;i<filas;i++){
		for( int j = 0; j<columnas;j++){
			cout<<"Digite los numeros de la posicion "<<i<<","<<j<<":"<<endl;
			cin>>m[i][j];
		}
	}
	cout<<"Matriz"<<endl;
	for(int i = 0;i<filas;i++){
		for(int j = 0;j<columnas;j++){	
		cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
	//Demostrar si la matriz es simetrica
		if(filas == columnas){
			for (int i = 0;i<filas;i++){
				for(int j= 0;j<columnas;j++){
					if(m[i][j]==m[j][i]){
						band = 'V';
					}
				}
			}
		}
		if(band == 'V'){
			cout<<"La matriz es simetrica";
		}
		else{
			cout<<"La matriz no es simetrica";
		}
	getch();
	return 0;
}
