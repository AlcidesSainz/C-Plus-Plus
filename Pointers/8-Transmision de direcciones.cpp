//Transmision de direcciones
#include<iostream>
#include<conio.h>
using namespace std;
void intercambio(float *,float *,float *);


int main(){
float num1 =15.9,num2=10.76,num3=98.99;

cout<<"Primer numero: "<<num1<<endl;
cout<<"Segundo numero: "<<num2<<endl;
cout<<"Tercer numero: "<<num3<<endl;	

intercambio(&num1,&num2,&num3);
cout<<"\n\nDespues del intercambio: "<<endl;	
cout<<"Primer numero: "<<num1<<endl;
cout<<"Segundo numero: "<<num2<<endl;
cout<<"Tercer numero: "<<num3<<endl;	
	
	return 0;
}
void intercambio(float *drnum1,float *drnum2,float *drnum3){
	float aux;
	
	aux=*drnum1;
	*drnum1=*drnum2;
	*drnum2=aux;
	*drnum2=*drnum3;
	*drnum3=aux;
}

