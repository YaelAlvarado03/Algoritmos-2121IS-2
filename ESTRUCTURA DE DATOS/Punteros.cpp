#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int numero,*direc_num;
	
	numero=20;
	direc_num=&numero;
	
	cout<<"El Valor De La Variable Numero Es: "<<*direc_num<<endl;
	cout<<"La Direccion De Memoria Es: "<<direc_num<<endl;

	getch;
	return 0;

}