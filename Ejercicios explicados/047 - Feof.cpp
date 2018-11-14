// Feof

// Librería
#include <iostream>

using namespace std;

// Función principal
int main() {
	// Archivo *variable
	FILE *archivo;
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","rt");
	// Comprobar si se abre
	if(archivo == NULL) {
		cout << "No se ha podido abrir el archivo." << endl;
	}
	
	// Variable
	char letra;	
	// Leer un carácter
	letra = fgetc(archivo);	
	// Mostrar carácter por caracter
	while(feof(archivo) == 0) {
		cout << letra;
		letra = fgetc(archivo);
	}
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
