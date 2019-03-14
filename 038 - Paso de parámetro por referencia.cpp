// Paso de parámetro por referencia

// Librería
#include <iostream>

using namespace std;

// Otras funciones
void cambiar(int &num);

// Función principal
int main() {
	// Variables
	int x;
	
	// Pedir valor para x
	cout << "Introduce un valor para la variable x: ";
	cin >> x;
	cout << endl;
	
	// Mostrar valor de x
	cout << "Has introducido el valor " << x << "." << endl << endl;
	
	// Llamada a función cambiar
	cambiar(x);
	
	// Volver a mostrar valor de x + 1
	cout << "Ahora x tiene como valor " << x << ".";
	
	// Cierre
	return 0;
}
void cambiar(int &num) {
	// Sumamos 1 a x
	num = num + 1;
}
