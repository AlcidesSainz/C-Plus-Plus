//Hacer un programa que realice la serie fibonacci -> 1,1,2,3,5,8,13...n

#include <iostream>
#include<conio.h>

using namespace std;

int main (){
	int n,x=0,y=1,z=1,suma = 0;
	
	cout<<"Digite un numero: "<<endl;
	cin>>n;

	cout<<"1 " ;
     for(int i = 1;i<=n;i++){
     z=x+y;
     cout<<z<<" ";
     x=y;
     y=z;
         }
	cout<<" " ;
	
	getch();
	return 0;
}
