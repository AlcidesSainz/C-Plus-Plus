//Elevar numero matematico

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void pedirD();
void funpot(int x,int y);
int n1,n2;

int main(){
	pedirD();
	funpot(n1,n2);
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Digite un numero entero: ";
	cin>>n1;
	cout<<"\nDigite la elevacion: ";
	cin>>n2;
}
void funpot(int x,int y){
	int elevacion= pow(n1,n2);
	cout<<"\nEl resultado es: "<<elevacion;
}
