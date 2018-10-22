// Estructura

// Librería
#include <iostream>
#include <string.h>

using namespace std;

// Estructura
struct info {
	char nombre[20];
	int edad;
} ficha;

// Función principal
int main() {
	// Pedimos nombre y edad
	cout << "Introduce el nombre: ";
	gets(ficha.nombre);
	cout << "Ahora introduce la edad: ";
	cin >> ficha.edad;
	cout << endl;
	
	// Mostramos nombre y edad
	cout << "Nombre: " << ficha.nombre << endl;
	cout << "Edad: " << ficha.edad << " anios." << endl;
	
	// Cierre
	return 0;
}
