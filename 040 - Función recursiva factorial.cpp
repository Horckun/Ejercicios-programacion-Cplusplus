// Funci�n recursiva factorial

// Librer�a
#include <iostream>

using namespace std;

// Funci�n secundaria
void factorial(int &n, int &f);

// Funci�n principal
int main() {
	// Variables
	int n,f;
	
	// Pedir n�mero
	cout << "Introduce un valor para averiguar su factorial: ";
	cin >> n;
	
	f = 1;
	
	factorial(n,f);
	
	// Mostrar factorial
	cout << "El factorial de " << n << " es " << f << endl;
	
	// Cierre
	return 0;
}
void factorial(int &n, int &f) {
	int i;
	
	cout << endl << "| ";
	// Calcular factorial
	for(i = 1; i <= n; i++) {
		f *= i;
		cout << f << " | ";
	}
	cout << endl << endl;
}
