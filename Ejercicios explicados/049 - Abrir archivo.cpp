// Abrir archivo

// Librerías
#include <fstream>
#include <iostream>
using namespace std;

// Función principal
int main() {
	// Declarar variable para manejar el archivo
	ifstream archivo;
	
	// Abrir archivo
	archivo.open("archivo.txt");
	
	// Comprobar si se ha abierto
	if(!archivo) {
		cout << "El archivo no existe." << endl;
	} else {
		cout << "El archivo se ha abierto." << endl;
	}
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
