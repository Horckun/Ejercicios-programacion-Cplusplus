// Strcat

// Librerías
#include <iostream>
#include <string.h>

using namespace std;

// Función principal
int main() {
	// Declaración
	char cad1[5], cad2[5];
	
	// Copia
	strcpy(cad1, "Horc");
	strcpy(cad2, "kun");
	
	// Juntar cadenas
	strcat(cad1,cad2);
	
	// Impresión
	cout << cad1 << endl;
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
