// Comprobar si el numero digitado es positivo o negativo

 #include<iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero==0)
	
	cout<<"\nEl numero es 0 ya que no es positivo ni negativo "<<endl;
	
	else if (numero > 0 ){ 	
	
	cout<<"\nEl numero es positivo"<<endl;
	}
	else {
		cout<< "\nEl numero es negativo"<<endl;
	}
	
	
	return 0;
}
