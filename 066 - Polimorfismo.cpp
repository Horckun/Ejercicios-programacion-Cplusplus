// Polimorfismo

// Librerías
#include <iostream>
#include <string.h>
using namespace std;

// Clases
class persona {
	// Por defecto es privado
	char nombre[20];
	int edad;
	
	public:
		persona(char *nom, int eda);
		virtual void mostrar();
};
class alumno : public persona {
	// Por defecto es privado
	int expediente;
	int nota_final;
	
	public:
		alumno(char *nom, int eda, int exp, int nota);
		void mostrar();
};
class profesor : public persona {
	// Por defecto es privado
	char asignatura[50];
	int sueldo;
	
	public:
		profesor(char *nom, int eda, char *asi, int sue);
		void mostrar();
};

// Función principal
int main() {
	// Título
	cout << "\t=======================" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t= Jerarqu" << char(161) << "a de clases =" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t=======================" << endl << endl;
	
	// Punteros a objetos
	persona *vector[1];
	
	// Crear objetos
	vector[0] = new alumno("Javi",29,8,10);
	vector[1] = new profesor("Horckun",30,"Programacion",1700);
	
	// Mostrar datos
	cout << "--> ALUMNO <--" << endl;
	cout << "--------------" << endl << endl;
	vector[0]->mostrar();
	
	cout << "--> PROFESOR <--" << endl;
	cout << "----------------" << endl << endl;
	vector[1]->mostrar();
	
	// Cierre
	cout << "Pulsa una tecla para terminar...";
	cin.get();
	return 0;
}

// Métodos
void persona::mostrar() {
	// Mostramos datos
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << " a" << char(164) << "os." << endl << endl;
}
void alumno::mostrar() {
	// Ejecutamos mostrar persona
	persona::mostrar();
	
	// Mostramos datos
	cout << "Expediente: " << expediente << endl;
	cout << "Nota final: " << nota_final << endl << endl;
}
void profesor::mostrar() {
	// Ejecutamos mostrar persona
	persona::mostrar();
	
	// Mostramos datos
	cout << "Asignatura: " << asignatura << endl;
	cout << "Sueldo: " << sueldo << " euros." << endl << endl;
}

// Declaraciones
persona::persona(char *nom, int eda) {
	strcpy(nombre, nom);
	edad = eda;
}
alumno::alumno(char *nom, int eda, int exp, int nota) : persona(nom, eda)  {
	expediente = exp;
	nota_final = nota;
}
profesor::profesor(char *nom, int eda, char *asi, int sue) : persona(nom, eda)  {
	strcpy(asignatura, asi);
	sueldo = sue;
}
