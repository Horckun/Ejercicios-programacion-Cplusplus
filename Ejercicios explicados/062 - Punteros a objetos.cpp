// Punteros a objetos

// Librerías
#include <iostream>
using namespace std;

// Clases
class radio {
	private:
		int frecuencia;
		int volumen;
	public:
		void inicializar();
		void subir_volumen();
		void bajar_volumen();
		void subir_frecuencia();
		void bajar_frecuencia();
		void mostrar_volumen();
		void mostrar_frecuencia();
};

// Función principal
int main() {
	// Reservamos memoria
	radio *mi_radio = new radio;
	
	// Usar métodos
	mi_radio->inicializar();
	mi_radio->mostrar_frecuencia();
	mi_radio->mostrar_volumen();
	mi_radio->subir_frecuencia();
	mi_radio->subir_volumen();
	mi_radio->mostrar_frecuencia();
	mi_radio->mostrar_volumen();
	
	// Liberar memoria
	delete mi_radio;
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
// Funciones secundarias
void radio::inicializar() {
	// Valor inicial de los atributos volumen y frecuencia
	frecuencia = 100;
	volumen = 2;
}
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
