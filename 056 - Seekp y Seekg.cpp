// Seekp y Seekg

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
		// Mostramos nombre y edade de la línea 2
		archivo.seekg(1*sizeof(struct ficha),ios::beg);
		archivo.read((char*)&persona,sizeof(struct ficha));
		cout << "Nombre: " << persona.nombre << endl;
		cout << "Edad: " << persona.edad << endl << endl;
		
		archivo.close();
	}
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
