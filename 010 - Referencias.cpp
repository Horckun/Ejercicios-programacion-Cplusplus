// REFERENCIAS

// Librerias
#include <iostream>
using namespace std;

// Funcion principal
int main(void) {
	// Dando valores a variables
	int codigo, &r_codigo = codigo;
	
	// A la variables de la referencia le asignamos un valor
	r_codigo = 5;
	
	// Valor de codigo
	cout << "codigo = " << codigo << endl;
	
	// Referencia de r_codigo
	cout << "r_codigo = " << r_codigo << endl;
	
	cin.get();
	
	return 0;
}
