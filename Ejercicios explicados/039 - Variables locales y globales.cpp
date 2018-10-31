// Variables locales y globales

// Librería
#include <iostream>

using namespace std;

// Variable global
int global;

// Función secundaria
void funcion();

// Función principal
int main() {
	// Variable local
	int local = 8;
	
	// Mostrar en pantalla la variable local
	cout << "La variable local tiene como valor: " << local << "." << endl << endl;
	
	// Llamada a la función secundaria
	funcion();
	
	// Mostrar en pantalla la variable global
	cout << "La variable local tiene como valor: " << global << "." << endl << endl;
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
void funcion() {
	global = 5;
}
