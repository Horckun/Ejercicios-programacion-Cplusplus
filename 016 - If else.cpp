// IF ELSE

// LIBRER�A
#include <iostream>

using namespace std;

// FUNCI�N PRINCIPAL
int main() {
	// DECLARAR VARIABLE
	int x;
	
	// SOLICITAR N�MERO
	cout << "Inserta un valor: ";
	cin >> x;
	
	// CONDICIONAL IF
	if(x >= 0) {
		cout << "El valor es positivo." << endl;
	} else {
		cout << "El valor es negativo." << endl;
	}
	
	if(x >= 0 && x <= 9) {
		cout << "El valor tiene un digito." << endl;
	} else {
		cout << "El valor tiene mas de un digito." << endl;
	}
	
	// CIERRE
	cin.get();
	return 0;
}
