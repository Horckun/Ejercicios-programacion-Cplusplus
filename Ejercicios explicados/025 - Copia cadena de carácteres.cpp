// Copiar cadena de car�cteres

// Librer�a
#include <iostream>
#include <string.h>

using namespace std;

// Funci�n principal
int main() {
	// Declaraci�n variables
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
