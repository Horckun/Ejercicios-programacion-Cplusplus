// Comprobar formato fecha

// Librer�a
#include <iostream>
using namespace std;

// Funci�n principal
int main() {
	// Declaraci�n variables
	int dia,mes,anio;
	// T�tulo
	cout << "\t=========================" << endl;
	cout << "\t=                       =" << endl;
	cout << "\t= COMPROBACI" << char(224) <<"N DE FECHA =" << endl;
	cout << "\t=                       =" << endl;
	cout << "\t=========================" << endl << endl;
	
	// Solicitar fecha
	cout << "Introduzca un d" << char(161) << "a (dd): ";
	cin >> dia;
	cout << "Introduzca un mes (mm): ";
	cin >> mes;
	cout << "Introduzca un a" << char(164) << "o (aaaa): ";
	cin >> anio;
	cout << endl;
	
	// Comprobamos fecha
	if((dia <= 31 && dia >= 1) && (mes <= 12 && mes >= 1) && (anio <= 2019 && anio >= 1919)) {
		cout << "\tLa fecha es: " << dia << "/" << mes << "/" << anio << "." << endl << endl;
	} else {
		cout << "La fecha es incorrecta." << endl << endl;
	}
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
