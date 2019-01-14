// Método de selección directa

// Librerías
#include <iostream>
using namespace std;

// Función principal
int main() {
	// Declarar variables
	int i,j,aux,v[5] = {23,456,213,567,1234};
	
	// Buscar y reemplazar
	for(i = 0; i < 5; i++) {
		for(j = i+1; j < 4; j++) {
			if(v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	// Mostrar array
	for(i = 0; i < 5; i++) {
		cout << v[i] << endl;
	}
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
