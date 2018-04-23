#include "header.h"

int main() {
	fernandez.telefono = 670597836;
	soriano = fernandez;
	soriano.dir(4);
	cout << soriano.telefono << endl;
	cout << soriano.personas << endl;
	cout << soriano.piso() << endl;
	
	getch();
	return 0;
}
