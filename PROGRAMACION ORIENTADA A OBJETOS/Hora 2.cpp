#include <iostream>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main (){
	
	int h, m, s, seg; // se declara los tipos de datos con las variables a usar 
	cout<<"Ingresa Los Segundos: "<<endl;
	
	cin>>seg; // se va a guardar los segundos que ingrese el usuario en la variable seg 
	
	h = seg / 3600; // se hacen las operaciones a realizar en hora 
	seg = seg % 3600; // agarra los residuos para dar mejor los minutos y segundos 
	m = seg / 60; // se hacen la operaciones a realizar en minutos  
	s = seg % 60; // se hace la operacion a realizar en segundos 
	
	cout<<"La hora es: "<<h<<endl;
	cout<<"Los minutos son: "<<m<<endl;
	cout<<"Los segundos son: "<<s<<endl;

	
	cout<<"La hora se muestra en HORAS:MINUTOS:SEGUNDOS"<<endl; // como se van a mostrar los datos 
	
	cout<< "La hora es: "<<h<<":"<<m<<":"<<s<<endl;
}