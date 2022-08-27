//Paso de parametros por referencia

#include<iostream>
#include<conio.h>
using namespace std;

void valN(int&,int&);

int main(){
	int n1,n2;
	
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;
	
	valN(n1,n2);
	
	
	return 0;
}
void valN (int& xnum,int& ynum){
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;


}
