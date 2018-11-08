// Fputs

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
	
	// Insertar car�cter
	fputc('H',archivo);
	
	// Insertar cadena de texto
	fputs("\nHola mundo!",archivo);
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	cout << "Pulsa Intro para finalizar...";
	cin.get();
	return 0;
}
