#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void lectura();
int main(){
	lectura();
	
	system("pause");
	return 0;
}
void lectura(){
	ifstream archivo;
	string texto;
	archivo.open("jbalvin.txt",ios::in);//abrir archivo en modo lectura
	
	if(archivo.fail()){
	cout<<"ERROR"<<endl;
	exit(1);
	}
	while(!archivo.eof()){//mientras no sea el final del archivo
	getline(archivo,texto);
	cout<<texto<<endl;
	}
	
	archivo.close();//CERRAMOS EL ARCHIVO
	
}

