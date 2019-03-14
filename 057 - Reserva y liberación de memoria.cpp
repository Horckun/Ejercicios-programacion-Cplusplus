// Reserva y liberación de memoria

// Librerías
#include <iostream>
using namespace std;

// Estructura
struct ficha {
	char nombre[20];
	int edad;
};

// Función principal
int main() {
	// Variable de estructura
	struct ficha *persona;
	// Reservamos memoria
	persona = new struct ficha;
	
	// Solicitamos nombre y edad
	cout << "Introduce un nombre: ";
	cin >> persona->nombre;
	cout << "Introduce una edad: ";
	cin >> persona->edad;
	cout << endl;
	
	// Mostramos nombre y edad
	cout << "Nombre: " << persona->nombre << endl;
	cout << "Edad: " << persona->edad << endl;
	
	// Liberamos memoria
	delete persona;
	
	// Cierre
	return 0;
}
