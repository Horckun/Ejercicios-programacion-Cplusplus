// Atoi

// Librería
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

// Función principal
int main() {
	// Variable
	char cadena1[5],cadena2[5];
	int cad1,cad2,cads;
	
	// Pedir número y almacenar en cadena
	cout << "Introduce un numero: ";
	gets(cadena1);
	
	cout << "Introduce otro numero: ";
	gets(cadena2);
	
	// Transformar cadena en número
	
	cad1 = atoi(cadena1);
	cad2 = atoi(cadena2);
	cads = cad1 + cad2;
	
	// Mostrar resultado
	
	cout << cad1 << " + " << cad2 << " = " << cads << endl;
	
	// Cierre
	return 0;
}
