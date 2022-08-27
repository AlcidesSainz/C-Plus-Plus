//Calcule la multiplicacion acumulado de los elementos de un vector

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n[5] = {1,2,3,4,5};
	int m = 1;
	
	for(int i = 0;i<5;i++){
		m *= n[i];
	}
	cout<<"La multiplicacion acumulada de los elementos es: "<<m<<endl;	
	
	
	getch();
	return 0;
}
