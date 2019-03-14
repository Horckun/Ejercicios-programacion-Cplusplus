// Comprobar año bisiesto

// Librerías
#include <iostream>
using namespace std;

// Función principal
int main() {
	// Declaración de variables
	int anio;
	
	// Título
	cout << "\t================" << endl;
	cout << "\t=              =" << endl;
	cout << "\t= AÑO BISIESTO =" << endl;
	cout << "\t=              =" << endl;
	cout << "\t================" << endl << endl;
	
	// Solicitar año
	cout << "\tIntroduza un a" << char(164) << "o: ";
	cin >> anio;
	cout << endl;
	
	// Comprobar año
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
