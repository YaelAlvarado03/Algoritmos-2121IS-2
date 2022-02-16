#include <iostream>
#include <stdlib.h>
using namespace std;



//clase juan
class persona{
private:
string nombre;
int edad;
string area;
int antigue;
public:
persona(string,int,string,int);
void mostrar();

};
// constructor
persona::persona(string nom,int ed,string ar,int anti){
nombre=nom;
edad=ed;
antigue=anti;
area=ar;
}
//metodo clase padre
void persona::mostrar(){
	cout<<"nombre: "<<nombre<<endl;
	cout<<"edad: "<<edad<<endl;
	cout<<"area: "<<area<<endl;
	cout<<"antiguedad: "<<antigue<<endl;
}

class empleado: public persona{
	private:
		float sueldo;
	public:
		empleado(string,int,string,int,float);
		void mostraremp();
};

empleado::empleado(string nom,int ed,string ar,int anti ,float sue):persona(nom,ed,ar,anti){
	sueldo=sue;
}

void empleado::mostraremp(){
	mostrar();
	cout<<"sueldo: "<<sueldo<<endl;

}
int main(){
	empleado a1("juan",34,"ventas",15,43000);
	a1.mostraremp();
	
	system("pause");
	return 0;
}