#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

class cuadrado{
	private:
		int lado; // get 
	public:
		cuadrado();
		~cuadrado ();
		void setperimetro(int);//funcion metodo set
		int getcuadradoa();//metodo get
};
//constructor
cuadrado::cuadrado(){
}
//destructor 
cuadrado::~cuadrado(){
}
//establezco valores a los atributos
void cuadrado::setperimetro(int la){
	lado = la;
	int perim;	
	perim = lado*4;
	cout<<"El perimetro del cuadrado es: "<<perim<<endl;
}
//establecer el metodo get
int cuadrado::getcuadradoa(){
	return lado;
}

int main(){
	cuadrado R1;
	R1.setperimetro(5);
		
	system ("pause");
	return 0;
}