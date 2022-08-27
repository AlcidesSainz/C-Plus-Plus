/*Programa que rellene una matriz piiendole al usuario el numero de filas y columnas,
 posteriormente mostras la matriz en pantalla*/
 
 #include<iostream>
 #include<conio.h>
 
 using namespace std;
 
 int main (){
 	
 	int n[100][100],filas,columnas;
 	cout<<"Ingrese la cantidad de filas que desea que tenga la matriz: ";
 	cin>> filas;
 	cout<<"Ingrese la cantidad de columnas que desea que tenga la matriz: ";
 	cin>>columnas;
 			
 			for( int i = 0; i<filas;i++){
 			for( int j = 0; j < columnas;j++){
 			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
 			cin>>n[i][j];	}
 	}
 	
 
 		for( int i = 0;i<filas;i++){
 			for(int j = 0; j<columnas;j++){
 				cout<<n[i][j];
 				
 			}
 			cout<<"\n";
 		}
 	
 	getch();
 	return 0;
 }
