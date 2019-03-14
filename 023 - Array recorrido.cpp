// Array recorrido

// Librería
#include <iostream>

using namespace std;

// Función principal
int main() {
	// Declaración de variables
	int matriz[5][3],i,j;
	
	// Guardando valores
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 3; j++) {
			cout << "Introduce un valor para la columna " << j+1 << ": ";
			cin >> matriz[i][j];
		}
		cout << endl;
	}
	
	// Mostrando valores
	for(i= 0; i < 5; i++) {
		for(j = 0; j < 3; j++) {
			cout << matriz[i][j];
		}
		cout << endl;
	}
	cout << endl;
	
	cout << "Pulsa una tecla para terminar...";
	cin.get();
	return 0;
}
