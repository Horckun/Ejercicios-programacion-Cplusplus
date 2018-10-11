// Strstr

// Librería
#include <iostream>
#include <string.h>

using namespace std;

// Función principal
int main() {
	// Variables
	char frase[100],palabra[20];
	
	// Pedir frase y palabra
	cout << "Escribe una frase: ";
	gets(frase);
	
	cout << "Ahora escribe una palabra: ";
	gets(palabra);
	
	if(strstr(frase,palabra) != NULL) {
		cout << "Se ha encontrado la palabra." << endl;
	} else {
		cout << "No se ha encontrado la palabra." << endl;
	}
	
	// Cierre
	return 0;
}
