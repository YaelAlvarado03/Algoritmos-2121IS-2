//declaracion de librerias

#include<iostream>
#include<stdlib.h>
using namespace std;


//declaracion de clase

class calculadora{
	
	//atributos
	
private:
	
	float valor1; float valor2;
	
	//metodos
	
public:
	
	calculadora(float, float);
	~calculadora();
	void resta();
	void resta_neg();
	void suma();
	void divicion(); 
	void multiplicacion();
	
	
};


//desarrollo de metodos


calculadora::calculadora(float v1, float v2){ 
	
	valor1=v1; valor2=v2;
}

//metodo destructor
calculadora::~calculadora(){
	
}

void calculadora::resta (){
	float rest; rest=valor1-valor2;
	cout<<"EL RESULTADO DE LA RESTA ES: "<<rest<<endl;
}
void calculadora::resta_neg(){
	float re; re=valor1-(-(-1))*-valor2;
	cout<<"El RESULTADO DE LA RESTA ES: "<<re<<endl;
}

void calculadora::suma(){
	float sum; sum= valor1+valor2;
	cout<<"EL RESULTADO DE LA SUMA ES: "<<sum<<endl;
}


void calculadora::divicion(){
	float div; div= valor1/valor2;
	cout<<"EL RESULTADO DE LA DIVISION ES: "<<div<<endl;
}


void calculadora::multiplicacion(){
	float mult; mult= valor1*valor2;
	cout<<"EL RESULTADO DE LA MULTIPLICACION ES: "<<mult<<endl;
}


int main(){
	
	//instanciar clase
	cout<<"SUMA"<<endl;
	int n1;
	std::cout << "Escribe el primer valor "; 
	std::cin >>
		n1; int n2; 
		std::cout << "Escribe el segundo valor ";
		std::cin >>
			n2; calculadora sumas(n1,n2);
			sumas.suma();
			cout<<"RESTA"<<endl;
			int n3;
			std::cout<<"Escribe el primer valor ";
			std::cin >>
				n3;
			int n4; 
			std::cout << "Escribe el segundo valor ";
			std::cin >>
				n4;
			calculadora res(n3,n4);
			res.resta();
			cout<<"RESTA DE NEGATIVOS"<<endl;
			int n9;
			std::cout << "Escribe el primer valor ";
			std::cin >>
				n9;
			int n10; 
			std::cout << "Escribe el segundo valor ";
			std::cin >>
				n10;
			calculadora resta(n9,n10);
			resta.resta_neg();
			cout<<"MULTIPLICACION"<<endl;
			int n5; std::cout << "Escribe el primer valor "; 
			std::cin >>
				n5;
			int n6;
			std::cout << "Escribe el segundo valor "; 
			std::cin >>
				n6;
			calculadora multiplicaciones(n5,n6);
			multiplicaciones.multiplicacion(); 
			cout<<"DIVISION"<<endl;
			int n7; 
			std::cout << "Escribe el primer valor "; 
			std::cin >> 
				n7; 
			int n8; 
			std::cout << "Escribe el segundo valor ";
			std::cin >>
				n8;
			calculadora divisiones(n7,n8); 
			divisiones.divicion(); 
			
			
			system("pause");
			
			return 0;
			
}
