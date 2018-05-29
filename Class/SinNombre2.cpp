// test

#include <iostream>
#include <conio.h>

using namespace std;

class nota {
	public:
		float notas(float x, float y, float z);
	private:
		float resultado;
};

float nota::notas(float x, float y, float z) {
	resultado = (x + y + z) / 3;
	
	return resultado;
}

int main() {
	nota notas;
	
	cout << notas.notas(5.2,8.4,2.1) << endl;
	
	getch();
	return 0;
}
