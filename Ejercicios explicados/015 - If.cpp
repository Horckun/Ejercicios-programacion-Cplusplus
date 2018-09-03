// IF

// LIBRERÍA
#include <iostream>

using namespace std;

// FUNCIÓN PRINCIPAL
int main() {
	// DECLARAR VARIABLE
	int x;
	
	// SOLICITAR NÚMERO
	cout << "Inserta un valor: ";
	cin >> x;
	
	// CONDICIONAL IF
	if(x >= 0) {
		cout << "El valor es positivo." << endl;
	}
	
	if(x >= 0 && x <= 9) {
		cout << "El valor tiene tiene un digito." << endl;
	}
	
	// CIERRE
	cin.get();
	return 0;
}
