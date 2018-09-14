// SENTENCIAS ANIDADAS

// LIBRERÍAS
#include <iostream>

using namespace std;

// FUNCIÓN PRINCIPAL
int main() {
	int numero;
	
	numero = 0;
	
	while(numero < 11) {
		if(numero % 2 == 0) {
			cout << numero << endl;
		}
		numero++;
	}
	
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
