#include "header.h"

int main() {
	int n = 10;
	cout << n << endl;
	
	cambio(n);
	
	getch();
	return 0;
}
void cambio(int n) {
	n -= 2;
	cout << n << endl;
}
