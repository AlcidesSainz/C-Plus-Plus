//Serie FIBONACCI con recursividad
#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(int);

int main(){
	int nelementos;
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nelementos;
	}while(nelementos<=0);
	cout<<"\nSERIE Fibonacci: ";
	for(int i=0;i<nelementos;i++){
	cout<<fibonacci(i)<<",";	
	}
	
	
	getch();
	return 0;
}
int fibonacci(int n){
	int suma=0;
	if(n<2){
		return n;
	} else{
	return fibonacci(n-1)+fibonacci(n-2);
	}

}
