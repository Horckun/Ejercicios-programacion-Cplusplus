// OPERADORES ARITMÉTICOS

// Librerias
#include <iostream>
using namespace std;

// Funcion principal
int main(void) {
	// Dando valores a variables
	int u,v,w,x,y,z;
	u = 8; // La variable v tiene como valor 8
	v = u + 2; // Suma la variable u (8) + 2
	w = v - 2; // Resta el valor de v (10) - 2
	x = w * 2; // Multiplica el valor de w (8) * 2
	y = x / 2; // Divide x (16) / 2
	z = y % 2; // Obtiene el resto de dividir y (8) entre 2
	
	// Imprimiendo en pantalla los resultados
	cout << "u = " << u << endl;
	cout << "v = " << v << endl;
	cout << "w = " << w << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	cout << "-u = " << -u << endl; // También se puede poner el valor en negativo añadiendo el símbolo de resta
	
	cin.get();
	
	return 0;
}
