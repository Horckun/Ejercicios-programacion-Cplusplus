// SWITCH

// LIBRERÍA
#include <iostream>

using namespace std;

// FUNCIÓN PRINCIPAL
int main() {
	char vocal;
	
	cout << "Introduce una vocal: ";
	cin >> vocal;
	
	switch(vocal) {
		case 'a': {
			cout << "Has pulsado la tecla 'a'." << endl;
			break;
		}
		case 'e': {
			cout << "Has pulsado la tecla 'e'." << endl;
			break;
		}
		case 'i': {
			cout << "Has pulsado la tecla 'i'." << endl;
			break;
		}
		case 'o': {
			cout << "Has pulsado la tecla 'o'." << endl;
			break;
		}
		case 'u': {
			cout << "Has pulsado la tecla 'u'." << endl;
			break;
		}
		default: {
			cout << "No has introducido ninguna vocal." << endl;
			break;
		}
	}
	
	cin.get();
	return 0;
}
