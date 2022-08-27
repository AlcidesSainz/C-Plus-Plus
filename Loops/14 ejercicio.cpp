/*En una clase de 5 alumnos se aplicaron 3 examenes y se requiere determinar el numero de: 
a) Alumnos que aprobaron todos los examenes 
b)Alumnos que aprobaron al menos un examen
c)Alumnos que aprobaron unicamente el ultimo examen
 
 Realice un programa que permita la lectura de los datos y el calculo de las estadisticas.*/
 
	#include<iostream>
	#include<conio.h>

	using namespace std;

	int main (){
	
	float e1,e2,e3;
	int aprobadosTodos=0,aprobadosUno = 0,aprobadosUltimo = 0;
	
	for(int i = 1;i<=5;i++){
		cout<<i<<". Ingrese la nota del primer examen: ";cin>>e1;
		cout<<i<<". Ingrese la nota del segundo examen: ";cin>>e2;
		cout<<i<<". Ingrese la nota del tercer examen: ";cin>>e3;
		cout<<"\n";
		
		if((e1>=6)&&(e2>=6)&&(e3>=6)){
			aprobadosTodos++;		
		}
		if((e1>=6)||(e2>=6)||(e3>=6)){
			aprobadosUno++;
		}
		if((e1<6)&&(e2<6)&&(e3>=6)){
			aprobadosUltimo++;
		}
	}
	cout<<"La cantidad de estudiantes que aprobaron todo fue: " <<aprobadosTodos<<endl;
	cout<<"La cantidad de estudiantes que aprobaron solo uno fue: " <<aprobadosUno<<endl;
	cout<<"La cantidad de estudiantes que aprobaron el ultimo fue: " <<aprobadosUltimo<<endl;
	
	
	
	getch();
	return 0;
}

