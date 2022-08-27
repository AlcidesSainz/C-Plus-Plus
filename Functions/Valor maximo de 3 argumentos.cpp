//Sacar el mayor de tres datos
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
template<class T>
T maximo(T d1,T d2,T d3);

int main(){
	int d1=4,d2=6,d3=2;
	cout<<"El valor maximo es: "<<maximo(d1,d2,d3)<<endl;
	
	getch();
	return 0;
}


template<class T>
T maximo(T d1,T d2,T d3){
	T max;
	if((d1>=d2)&&(d1>=d3)){
		max=d1;
	}
	else {
		if((d2>=d1)&&(d2>=d3)){
			max=d2;
		}
		else{max=d3;
		}
	}
	return max;
	
	
}
	
	


