// Strupr

// Librer�a
#include <iostream>
#include <string.h>

using namespace std;

// Funci�n principal
int main() {
	// Variables
	char palabra[20];
	
	// Insertar palabra
	cout << "Introduce una palabra en min�scula: ";
	gets(palabra);
	
	// Cambio a may�scula
	strupr(palabra);
	
	// Imprimir palabra
	cout << palabra;
	
	// Cierre
	return 0;
}
