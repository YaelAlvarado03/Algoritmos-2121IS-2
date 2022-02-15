// declaracion de librerias 
#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

//declaramos las clases con las formulas 
class cuadrado{
	private:
		int lado; //get	
		public:	
		cuadrado();
		~cuadrado ();
		void setperimetro(int);//funcion metodo set
		int getcuadradoa();//metodo get
};

class triangulo{
	private:
		int base;
		int altura;
		public:
			triangulo();
			~triangulo();
			void setperimetro(int,int); //funcion metodo set
			int gettrianguloa(); //metodo get
};

class rectangulo{
	private:
		int largo;
		int ancho;
		public:
			rectangulo();
			~rectangulo();
			void setperimetro(int,int); //funcion metodo set
			int getrectanguloa(); //metodo get
};

class rectangulo2{
	private:
		int larg;
		int anch;
		public:
			rectangulo2();
			~rectangulo2();
			void setperimetro2(int,int); //funcion metodo set
			int getrectangulo2a(); //metodo get
			
};

class trapecio_isoceles {
	private: 
		int bas; 
		int ba;
		int lad;
	public:
		trapecio_isoceles();
		 ~trapecio_isoceles();
		 void setperimetro(int,int,int); // funcion metodo set
		 int gettrapecio_isocelesa(); //metodo get
};
class trap_rectangulo {
	private:
		int n_lados;
	public:
		trap_rectangulo();
		~trap_rectangulo();
		void setperimetro(int); // funcion metodo set
		int gettrap_rectanguloa(); //metodo get
};
class circulo{
	private:
		int radio;
		public:
			circulo();
			~circulo();
			void setperimetro(int); //funcion metodo set
			int getcirculoa(); //metodo get
};

// constructor
cuadrado::cuadrado(){
} 
//destructor 
cuadrado::~cuadrado(){
}
//constructor 
triangulo::triangulo(){
}
//destructor 
triangulo::~triangulo(){
}
//constructor 
rectangulo::rectangulo(){
}
//destructor 
rectangulo::~rectangulo(){
}
//constructor 
rectangulo2::rectangulo2(){
}
//destructor 
rectangulo2::~rectangulo2(){
}
//constructor 
trapecio_isoceles::trapecio_isoceles(){
}
//destructor 
trapecio_isoceles::~trapecio_isoceles(){
}
//constructor 
trap_rectangulo::trap_rectangulo(){
}
//destructor 
trap_rectangulo::~trap_rectangulo(){
}
//constructor 
circulo::circulo(){
}
//destructor 
circulo::~circulo(){
}
//establezco valores a los atributos del metodo set
void cuadrado::setperimetro(int la){
	lado = la;
	int perim;	
	perim = lado*4;
	cout<<"El perimetro del cuadrado es: "<<perim<<endl;
}
//metodo get
int cuadrado::getcuadradoa(){
	return lado;
}

void triangulo::setperimetro(int bas, int alt){
	base = bas;
	altura = alt;
	int _perim;
	_perim = base*3;
	cout<<"El perimetro del triangulo es: "<<_perim<<endl;
}

int triangulo::gettrianguloa(){
	return base;
	return altura;
}
void rectangulo::setperimetro(int la,int an){
	largo = la;
	ancho = an;
	int _perimetro;
	_perimetro = largo+ancho*2;
	cout<<"El perimetro del rectangulo es: "<<_perimetro<<endl;
}
int rectangulo::getrectanguloa(){
	return largo;
	return ancho;
}
void rectangulo2::setperimetro2(int l, int a){
	larg = l;
	anch = a;
	int _perimetro2;
	_perimetro2 = larg+anch*2;
	cout<<"El perimetro del rectangulo 2 es: "<<_perimetro2<<endl;
}
int rectangulo2::getrectangulo2a(){
	return larg;
	return anch;
}
void trapecio_isoceles::setperimetro(int b, int a, int d){
	bas = b;
	ba = a;
	lad = d;
	int _per;
	_per = bas+ba+lad*lad;
	cout<<"El perimetro del trapecio isoceles es: "<<_per<<endl;
}
int trapecio_isoceles::gettrapecio_isocelesa(){
	return bas;
	return ba;
	return lad;
}
void trap_rectangulo::setperimetro(int la){
	n_lados = la;
	int peri;
	peri = 4*6;
	cout<<"El perimetro del trapecio rectangulo es: "<<peri<<endl;
}
int trap_rectangulo::gettrap_rectanguloa(){
	return n_lados;
}
void circulo::setperimetro(int ra){
	radio = ra;
	int _perimetro;
	_perimetro = 2*3.14*4;
	cout<<"El perimetro del circulo es: "<<_perimetro<<endl;
}
int circulo::getcirculoa(){
	return radio;
}

int main(){
	triangulo R2;
	R2.setperimetro(5,5);
	cuadrado R1;
	R1.setperimetro(5);
	rectangulo R3;
	R3.setperimetro (12,5);
	circulo R5;
	R5.setperimetro(4);
	rectangulo2 R4;
	R4.setperimetro2(9,5);
	trapecio_isoceles R6;
	R6.setperimetro(5,9,4);
	trap_rectangulo R7;
	R7.setperimetro(6);
	
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