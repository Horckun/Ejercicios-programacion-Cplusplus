// test

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	// while
	int i = 0;
	while(i <= 10) {
		cout << i << endl;
		i++;
	}
	
	cout << endl;
	
	// do while
	int j = 0;
	do {
		cout << j << endl;
		j++;
	} while(j <= 10);
	
	getch();
	return 0;
}
