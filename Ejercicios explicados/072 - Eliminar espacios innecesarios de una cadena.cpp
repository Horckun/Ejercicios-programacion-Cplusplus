// Eliminar espacios innecesarios de una cadena

// Librer�as
#include <iostream>
#include <string.h>
using namespace std;

// Funci�n principal
int main() {
	char* frase = "              Pero no hay queja del que deja y no se enoja por las tejas que caen del tejado agotadas por viejas         ";
	char* cadena = "";
	int i,j,c;
	
	c = 0;
	
	for(i = 0; i < strlen(frase); i++) {
		if(frase[i] == ' ') {
			c++;
		} else {
			cout << frase[i];
		}
	}
	
	cout << endl << endl;
	
	// Cierre
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
