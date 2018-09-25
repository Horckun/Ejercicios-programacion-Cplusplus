// Array

// LIBRERÍA
#include <iostream>

using namespace std;

// FUNCIÓN PRINCIPAL
int main() {
	int i,contar;
	char palabra[10];
	
	contar = 0;
	
	cout << "Escribe la primera letra: ";
	cin >> palabra[0];
	if(palabra[0] == 'a' || palabra[0] == 'A') {
		contar++;
	}
	cout << endl;
	cout << "Escribe la segunda letra: ";
	cin >> palabra[1];
	if(palabra[1] == 'a' || palabra[1] == 'A') {
		contar++;
	}
	cout << endl;
	cout << "Escribe la tercera letra: ";
	cin >> palabra[2];
	if(palabra[2] == 'a' || palabra[2] == 'A') {
		contar++;
	}
	cout << endl;
	cout << "Escribe la cuarta letra: ";
	cin >> palabra[3];
	if(palabra[3] == 'a' || palabra[3] == 'A') {
		contar++;
	}
	cout << endl;
	cout << "Escribe la quinta letra: ";
	cin >> palabra[4];
	if(palabra[4] == 'a' || palabra[4] == 'A') {
		contar++;
	}
	cout << endl;
	
	cout << "Hay " << contar << " 'a'." << endl;
	
	cout << "Presiona Intro para terminar...";
	cin.get();
	return 0;
}
