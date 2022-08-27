//Comprobar si un numero es par o impar y señalar la posicion de memoria donde se guarda el numero
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,*dir_num;
	
	cout<<"Digite un numero: ";
	cin>>n;
	dir_num=&n;
	if(*dir_num%2==0){
		cout<<"El numero "<<*dir_num<<" es PAR"<<endl;
		cout<<"Su direccion es: "<<dir_num<<endl; 
	}else{
		cout<<"El numero "<<*dir_num<<" es IMPAR"<<endl;
		cout<<"Su direccion es: "<<dir_num<<endl;
	}
	
	
	
	getch();
	return 0;
}
