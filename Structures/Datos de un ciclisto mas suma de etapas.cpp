#include<iostream>
#include<conio.h>

using namespace std;
struct etapa{
	int hora;
	int minutos;
	int segundos;
}
et[100];


int main(){
	int n_et;
	int s_horas=0;
	int s_minutos=0;
	int s_segundos=0;
	cout<<"Digite el numero de etapas: ";
	cin>>n_et;
	for(int i=0;i<n_et;i++){
		cout<<"Horas: ";
		cin>>et[i].hora;
		cout<<"Minutos: ";
		cin>>et[i].minutos;
		cout<<"Segundos: ";
		cin>>et[i].segundos;
		cout<<"\n";
		s_horas+=et[i].hora;
		s_minutos+=et[i].minutos;
		if(s_minutos>=60){
			s_minutos-=60;
			s_horas++;
		}
		s_segundos+=et[i].segundos;
		if(s_segundos>=60){
			s_segundos-=60;
			s_minutos++;
		}
	}
	cout<<"***Total de tiempo recorrido en todas las etapas***"<<endl;
	cout<<"Horas: "<<s_horas<<" Minutos: "<<s_minutos<<" Segundos: "<<s_segundos;
	
	
	
	getch();
	return 0;
}
