//Punteros

#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	int num,*dir_num;
	
	cout<<"Digite un numero: ";
	cin>>num;
	dir_num=&num;
	cout<<"\nEl numero es: "<<*dir_num<<endl;
	cout<<"Direccion: "<<dir_num<<endl;
	
	
	
	getch();
	return 0;
}
