// test

#include <iostream>
#include <conio.h>

using namespace std;

struct familia {
	int telefono;
	int personas;
	int direccion;
	int piso() {
		return personas;	
	}
	int dir(int x) {
		personas = x;
	}
	familia() {
		personas = 5;
	}
}fernandez,soriano;
