// WHILE

// LIBRERÍA
#include <iostream>

using namespace std;

// FUNCIÓN PRINCIPAL
int main() {
	int x;
	
	x = 0;
	
	// BUCLE WHILE
	while(x < 11) {
		cout << "- " << x << "." << endl;
		x++;
	}
	
	x = 0;
	
	while(x != 8) {
		cout << "Introduce un numero del 1 al 10: ";
		cin >> x;
	}
	
	// CIERRE
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
