//Suma de dos matrices 3x3

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m[3][3];
	int m2[3][3];
	int suma = 0;
	
	
	//Matriz numero 1
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){	
		cout<<"Digite los numeros de la posicion "<<i<<","<<j<<":"<<endl;
		cin>>m[i][j];
		}
	}
			
	cout<<"\nPrimera Matriz"<<endl;
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){	
		cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
		//Matriz segunda
		
		for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){	
		cout<<"Digite los numeros de la posicion "<<i<<","<<j<<":"<<endl;
		cin>>m2[i][j];
		}
	}		
	cout<<"\nSegunda Matriz"<<endl;
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){	
		cout<<m2[i][j]<<" ";
		}
		cout<<"\n";
}
//Suma de las dos matrices
	cout<<"La suma de las dos matrices es: "<<endl;
for(int i= 0;i<3;i++){
	for(int j = 0;j<3;j++){
	suma = m[i][j] + m2[i][j];
	cout<<suma<<" ";
	}
	cout<<"\n";
}
	
	getch();
	return 0;
}
