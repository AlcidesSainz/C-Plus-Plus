//Escriba un programa que lea la 3 notas finales de tres alumnos y calcule la nota final media de dicho alumno alumnos	

#include<iostream>

using namespace std;

int main (){
 float nota1,nota2,nota3,promedio;


 cout<<"Digite la primera nota: "; cin>>nota1;
 cout<<"Digite la segunda nota: "; cin>>nota2;
 cout<<"Digite la tercera nota: "; cin>>nota3;
  
  promedio = (nota1+nota2+nota3)/3;
  
  cout<<"El promedio de las tres notas es:"<<promedio<<endl;
	
	return 0;
}

