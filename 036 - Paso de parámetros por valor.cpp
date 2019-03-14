// Paso de parámetros por valor

// Librería
#include <iostream>

using namespace std;

// Otra función
void funcion(int x);

// Función principal
int main() {
	int x;
	
	//Solicitamos valor para pasarlo a otra función
	cout << "Introduce un valor: ";
	cin >> x;
	cout << endl;
	
	// Llamamos a la función siguiente
	funcion(x);
	
	// Cierre
	return 0;
}
// Pasamos por parámetro el valor solicitado
void funcion(int x) {
	cout << "El valor introducido es " << x << "." << endl;
}
