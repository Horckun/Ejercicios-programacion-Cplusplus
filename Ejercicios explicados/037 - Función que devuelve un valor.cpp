// Funci�n que devuelve un valor

// Librer�a
#include <iostream>

using namespace std;

// Funciones secundarias
int suma(int n1, int n2);

// Funci�n principal
int main() {
	// Variables
	int n1,n2,res;
	
	// Pedir n�meros
	cout << "Introduce un valor: ";
	cin >> n1;
	cout << "Ahora introduce otro valor: ";
	cin >> n2;
	
	res = suma(n1,n2);
	
	// Mostrar resultado
	cout << "El resultado de la suma de " << n1 << " + " << n2 << " es " << res << endl;
	
	// Cierre
	return 0;
}
// Funciones secundarias
int suma(int n1, int n2) {
	int resultado = n1 + n2;
	
	return resultado;
}
