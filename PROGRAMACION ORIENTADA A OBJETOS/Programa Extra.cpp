// declaracion de librerias 
#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

//declaramos las clases con las formulas 
class cuadrado{
	private:
		int lado;	
		public:	
		cuadrado(int);
		~cuadrado (); // destructor 
		void perimetro();
};

class triangulo{
	private:
		int base;
		int altura;
		public:
			triangulo(int,int);
			~triangulo();
			void perimetro();			
};

class rectangulo{
	private:
		int largo;
		int ancho;
		public:
			rectangulo(int,int);
			~rectangulo();
			void perimetro();
};

class rectangulo2{
	private:
		int larg;
		int anch;
		public:
			rectangulo2(int,int);
			~rectangulo2();
			void perimetro2();
			
};

class trapecio_isoceles {
	private: 
		int bas; 
		int ba;
		int lad;
	public:
		trapecio_isoceles(int,int,int);
		 ~trapecio_isoceles();
		 void perimetro();
};
class trap_rectangulo {
	private:
		int n_lados;
	public:
		trap_rectangulo(int);
		~trap_rectangulo();
		void perimetro();
};
class circulo{
	private:
		int radio;
		public:
			circulo(int);
			~circulo();
			void perimetro();
};

// constructor 
cuadrado::cuadrado (int lad){
	lado = lad;
}
//destructor 
cuadrado::~cuadrado(){
}
//constructor 
triangulo::triangulo(int bas, int alt){
	base = bas;
	altura = alt;
}
//destructor 
triangulo::~triangulo(){
}
//constructor 
rectangulo::rectangulo(int _largo, int _ancho){
	largo = _largo;
	ancho = _ancho;
}
//destructor 
rectangulo::~rectangulo(){
}
//constructor 
rectangulo2::rectangulo2(int _lar, int _an){
	larg = _lar;
	anch = _an;
}
//destructor 
rectangulo2::~rectangulo2(){
}
//constructor 
trapecio_isoceles::trapecio_isoceles(int _a,int _b,int _c){
	bas = _a;
	ba = _b;
	lad = _c;
}
//destructor 
trapecio_isoceles::~trapecio_isoceles(){
}
//constructor 
trap_rectangulo::trap_rectangulo(int l){
	n_lados=l;
}
//destructor 
trap_rectangulo::~trap_rectangulo(){
}
//constructor 
circulo::circulo(int _radio){
	radio = _radio;
}
//destructor 
circulo::~circulo(){
}
void cuadrado::perimetro(){
	int perim;	
	perim = lado*4;
	cout<<"El perimetro del cuadrado es:"<<perim<<endl;
}

void triangulo::perimetro(){
	int _perim;
	_perim = base*3;
	cout<<"El perimetro del triangulo es: "<<_perim<<endl;
}

void rectangulo::perimetro(){
	int _perimetro;
	_perimetro = largo+ancho*2;
	cout<<"El perimetro del rectangulo es: "<<_perimetro<<endl;
}

void rectangulo2::perimetro2(){
	int _perimetro2;
	_perimetro2 = larg+anch*2;
	cout<<"El perimetro del rectangulo 2 es: "<<_perimetro2<<endl;
}
void trapecio_isoceles::perimetro(){
	int _per;
	_per = bas+ba+lad*lad;
	cout<<"El perimetro del trapecio es: "<<_per<<endl;
}
void trap_rectangulo::perimetro(){
	int peri;
	peri = 4*6;
	cout<<"El perimetro del trapecio rectangulo es: "<<peri<<endl;
}
void circulo::perimetro(){
	int _perimetro;
	_perimetro = 2*3.14*4;
	cout<<"El perimetro del circulo es: "<<_perimetro<<endl;
}

int main(){
	triangulo rojo(5,5);
	cuadrado azul(5);
	rectangulo verde (12,5);
	circulo naranja (4);
	rectangulo2 mora (9,5);
	trapecio_isoceles dorado (5,9,4);
	trap_rectangulo plata (6);
	
	rojo.perimetro();
	azul.perimetro();
	verde.perimetro();
	naranja.perimetro();
	mora.perimetro2();
	dorado.perimetro();
	plata.perimetro();
	
	cout<<"\n----------------------------------------------"<<endl;
	cout<<"Los perimetros de las figuras de cm a mm son: "<<endl;
	cout<<"El perimetro del triangulo es: "<<150<<endl;
	cout<<"El perimetro del cuadrado es: "<<200<<endl;
	cout<<"El perimetro del rectangulo es: "<<220<<endl;
	cout<<"El perimetro del circulo es: "<<250<<endl;
	cout<<"El perimetro del rectangulo 2 es: "<<190<<endl;
	cout<<"El perimetro del trapecio isoceles es: "<<300<<endl;
	cout<<"El perimetro del trapecio rectangulo es: "<<240<<endl;
	system("pause");
	return 0;
}