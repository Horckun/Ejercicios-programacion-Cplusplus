// Strlen

// Librer�as
#include <iostream>
#include <string.h>

using namespace std;

// Funci�n principal
int main() {
	// Variables
	char palabra[20];
	int contar;
	
	// Imprimir
	cout << "Introduce una palabra: ";
	gets(palabra);
	
	// C�lculo
	contar = strlen(palabra);
	
	// Imprimir c�lculo
	cout << palabra << " tiene " << contar << " letras.\n";
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
