// DO WHILE

// LIBRERÍA
#include <iostream>

using namespace std;

int main() {
	// VARIABLE
	int opcion;
	
	// BUCLE
	do {
		cout << "Elige una opcion:" << endl;
		cout << endl;
		cout << "[1] - Continuar." << endl;
		cout << "[2] - Salir." << endl;
		cout << endl;
		cout << "Opcion: ";
		cin >> opcion;
		cout << endl;
	} while(opcion == 1);
	
	cin.get();
	return 0;
}
