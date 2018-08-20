// GETCH

// Librerias
#include <iostream>
#include <conio.h>
using namespace std;

// Funcion principal
int main(void) {
	char letra;
	
	// Obtenemos un caracter por teclado y lo mostramos
	letra = getch();
	putchar(letra);
	
	// Hacemos una pausa hasta que el usuario presione Intro
	fflush(stdin);
	cout << "\nPresiona una tecla para terminar..." << endl;	
	getch();
	
	return 0;
}
