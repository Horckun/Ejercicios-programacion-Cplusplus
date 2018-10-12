// Strlwr

// Librería
#include <iostream>
#include <string.h>

using namespace std;

// Función principal
int main() {
	// Variables
	char palabra[20];
	
	// Pedir palabra
	cout << "Escribe una palabra en mayusculas: ";
	gets(palabra);
	
	// Cambio a minúscula
	strlwr(palabra);
	
	// Mostrar cambio
	cout << palabra;
	
	// Cierre
	return 0;
}
