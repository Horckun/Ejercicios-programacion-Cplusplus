// Strtok

// Librer�a
#include <iostream>
#include <string.h>

using namespace std;

// Funci�n principal
int main() {
	// Variables
	char palabras[300], *p;
	
	// Solicitar palabras por comas
	cout << "Introduce varias palabras separadas por comas: ";
	gets(palabras);
	
	// Obtener primer fragmento
	p = strtok(palabras,",");
	if(p) {
		cout << p << endl;
	}
	
	// Encontrar m�s fragmentos
	while(p = strtok(NULL,",")) {
		cout << p << endl;
	}
	
	// Cierre
	return 0;
}
