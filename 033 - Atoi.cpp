// Atoi

// Librer�a
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

// Funci�n principal
int main() {
	// Variable
	char cadena1[5],cadena2[5];
	int cad1,cad2,cads;
	
	// Pedir n�mero y almacenar en cadena
	cout << "Introduce un numero: ";
	gets(cadena1);
	
	cout << "Introduce otro numero: ";
	gets(cadena2);
	
	// Transformar cadena en n�mero
	
	cad1 = atoi(cadena1);
	cad2 = atoi(cadena2);
	cads = cad1 + cad2;
	
	// Mostrar resultado
	
	cout << cad1 << " + " << cad2 << " = " << cads << endl;
	
	// Cierre
	return 0;
}
