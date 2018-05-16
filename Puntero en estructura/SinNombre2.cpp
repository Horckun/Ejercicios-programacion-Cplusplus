// test

#include <iostream>
#include <conio.h>

using namespace std;

struct estructura {
	int x;
}punteroa,*punterob;

int main() {
	punteroa.x = 8;
	
	punterob = &punteroa;
	
	cout << &punteroa << endl;
	cout << punterob << endl;
	cout << punterob->x << endl;		
	
	getch();
	return 0;
}
