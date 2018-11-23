// Write

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
	// Variable declarada
	int i;
	// Variable para archivo
	ofstream archivo;
	
	// Crear archivo
	archivo.open("archivo.dat",ios::out | ios::binary);
	// Comprobar archivo
	if(!archivo) {
		cout << "No se ha podido crear el archivo." << endl;
	} else {
		cout << "El archivo se ha creado correctamente." << endl;
		// Solicitamos 3 nombres y edades
		for(i = 0; i < 3; i++) {
			cout << "Introduce un nombre para la persona " << i+1 << ": ";
			cin >> persona.nombre;
			cout << "Introduce una edad para la persona " << i+1 << ": ";
			cin >> persona.edad;
			// Añadimos al archivo
			archivo.write((char*)&persona,sizeof(persona));
		}
		archivo.close();
	}
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
