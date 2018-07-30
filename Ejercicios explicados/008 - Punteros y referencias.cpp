// PUNTEROS Y REFERENCIAS

// Librerias
#include <iostream>
using namespace std;

// Funcion principal
int main(void) {
	// Dando valores a variables
	int edad,anio_actual,anio_nacimiento;
	
	// Solicitamos edad
	cout << "Edad? ";
	fflush(stdin);
	cin >> edad;
	
	// Solicitamos año actual
	cout << "Anio actual? ";
	fflush(stdin);
	cin >> anio_actual;
	
	// Solicitamos año nacimiento
	cout << "Anio nacimiento? ";
	fflush(stdin);
	cin >> anio_nacimiento;
	
	// Imprimiendo en pantalla los resultados
	cout << "Edad " << edad << ", anio actual " << anio_actual << ", y anio de nacimiento " << anio_nacimiento << "." << endl;
	
	cin.get();
	
	return 0;
}
