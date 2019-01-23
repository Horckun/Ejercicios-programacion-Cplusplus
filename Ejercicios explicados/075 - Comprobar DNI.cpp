// Comprobar DNI

// Librerías
#include <iostream>
#include <string.h>
using namespace std;

// Prototipos
char letra_dni(long int numero);

// Función principal
int main() {
	// Declaración de variables
	long int dni;
	char letra;
	
	// Solicitamos número y letra de DNI y lo comprobamos
	do {
		cout << "Escribe tu n" << char(163) << "mero de DNI: ";
		cin >> dni;
		cout << endl;
		
		cout << "Ahora escribe la letra de tu DNI: ";
		cin >> letra;
		cout << endl;
		
		if(letra == letra_dni(dni)) {
			cout << "El DNI es correcto." << endl;
		} else {
			cout << "La letra de tu DNI es: " << letra_dni(dni) << endl;
		}
	} while(letra != letra_dni(dni));
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
// Funciones secundarias
char letra_dni(long int numero) {
	// Declaramos variales
	int resto;
	char letra, cadena[25];
	
	// Copiamos a cadena
	strcpy(cadena,"TRWAGMYFPDXBNJZSQVHLCKET");
	
	// Asignamos valores
	resto = numero % 23;
	letra = cadena[resto];
	
	// Devolvemos valor
	return letra;
}
