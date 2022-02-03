// Declaracion de libreria 
#include <iostream>
#include <stdlib.h>
#include <ostream>
using namespace std;
// declaracion de clase 

class cuadrado {
	
	//atributos 
	
	private:
		
		float lado;
	
	//metodos 
	public:
		cuadrado (float );  //constructor 
		void perimetro ();
		void area ();
	};

	//Desarrollo de metodos 

	cuadrado::cuadrado(float clado){
		
	lado=clado;
	 
	}

	void cuadrado::perimetro(){
		float perim;
		perim=lado*4;
		cout<<"El perimetro del cuadrado es" <<perim<<endl;
		 
	}

	void cuadrado::area(){
		float are;
		are=lado*lado;
		cout<<"el area del cuadrado es " <<are <<endl;
}

int main(){
		//inicie la clas pidiendo al usuario que ingresara los valores y los fui guardando y despues multiplicando por el mismo y despues sumar los lados
		int numero; 
		std::cout <<"Dime la medida del primer cuadrado: "; 
		std::cin>> numero;
		std::cout<<"El area del primer cuadrado es: "<< numero*numero;
		std::cout<<"\nEl Perimetro del primer cuadrado es: "<< numero+numero+numero+numero;
		
		std::cout <<"\n\nDime la medida del segundo cuadrado: ";
		std::cin>> numero;
		std::cout<<"El area del segundo cuadrado es: "<< numero*numero;
		std::cout<<"\nEl Perimetro del segundo cuadrado es: "<< numero+numero+numero+numero;
		
		std::cout <<"\n\nDime la medida del tercer cuadrado: "; 
		std::cin>> numero;
		std::cout<<"El area del tercer cuadrado es: "<< numero*numero;
		std::cout<<"\nEl Perimetro del tercer cuadrado es: "<< numero+numero+numero+numero;
		
		std::cout <<"\n\nDime la medida del cuarto cuadrado: ";
		std::cin>> numero;
		std::cout<<"El area del cuarto cuadrado es: "<< numero*numero;
		std::cout<<"\nEl Perimetro del cuarto cuadrado es: "<< numero+numero+numero+numero;
		system ("pause");
		return 0;
	}