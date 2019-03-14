// Strcmp

// Librería
#include <iostream>
#include <string.h>

using namespace std;

// Función principal
int main() {
	// Variables
	char palabra1[20],palabra2[20];
	int comparar;
	
	// Pedir palabras
	cout << "Introduce la primera palabra: ";
	gets(palabra1);
	cout << "Ahora introduce la segunda palabra: ";
	gets(palabra2);
	
	// Comparar
	comparar = strcmp(palabra1,palabra2);
	
	// Mostrar resultado
	if(comparar != 0) {
		cout << "Las palabras son diferentes.\n";
	} else {
		cout << "Las palabras son iguales.\n";
	}
	
	// Cierre
	return 0;
}
