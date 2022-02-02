//declaro librerias

#include<iostream>
#include<stdlib.h>
using namespace std;


//declaración clase

class fecha{
	
	//atributos
	
private:
	
	int dia;
	int mes;
	int anio;
	
	//métodos
public:
	
	fecha(int,int,int);
	void edad();
	
	
};

//desarrollo de métodos

fecha::fecha(int _dia, int _mes, int _anio){
	
	dia = _dia;
	mes = _mes;
	anio = _anio;
	
	
}
void fecha::edad(){
	int _edad;
	_edad = 2022 - anio;
	
	
	
	cout<<"estimado usuario ,usted tiene o tendra: "<<_edad<<"anios de edad. "<<endl;
	cout<<"estimado usuario ,su fecha de nacimiento es: "<< dia <<"-"<<anio<<endl;
	
	





	
	
}

int main(){
	int dia;
	int mes;
	int anio;
	
	
	cout<<"ingrese su dia de nacimiento: ";
	cin>>dia;
	cout<<"ingrese su mes de nacimiento: ";
	cin>>mes;
	cout<<"ingrese su anio de nacimiento: ";
	cin>>anio;
	
	fecha F1(dia,mes,anio);
	
	F1.edad();
	
	cout<<"\n";
	
	system("pause");
	
	return 0;
}
