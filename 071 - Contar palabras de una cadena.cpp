// Contar palabras de una cadena

// Librerías
#include <iostream>
#include <string.h>
using namespace std;

// Función principal
int main() {
	// Declaramos variables
	char* cadena = "Pero no hay queja del que deja y no se enoja por las tejas que caen del tejado agotadas por viejas";
	int contar, i, tamano;
	
	// Asignamos valores a variables
	tamano = strlen(cadena);	
	contar = 0;
	
	// Contamos palabras
	for(i = 0; i < strlen(cadena); i++) {
		if(cadena[i] == ' ') {
			contar++;
		}
	}
	
	// Mostramos en pantalla
	cout << "Frase: " << cadena << endl;
	cout << "Total de car" << char(160) << "cteres: " << tamano << endl;
	cout << "Espacios: " << contar << endl << endl;
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
