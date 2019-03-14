// Strupr

// Librería
#include <iostream>
#include <string.h>

using namespace std;

// Función principal
int main() {
	// Variables
	char palabra[20];
	
	// Insertar palabra
	cout << "Introduce una palabra en minúscula: ";
	gets(palabra);
	
	// Cambio a mayúscula
	strupr(palabra);
	
	// Imprimir palabra
	cout << palabra;
	
	// Cierre
	return 0;
}
