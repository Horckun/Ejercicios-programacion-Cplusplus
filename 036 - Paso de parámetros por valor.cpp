// Paso de par�metros por valor

// Librer�a
#include <iostream>

using namespace std;

// Otra funci�n
void funcion(int x);

// Funci�n principal
int main() {
	int x;
	
	//Solicitamos valor para pasarlo a otra funci�n
	cout << "Introduce un valor: ";
	cin >> x;
	cout << endl;
	
	// Llamamos a la funci�n siguiente
	funcion(x);
	
	// Cierre
	return 0;
}
// Pasamos por par�metro el valor solicitado
void funcion(int x) {
	cout << "El valor introducido es " << x << "." << endl;
}
