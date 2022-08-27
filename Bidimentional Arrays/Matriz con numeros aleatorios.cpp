//Llenar una matriz con numeros aleatorios y copiar ese contenido a otra matriz
#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

using namespace std;

int main (){
	
	int m [10][10], filas,columnas,na,m2[10][10];
	
	srand(time(NULL)); //GENERAR Un aleatorio
	cout<<"Digite el numero de filas de la matriz: ";
	cin>>filas;
	cout<<"Digite el numero de columnas de la matriz: ";
	cin>>columnas;
	
	for(int i = 0;i<filas;i++){
		for( int j = 0; j<columnas;j++){
			na = 1+rand()%(100);
			m[i][j] = na;
			cout<< m[i][j]<<" ";
			m2[i][j]= m[i][j];
		}
		cout<<"\n";
		
	}
		cout<<"La segunda matriz es: "<<endl;
		for(int i = 0;i<filas;i++){
			for(int j = 0; j<columnas;j++){
			
				cout<<m2[i][j]<<" ";
			}
			cout<<"\n";
		}
	
	
	
	
	getch();
	return 0;
}

