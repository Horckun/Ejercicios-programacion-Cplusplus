// Getline

// Librerías
#include <fstream>
#include <iostream>
using namespace std;

// Función principal
int main() {
	// Declarar variable
	int i;
	char cadena[250];
	
	// Variable para archivo
	ifstream archivo;
	
	// Abrir archivo
	archivo.open("archivo.dat");
	// Comprobar archivo
	if(!archivo) {
		cout << "No se ha podido crear el archivo." << endl;
	} else {
		cout << "El archivo se ha creado correctamente." << endl;
		// Leemos el archivo
		while(!archivo.eof()) {
			archivo.getline(cadena,250);
			cout << cadena << endl;
		}
		archivo.close();
	}
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
