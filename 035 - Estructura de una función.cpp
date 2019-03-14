// Estructura de una función

// Librería
#include <iostream>

using namespace std;

// Otras funciones
void funcion();

// Función principal
int main() {
	// Llamada a función secundaria
	funcion();
	
	// Cierre
	cout << "Pulse Intro para terminar...";
	cin.get();
	return 0;
}
// Función secundaria
void funcion() {
	cout << "\t================" << endl;
	cout << "\t=              =" << endl;
	cout << "\t= Hello World! =" << endl;
	cout << "\t=              =" << endl;
	cout << "\t================" << endl;
}
