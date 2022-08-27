//Transmision de arreglos
#include<iostream>
#include<conio.h>
using namespace std;

int hallarMax(int *,int );


int main(){
	const int nElementos = 5;
	int numeros [nElementos]= {3,5,2,8,1};
	
	cout<<"El numero MAXIMO del vector es: "<<hallarMax(numeros,nElementos);
	getch();
	return 0;
}
int hallarMax(int *dir_vec,int nElementos){
	int max=0;
	
	for(int i=0;i<nElementos;i++){
		if(*(dir_vec+i)>max){
			max= *(dir_vec+i);
		}
	}
return max;	
}
