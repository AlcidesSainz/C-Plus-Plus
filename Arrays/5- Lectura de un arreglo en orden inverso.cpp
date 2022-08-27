//Definir un vector de numeros y mostrar el vector en orden inverso (del ultimo al primer elemento)

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n [10] = {1,2,3,4,5,6,7,8,9,10};
	
	for (int i = 9;i>=0  ;i--){
		cout<<"El orden del arreglo es: "<<n[i]<<endl;
	}
	
	
	
	getch();
	return 0;
}
