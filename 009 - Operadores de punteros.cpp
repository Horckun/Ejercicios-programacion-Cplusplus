// OPERADORES DE PUNTEROS

// Librerias
#include <iostream>
using namespace std;

// Funcion principal
int main(void) {
	// Dando valores a variables
	int lapices, *p_lapices, libros, *p_libros, calculadoras, *p_calculadoras;
	
	// A la variables de los punteros les asignamos la dirección de las variables
	p_lapices = &lapices;
	p_libros = &libros;
	p_calculadoras = &calculadoras;
	
	// A los punteros les damos el valor de las variables
	*p_lapices = 2;
	*p_libros = 8;
	*p_calculadoras = 1;
	
	// Valor de lapices
	cout << "Lapices = " << *p_lapices << endl;
	
	// Direccion de libros
	cout << "Libros = " << &p_libros << endl;
	
	// Referencia de calculadoras
	cout << "Calculadoras = " << p_calculadoras << endl;
	
	cin.get();
	
	return 0;
}
