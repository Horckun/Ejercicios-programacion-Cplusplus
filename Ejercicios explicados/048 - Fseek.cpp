// Fseek

// Librería
#include <iostream>

using namespace std;

// Estructuras
struct ficha {
	char nombre[50];
};

// Función principal
int main() {
	// Archivo *variable
	FILE *archivo;
	
	struct ficha usuario;
	
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","rt");
	// Comprobar si se abre
	if(archivo == NULL) {
		cout << "No se ha podido abrir el archivo." << endl;
	}
	
	fseek(archivo,1*sizeof(struct ficha),SEEK_SET);
	fread(&usuario,sizeof(struct ficha),2,archivo);
	cout << usuario.nombre << endl;
	fread(&usuario,sizeof(usuario),1,archivo);
	
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	cout << "Pulse Intro para terminar...";
	cin.get();
	return 0;
}
