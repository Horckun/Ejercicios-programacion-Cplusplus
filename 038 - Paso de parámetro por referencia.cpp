// Paso de par�metro por referencia

// Librer�a
#include <iostream>

using namespace std;

// Otras funciones
void cambiar(int &num);

// Funci�n principal
int main() {
	// Variables
	int x;
	
	// Pedir valor para x
	cout << "Introduce un valor para la variable x: ";
	cin >> x;
	cout << endl;
	
	// Mostrar valor de x
	cout << "Has introducido el valor " << x << "." << endl << endl;
	
	// Llamada a funci�n cambiar
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
