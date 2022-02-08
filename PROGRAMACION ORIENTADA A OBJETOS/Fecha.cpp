//se declaran las librerias 
#include <iostream>
#include<stdlib.h>
#include<iostream>
using namespace std;

class fecha{//se declara la clase
	private:
		int dia, mes, anio;
		public:
			void mostrar();
			//sobrecarga de constructor
			fecha(int,int,int);
			fecha(long);
};
	//primer constructor 
	fecha::fecha(int d, int m, int a){
		dia=d;
		mes=m;
		anio=a;
	}
	
	fecha::fecha(long fech){
		anio=int (fech/10000);
		mes=int ((fech-anio*10000/100));
		dia=int (fech-anio*10000-mes*100);
	}
	
	void fecha::mostrar(){
		
		cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
		
	}
	
	int main(){
		//instanciar la clase (crear un objeto)*/
		int fe;
		cout<<"ingresa la fecha: ";
		cin>>fe;
		fecha ingresada(fe);
		fecha hoy(fe);
		hoy.mostrar();
		ingresada.mostrar(); 
		system("pause");
		return 0;
	}
