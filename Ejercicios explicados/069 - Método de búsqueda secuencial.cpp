// M�todo de b�squeda secuencial

// Librer�as
#include <iostream>
using namespace std;

// Funci�n principal
int main() {
	// Declaraci�n de variables
	int i,n,e = 0,v[5] = {2,34,987,8,1234};
	
	// Solicitar n�mero a buscar
	cout << "Introduce un n" << char(163) << "mero a buscar: ";
	cin >> n;
	
	// Recorrer bucle
	for(i = 0; i < 5; i++) {
		// Buscar n�mero
		if(v[i] == n) {
			e = 1;
		}
	}
	
	// Mostrar en pantalla resultado
	if(e == 1) {
		cout << "El n" << char(163) << "mero " << n << " est" << char(160) << " en el array." << endl << endl;
	} else {
		cout << "El n" << char(163) << "mero " << n << " no est" << char(160) << " en el array." << endl << endl;
	}
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
