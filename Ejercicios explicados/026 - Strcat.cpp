// Strcat

// Librer�as
#include <iostream>
#include <string.h>

using namespace std;

// Funci�n principal
int main() {
	// Declaraci�n
	char cad1[5], cad2[5];
	
	// Copia
	strcpy(cad1, "Horc");
	strcpy(cad2, "kun");
	
	// Juntar cadenas
	strcat(cad1,cad2);
	
	// Impresi�n
	cout << cad1 << endl;
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
