// test

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	char palabra[7];
	cout << "Escribe una palabra: ";
	cin >> palabra;
	cout << endl;
	
	int i;
	
	for(i = 0; i < 7; i++) {
		cout << palabra[i];
	}
	cout << endl;
	
	getch();
	return 0;
}
