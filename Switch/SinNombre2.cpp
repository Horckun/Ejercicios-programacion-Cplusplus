// test

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	char o;
	
	cout << "Escribe una letra: " << endl;
	cin >> o;
	
	switch(o) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "Es una vocal." << endl;
			break;
		default:
			cout << "Es una consonante." << endl;
	}
	
	getch();
	return 0;
}
