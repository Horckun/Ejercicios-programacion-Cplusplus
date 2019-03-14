// Constructores y destructores

// Librerías
#include <iostream>
using namespace std;

// Clases
class radio {
	private:
		int frecuencia;
		int volumen;
	public:
		radio();
		radio(int fre, int vol);
		void subir_volumen();
		void bajar_volumen();
		void subir_frecuencia();
		void bajar_frecuencia();
		void mostrar_volumen();
		void mostrar_frecuencia();
		~radio();
};

// Constructores
radio::radio() {
	frecuencia = 0;
	volumen = 0;
}
radio::radio(int fre, int vol) {
	frecuencia = fre;
	volumen = vol;
}

// Destructores
radio::~radio() {
	cout << "\nLa radio se ha destru" << char(161) << "do" << endl;
}

// Función principal
int main() {
	// Declaramos variable de objeto
	radio mi_radio1;
	radio mi_radio2(80,20);
	
	// Mostramos radio 1
	cout << "\t--> RADIO 1 <--" << endl << endl;
	mi_radio1.mostrar_frecuencia();
	mi_radio1.mostrar_volumen();
	cout << endl;
	
	// Mostramos radio 2
	cout << "\t--> RADIO 2 <--" << endl << endl;
	mi_radio2.mostrar_frecuencia();
	mi_radio2.mostrar_volumen();
	cout << endl;
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
// Funciones secundarias
void radio::subir_volumen() {
	// Incrementa valor de atributo volumen;
	volumen++;
}
void radio::bajar_volumen() {
	// Decrementa valor de atributo volumen;
	volumen--;
}
void radio::subir_frecuencia() {
	// Incrementa valor de atributo frecuencia;
	frecuencia++;
}
void radio::bajar_frecuencia() {
	// Decrementa valor de atributo frecuencia;
	frecuencia--;
}
void radio::mostrar_volumen() {
	// Muestra atributo volumen
	cout << "\tVolumen: " << volumen << endl;
}
void radio::mostrar_frecuencia() {
	// Muestra atributo frecuencia
	cout << "\tFrecuencia: " << frecuencia << endl;
}
