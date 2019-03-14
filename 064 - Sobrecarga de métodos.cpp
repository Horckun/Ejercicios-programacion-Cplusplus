// Sobrecarga de métodos

// Librerías
#include <iostream>
using namespace std;

// Clases
class sumar {
	public:
		int suma(int x, int y) {
			int resultado = x + y;
			return resultado;
		}
		int suma(int x, int y, int z) {
			int resultado = x + y + z;
			return resultado;
		}
		double suma(double x, double y)  {
			double resultado = x + y;
			return resultado;
		}
		double suma(double x, double y, double z)  {
			double resultado = x + y + z;
			return resultado;
		}
};

// Función principal
int main() {
	// Título
	cout << "\t=========================" << endl;
	cout << "\t=                       =" << endl;
	cout << "\t= Sobrecarga de m" << char(130) << "todos =" << endl;
	cout << "\t=                       =" << endl;
	cout << "\t=========================" << endl << endl;
	
	// Variable de clase
	sumar sumamos;
	
	// Ejecución de métodos mostrando en pantalla
	cout << sumamos.suma(2, 8) << endl;
	cout << sumamos.suma(2, 5, 8) << endl;
	cout << sumamos.suma(2.8, 8.2) << endl;
	cout << sumamos.suma(2.5, 5.8, 8.2) << endl << endl;
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
