// Escribir en archivo

// Librerías
#include <fstream>
#include <iostream>
using namespace std;

// Función principal
int main() {
	// Declarar variable para manejar el archivo
	ofstream archivo;
	
	// Abrir archivo
	archivo.open("archivo.txt");
	
	// Comprobar si se ha abierto
	if(!archivo) {
		cout << "El archivo no existe." << endl;
	} else {
		cout << "El archivo se ha abierto." << endl;
	}
	
	archivo << "Hola mundo!" << endl;
	
	// Cerrar archivo
	archivo.close();
	
	// Comprobar si se ha cerrado
	if(!archivo) {
		cout << "El archivo no se ha cerrado." << endl;
	} else {
		cout << "El archivo se ha cerrado." << endl;
	}
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
