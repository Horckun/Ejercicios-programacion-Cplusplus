// Estructura de una funci�n

// Librer�a
#include <iostream>

using namespace std;

// Otras funciones
void funcion();

// Funci�n principal
int main() {
	// Llamada a funci�n secundaria
	funcion();
	
	// Cierre
	cout << "Pulse Intro para terminar...";
	cin.get();
	return 0;
}
// Funci�n secundaria
void funcion() {
	cout << "\t================" << endl;
	cout << "\t=              =" << endl;
	cout << "\t= Hello World! =" << endl;
	cout << "\t=              =" << endl;
	cout << "\t================" << endl;
}
