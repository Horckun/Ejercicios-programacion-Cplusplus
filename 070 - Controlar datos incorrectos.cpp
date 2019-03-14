// Controlar datos incorrectos

// Librerías
#include <iostream>
using namespace std;

// Función principal
int main() {
	int edad;
	
	do {
		// Solicitamos edad
		cout << "Introduce tu edad: ";
		cin >> edad;
		cout << endl;
		
		if(edad < 0 || edad > 120) {
			cout << "El valor indicado no es el correcto." << endl << endl;
		}
	} while(edad < 0 || edad > 120);
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
