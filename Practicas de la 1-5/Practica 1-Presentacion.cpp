#include <iostream>
using namespace std;
class persona{
private:
	string nombre;
	int edad;
	
public:
	persona(string, int);
	void presentarse();
};

persona::persona (string pnombre, int pedad){
	nombre=pnombre;
	edad=pedad;
}

void persona::presentarse(){
	cout<<" hola soy: "<<nombre<<" y tengo "<<edad<<" anios "<<endl;
}
int main() {
	
	persona p1("carlos",34);
	p1.presentarse();
	system("pause");
	return 0;
}

