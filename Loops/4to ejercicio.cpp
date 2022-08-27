/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. 
 Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura maxima y las mas baja.*/
 
 #include<iostream>
 #include<conio.h>
 
 using namespace std;
 
 int main(){
 	float t,media=0,suma = 0,tmax = -1000,tmin = 1000;
 	
 	for(int h = 4;h<=24;h=h+4){
 	cout<<"Inserte la temperatura en la hora "<<h<<endl;cin>>t;
 		suma += t;	
 		if(t>tmax){
	tmax=t;}
		if(t<tmin){
		tmin=t;	
		}
	
 	
 
	 }
 	
 	    media= suma/6;
 	
 	cout<<"La suma de todas las temperaturas del dia es: "<<suma<<" grados centigrados"<<endl;
 	
 	cout<<"La temperatura media del dia es: "<<media<<" grados centigrados"<<endl;
 	
 	cout<< "La temperatura maxima del dia es: "<<tmax<<" grados centigrados"<<endl;
 	 
 	cout<< "La temperatura minima del dia es: "<<tmin<<" grados centigrados"<<endl;
 
 	
 
 	
 	
 	
 	getch();
 	return 0;
 }
 
 
