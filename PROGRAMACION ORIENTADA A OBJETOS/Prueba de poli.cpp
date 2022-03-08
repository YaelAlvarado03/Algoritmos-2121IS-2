// declaracion de librerias 
#include<iostream>
#include<stdio.h>
#include <math.h>

using namespace std;

class figuras{
	protected:
		float lado; 
	public: 
		figuras (float);
		virtual void area(); //polimorfismo 
		virtual void perimetro();
};

class cuadrado:public figuras {
	public: 
		cuadrado (float);
		void area();
		void perimetro();
};

class rectangulo: public figuras {
	private:
		float ancho;
	public: 
		rectangulo(float,float);
		void area();
		void perimetro();
};

class triangulo: public figuras {
	private: 
		float base;
	public:
		triangulo(float,float);
		void area();
		void perimetro();
};

class circulo: public figuras{
	private: 
		float radio;
	public:
		circulo(float);
		void area();
};

figuras::figuras(float l){
	lado=l;
}

cuadrado::cuadrado(float l):figuras(l){
}

rectangulo::rectangulo(float l, float n):figuras(l){
	ancho=n;
}

triangulo::triangulo(float l, float b):figuras(l){
	base=b;
}
circulo::circulo(float l):figuras(l){
}
void figuras::area(){}
void figuras::perimetro(){}

void cuadrado::area(){
	float are;
	are= lado*lado;
	cout<<"El Area Es: "<<are<<endl;
}
void cuadrado::perimetro(){
	float peri;
	peri=lado*4;
	cout<<"El Perimetro Es: "<<peri<<endl;
}
void rectangulo::area(){
	float are;
	are = lado*ancho;
	cout<<"El Area Es: "<<are<<endl;
}
void rectangulo::perimetro(){
	float peri_;
	peri_ = lado+ancho*2;
	cout<<"El Perimetro Es: "<<peri_<<endl;
}
void triangulo::area(){
	float ar;
	ar=base*lado/2;
	cout<<"El Area Es: "<<ar<<endl;
}
void triangulo::perimetro(){
	float pe;
	pe = base*3;
	cout<<"El Perimetro Es: "<<pe<<endl;
}
void circulo::area(){
	float are;
	are = 3.15*pow(lado,2);
	cout<<"El Area Es: "<<are<<endl;
}

int main (){
	figuras *conjunto[3];
	conjunto[0]= new cuadrado(20);
	conjunto[0]->area();
	conjunto[0]->perimetro();
	conjunto[1]= new triangulo(10,20);
	conjunto[1]->area();
	conjunto[1]->perimetro();
	conjunto[2]= new rectangulo(10,20);
	conjunto[2]->area();
	conjunto[2]->perimetro();
	conjunto[3]= new circulo(6.5);
	conjunto[3]->area();
}