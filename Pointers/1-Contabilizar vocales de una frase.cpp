//Pedir una cadena de caracteres al usuario y contabilizar cuantas vocales tiene
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void pedirDatos();
void contarVocales(char *);
char palabraUsuario[50];


int main(){
	pedirDatos();
		contarVocales(palabraUsuario);
	
	
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese una palabra o frase: ";
	cin.getline(palabraUsuario,50,'\n');
	
	strupr(palabraUsuario);	
}
void contarVocales(char *palabra){
	int contA=0;
		int contE=0;
			int contI=0;
				int contO=0;
					int contU=0;
	while(*palabra){
		switch(*palabra){
			case 'A': contA++;break;
				case 'E': contE++;break;
					case 'I': contI++;break;
						case 'O': contO++;break;
							case 'U': contU++;break;
		}
		palabra++;
	}
	cout<<"\n\nNumero de vocales de la frase:"<<endl;
		cout<<"Vocal A: "<<contA<<endl;
				cout<<"Vocal E: "<<contE<<endl;
						cout<<"Vocal I: "<<contI<<endl;
								cout<<"Vocal O: "<<contO<<endl;
										cout<<"Vocal U: "<<contU<<endl;
			
}

