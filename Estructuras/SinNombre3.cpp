#include "header.h"

int main() {
	introducir();
	
	cout << "Nombre: " << programador.nombre << endl;
	cout << "Edad: " << programador.edad << endl;
	cout << "Telefono: " << programador.telefono << endl;
	
	getch();
	return 0;
}
void introducir() {
	cout << "Nombre: ";
	cin >> programador.nombre;
	cout << "Edad: ";
	cin >> programador.edad;
	cout << "Telefono: ";
	cin >> programador.telefono;
	cout << endl;
	cout << "============" << endl;
	cout << endl;
}
