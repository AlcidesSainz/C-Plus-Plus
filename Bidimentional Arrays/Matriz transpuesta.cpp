//Matriz 3x3 y crear su matriz transpuesta.

#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int m[3][3],n;
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){	
		cout<<"Digite los numeros de la posicion "<<i<<","<<j<<":"<<endl;
		cin>>m[i][j];
		}
	}
	//Matriz original
	cout<<"Matriz original"<<endl;
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){	
		cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
	//Matriz Transpuesta
	
	cout<<"Matriz transpuesta"<<endl;
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){	
		cout<<m[j][i]<<" ";
		}
		cout<<"\n";
	}	
	
	
	
	getch();
	return 0;
}
