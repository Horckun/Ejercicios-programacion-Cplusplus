// Comprobar a�o bisiesto

// Librer�as
#include <iostream>
using namespace std;

// Funci�n principal
int main() {
	// Declaraci�n de variables
	int anio;
	
	// T�tulo
	cout << "\t================" << endl;
	cout << "\t=              =" << endl;
	cout << "\t= A�O BISIESTO =" << endl;
	cout << "\t=              =" << endl;
	cout << "\t================" << endl << endl;
	
	// Solicitar a�o
	cout << "\tIntroduza un a" << char(164) << "o: ";
	cin >> anio;
	cout << endl;
	
	// Comprobar a�o
	if((anio >= 0) && (anio <= 2100)) {
		// Comprobar si es bisiesto
		if(anio % 400 == 0) {
			cout << "\tEl a" << char(164) << "o " << anio << " s" << char(161) << " es bisiesto." << endl << endl;
		} else {
			cout << "El a" << char(164) << "o " << anio << " no es bisiesto." << endl << endl;
		}
	} else {
		cout << "No has introducido un a" << char(164) << "o correcto." << endl << endl;
	}
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
