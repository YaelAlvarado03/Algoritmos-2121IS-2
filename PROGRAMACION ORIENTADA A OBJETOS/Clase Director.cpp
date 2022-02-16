#include <iostream>
using namespace std;

class persona{
private:
	string nombre;
	int edad;
public:
	persona(string,int);
	void mostrar();	
};

//constructor
persona::persona(string nom, int ed){
	nombre=nom;
	edad=ed;
}

//Mètodo clase padre

void persona::mostrar(){
	cout<<"nombre:"<<nombre<<endl;
	cout<<"edad:"<<edad<<endl;
}

//clase hija

class empleado: public persona{ //para referir que es herencia se utiliza public
private:
	float sueldo;
public:
	empleado(string,int,float); //constructor de la clase hija
	void mostraremp();
};
//constructor de la clase hija
empleado::empleado(string nom,int ed,float sue):persona(nom,ed){
	sueldo=sue;
}
//Mètodo de la clase hija
void empleado::mostraremp(){
	mostrar();
	cout<<"sueldo:"<<sueldo<<endl;
}

//Clase hija2
class director:public persona{ //para referirse que es herencia se utiliza public
private:
	string area;
	string antiguedad;
public:
	director(string ,int, string,string); //cosntructor de la clase hija2
	void mostrardir();
};
//constructor de la clase hia2
director::director(string nom, int ed,string are, string anti):persona(nom,ed){
	area=are;
	antiguedad=anti;
}
//Metodo de la clase hija2
void director::mostrardir(){
	mostrar();
	cout<<"area:"<<area<<endl;
	cout<<"antiguedad:"<<antiguedad<<endl; 
}

int main() {
	cout<<"La clase persona tiene los siguientes atributos: "<<endl;
	persona a2 ("juan",32);
	a2.mostrar(); 
	
	cout<<"-------------------------------------"<<endl;
	cout<<"La herencia empleado tiene los siguientes atributos: "<<endl;
	empleado a3 ("Andres",53,18000);
	a3.mostraremp();
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"La herencia director tiene los siguientes atributos: "<<endl;
	director a1("Mariana",49,"Ventas","15 anios");
	a1.mostrardir(); 
	system("pause");
	return 0; 
}