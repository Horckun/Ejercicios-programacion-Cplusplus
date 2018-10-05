// Copiar cadena de carácteres

// Librería
#include <iostream>
#include <string.h>

using namespace std;

// Función principal
int main() {
	// Declaración variables
	int i;
	char palabra[10], palabra2[10];
	
	// Solicitud palabra
	cout << "Introduce una palabra: ";
	gets(palabra);
	
	// Copia palabra
	strcpy(palabra2,palabra);
	
	cout << palabra2 << endl;
	
	// Cierre
	cout << "Presiona Intro para terminr...";
	cin.get();
	return 0;
}
