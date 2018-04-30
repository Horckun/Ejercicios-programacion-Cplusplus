// test

#include <iostream>
#include <conio.h>

namespace elche {
	int cp;
}
namespace alicante {
	int cp = 2;
}

using namespace elche;

int main() {
	std::cout << cp << std::endl;
	std::cout << alicante::cp << std::endl;
	
	getch();
	return 0;
}
