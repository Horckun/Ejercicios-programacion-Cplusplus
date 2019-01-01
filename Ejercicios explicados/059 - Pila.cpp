// Pila

// Librerías
#include <iostream>
using namespace std;

// Estructuras
struct nodo {
	int numero;
	struct nodo *siguiente;
};

// Declaramos variable inicial
struct nodo *inicio = NULL;

// Prototipos
void mostrar(struct nodo *&p);
void insertar(struct nodo *&p);
void eliminar(struct nodo *&p);
void eliminarTodo(struct nodo *&p);

// Función principal
int main() {
	// Declaración variables
	int opcion;
	
	do {
		do {
			// Solicitamos opción
			cout << "\t--> PILA <--" << endl;
			cout << "\t============" << endl << endl;
			cout << "\t[1] - Mostrar pilas." << endl;
			cout << "\t[2] - Insertar pila." << endl;
			cout << "\t[3] - Eliminar pila." << endl;
			cout << "\t[4] - Eliminar todo." << endl << endl;
			cout << "Opci" << char(162) << "n: ";
			cin >> opcion;
			cout << endl;
		} while(opcion < 1 || opcion > 4);
		switch(opcion) {
			case 1:
				mostrar(inicio);
				break;
			case 2:
				insertar(inicio);
				break;
			case 3:
				eliminar(inicio);
				break;
			case 4:
				eliminarTodo(inicio);
				break;
			default:
				cout << "No se ha seleccionado ninguna opci" << char(162) << "n v" << char(160) << "lida." << endl << endl;
				break;
		}
			// Solicitamos opción
		cout << "\t--> Opci" << char(162) << "n <--" << endl;
		cout << "\t==============" << endl << endl;
		cout << "\t[1] - Continuar." << endl;
		cout << "\t[2] - Salir." << endl << endl;
		cout << "Opci" << char(162) << "n: ";
		cin >> opcion;
		cout << endl;
	} while(opcion == 1);
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
// Funciones secundarias
void mostrar(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *actual;
	
	// Actual coge el valor del puntero
	actual = p;
		
	cout << "\t--> MOSTRAR PILAS <--" << endl;
	cout << "\t=====================" << endl << endl;
	
	// Si el puntero contiene algún valor
	if(p != NULL) {
		// Mientras hayan números, se muestran
		while(actual != NULL) {
			cout << "- " << actual->numero << endl;
			actual = actual->siguiente;
		}
	} else {
		cout << "La lista est" << char(160) << " vac" << char(161) << "a." << endl << endl;
	}
}
void insertar(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *nuevoNodo;
	
	// Creamos estructura de nuevo nodo
	nuevoNodo = new struct nodo;
	
	// Solicitamos valor
		
	cout << "\t--> INSERTAR PILAS <--" << endl;
	cout << "\t======================" << endl << endl;
	cout << "Introduce un valor para el nuevo nodo: ";
	cin >> nuevoNodo->numero;
	cout << endl;
	
	// El valor siguiente del nuevo nodo coge el valor del puntero
	nuevoNodo->siguiente = p;	
	
	// El puntero coge es igual al nuevo nodo
	p = nuevoNodo;
}
void eliminar(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *actual;
	
	// Actual coge el valor del puntero
	actual = p;
	
	// Si el puntero contiene algún valor
	if(p != NULL) {
		// El puntero coge el valor siguiente
		p = actual->siguiente;
		// El valor siguiente de actual es nulo
		actual->siguiente = NULL;
		// Eliminamos actual
		delete actual;
		cout << "La lista se ha eliminado." << endl << endl;
	} else {
		cout << "La lista est" << char(160) << " vac" << char(161) << "a." << endl << endl;
	}
}
void eliminarTodo(struct nodo *&p) {
	// Creamos variable estructura borrar todo
	struct nodo *borrarTodo;
	
	// Mientras p contenga algún valor
	while(p != NULL) {
		// borrar todo coge el valor del puntero
		borrarTodo = p;
		// el siguiente valor de puntero coge el valor siguiente
		p = p->siguiente;
		// el siguiente valor de borrar todo coge un valor nulo
		borrarTodo->siguiente = NULL;
		// borramos todo
		delete borrarTodo;
		// decimos que se ha eliminado todo
		cout << "Se han eliminado todos los nodos" << endl << endl;
	}
}
