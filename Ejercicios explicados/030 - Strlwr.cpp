// Strlwr

// Librer�a
#include <iostream>
#include <string.h>

using namespace std;

// Funci�n principal
int main() {
	// Variables
	char palabra[20];
	
	// Pedir palabra
	cout << "Escribe una palabra en mayusculas: ";
	gets(palabra);
	
	// Cambio a min�scula
	strlwr(palabra);
	
	// Mostrar cambio
	cout << palabra;
	
	// Cierre
	return 0;
}
