// Strlen

// Librerías
#include <iostream>
#include <string.h>

using namespace std;

// Función principal
int main() {
	// Variables
	char palabra[20];
	int contar;
	
	// Imprimir
	cout << "Introduce una palabra: ";
	gets(palabra);
	
	// Cálculo
	contar = strlen(palabra);
	
	// Imprimir cálculo
	cout << palabra << " tiene " << contar << " letras.\n";
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
