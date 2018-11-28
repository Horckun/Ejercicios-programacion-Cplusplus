// Read

// Librerías
#include <fstream>
#include <iostream>
using namespace std;

// Estructura
struct ficha {
	char nombre[20];
	int edad;
};

// Función principal
int main() {
	// Variable de structura
	struct ficha persona;
	// Variable para archivo
	ifstream archivo;
	
	// Crear archivo
	archivo.open("archivo.dat",ios::in | ios::binary);
	// Comprobar archivo
	if(!archivo) {
		cout << "No se ha podido crear el archivo." << endl;
	} else {
		cout << "El archivo se ha creado correctamente." << endl;
		// Mostramos 3 nombres y edades
		while(!archivo.eof()) {
			cout << "Nombre: " << persona.nombre << endl;
			cout << "Edad: " << persona.edad << endl << endl;
			// Añadimos al archivo
			archivo.read((char*)&persona,sizeof(ficha));
		}
		archivo.close();
	}
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
