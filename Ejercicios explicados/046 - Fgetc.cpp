// Fgetc

// Librer�a
#include <iostream>

using namespace std;

// Funci�n principal
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
	char letra = 'H';	
	// Leer un car�cter
	letra = fgetc(archivo);	
	// Mostrar car�cter le�do en pantalla
	cout << letra << "." << endl;	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
