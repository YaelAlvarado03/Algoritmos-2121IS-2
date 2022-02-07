#include<iostream>
#include<conio.h>
#include<stdlib.h>//con esta libreria funciona NEW y DELETE

using namespace std;

void PedirNotas ();
void mostrarNotas ();

int numCalif,*calif;


int main(){
	PedirNotas();
	mostrarNotas();
	
	delete [] calif;
	
	getch ();
	return 0;
	
}
void PedirNotas(){
	
	cout<<"Digite El Numero De Notas: ";
	cin>>numCalif;
	
	calif = new int [numCalif];
	
	for(int i=0;i<numCalif;i++){
		cout<<"Ingrese Las Notas: ";
		cin>>calif[i];
	}
}
void mostrarNotas(){
	cout<<"\n \nTus Notas Son: \n";
	for (int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
	
}