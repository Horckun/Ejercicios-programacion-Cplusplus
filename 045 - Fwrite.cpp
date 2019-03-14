// Fwrite

// Librería
#include <iostream>

using namespace std;

// Función principal
int main() {
	// Archivo *variable
	FILE *archivo;
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","wt");
	// Comprobar si se abre
	if(archivo == NULL) {
		cout << "No se ha podido abrir el archivo." << endl;
	}
	
	// Variable
	char letra = 'H';
	
	// Insertar carácter
	fputc('H',archivo);
	
	// Insertar cadena de texto
	fputs("\nHola mundo!\n",archivo);
	
	// Coger la letra, comprobar su tamaño, y escribirlo
	fwrite(&letra,sizeof(letra),1,archivo);
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	cout << "Pulsa Intro para finalizar...";
	cin.get();
	return 0;
}
