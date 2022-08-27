//Calcuar año,mes y dia actual desde el 1/1/2000
#include<iostream>
#include<conio.h>
using namespace std;
void calc_anios(int,int&,int&,int&);
int main(){
	int total,dias,meses,anios;
	cout<<"Ingrese la cantidad de dias: ";
	cin>>total;
	
	calc_anios(total,dias,meses,anios);
	cout<<"\nDesde la fecha 1/1/2000"<<endl;
	cout<<"La nueva fecha es: "<<endl;
	cout<<dias+1<<"/"<<meses+1<<"/"<<anios+2000<<endl;
	
	
	getch();
	return 0;
}
void calc_anios(int total,int&dias,int&meses,int&anios){
	anios=total/365;
	total%=365;
	dias=total%30;
	meses=total/30;
	
}
