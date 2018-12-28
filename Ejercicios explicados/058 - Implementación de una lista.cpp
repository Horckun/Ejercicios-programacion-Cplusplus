// Lista

// Librerías
#include <iostream>
using namespace std;

// Estructura
struct nodo {
	int numero;
	struct nodo *siguiente;
};

// Vaciamos lista al inicio
struct nodo *inicio = NULL;

// Prototipos
void mostrar(nodo *&p);
void insertarInicio(nodo *&p);
void insertarFinal(nodo *&p);
void insertarOrdenado(nodo *&p);
void borrar(struct nodo *&p);
void buscar(struct nodo *&p);
void borrarTodo(struct nodo *&p);

// Función principal
int main() {
	// Variables
	int opcion;
	
	// Menú principal
	do {
		do {
			cout << "\t--> LISTAS <--" << endl;
			cout << "\t==============" << endl;
			cout << "\t[1] - Mostrar lista." << endl;
			cout << "\t[2] - Insertar nodo al inicio." << endl;
			cout << "\t[3] - Insertar nodo al final." << endl;
			cout << "\t[4] - Insertar nodo ordenado." << endl;
			cout << "\t[5] - Eliminar nodo." << endl;
			cout << "\t[6] - Buscar nodo." << endl;
			cout << "\t[7] - Borrar todo." << endl << endl;
			cout << "Opci" << char(162) << "n: ";
			cin >> opcion;
			cout << endl;
			switch(opcion) {
				case 1: {
					mostrar(inicio);
					break;
				}
				case 2: {
					insertarInicio(inicio);
					break;
				}
				case 3: {
					insertarFinal(inicio);
					break;
				}
				case 4: {
					insertarOrdenado(inicio);
					break;
				}
				case 5: {
					borrar(inicio);
					break;
				}
				case 6: {
					buscar(inicio);
					break;
				}
				case 7: {
					borrarTodo(inicio);
					break;
				}
				default: {
					cout << "No has seleccionado ninguna opci" << char(162) << "n v" << char(160) << "lida." << endl << endl;
					break;
				}
			}
		} while(opcion < 1 ||opcion > 7);
		cout << "\t--> CONTINUAR O SALIR <--" << endl;
		cout << "\t=========================" << endl;
		cout << "\t[1] - Continuar." << endl;
		cout << "\t[2] - Salir." << endl << endl;
		cout << "Opci" << char(162) << "n: ";
		cin >> opcion;
		cout << endl;
	} while(opcion == 1);
	
	// Cierre
	cout << "Pulsa una tecla para terminar...";
	cin.get();
	return 0;
}
// Funciones secundarias
void mostrar(nodo *&p) {
	// Creamos variable estructura actual
	struct nodo *actual;
	
	// Actual pasa al puntero
	actual = p;
	
	// Comprobamos lista
	if(p != NULL) {
		cout << "La lista no est" << char(160) << " vac" << char(161) << "a." << endl << endl;
		// Mientras hayan números, se muestran
		while(actual != NULL) {
			cout << "- " << actual->numero << endl;
			actual = actual->siguiente;
		}
		cout << endl;
	} else {
		cout << "La lista est" << char(160) << " vac" << char(161) << "a." << endl << endl;
	}
}
void insertarInicio(nodo *&p) {
	// Creamos variable estructura nuevo nodo
	struct nodo *nuevo_nodo;
	
	// Creamos estructura de nuevo nodo
	nuevo_nodo = new struct nodo;
	
	// Solicitamos nuevo nodo
	cout << "Introduce un nuevo valor: ";
	cin >> nuevo_nodo->numero;
	cout << endl;
	
	// Apuntamos al siguiente valor
	nuevo_nodo->siguiente = p;
	p = nuevo_nodo;
}
void insertarFinal(nodo *&p) {
	// Creamos variable estructura nuevo nodo y auxiliar
	struct nodo *nuevo_nodo;
	struct nodo *aux;
	
	// Creamos nueva estructura para nuevo nodo
	nuevo_nodo = new struct nodo;
	
	// Solicitamos nuevo nodo
	cout << "Introduce un valor final: ";
	cin >> nuevo_nodo->numero;
	cout << endl;
	
	// Damos valor nulo a nuevo nodo siguiente
	nuevo_nodo->siguiente = NULL;
	
	// Comprobamos si hay valor
	if(p != NULL) {
		// Aux coge el valor del puntero
		aux = p;
		// Mientras auxiliar siguiente siga teniendo un valor
		while(aux->siguiente != NULL) {
			// Pasamos al siguiente hasta encontrar el último lugar para posicionar el valor
			aux = aux->siguiente;
		}
		// auxiliar siguiente coge el valor del nuevo nodo
		aux->siguiente = nuevo_nodo;
	} else {
		// Si el puntero tiene valor nulo, el puntero coge el valor del nuevo nodo
		p = nuevo_nodo;
	}
}
void insertarOrdenado(nodo *&p) {
	// Creamos variable estructura nuevo nodo, actual y anterior
	struct nodo *nuevoNodo;
	struct nodo *actual;
	struct nodo *anterior;
	
	// Creamos nueva estructura para nuevo nodo
	nuevoNodo = new struct nodo;
	
	// Solicitamos nuevo nodo
	cout << "Introduce un valor: ";
	cin >> nuevoNodo->numero;
	cout << endl;
	
	// Damos valor inicial al actual nodo
	actual = inicio;
	
	// Mientras que actual contenga un valor y sea menor su número que el número del nuevo nodo
	while((actual != NULL) && (actual->numero < nuevoNodo->numero)) {
		// Anterior coge el valor del nuevo nodo
		anterior = actual;
		// Actual coge el valor del valor siguiente actual
		actual = actual->siguiente;
	}
	
	// Si actual es igual al puntero
	if(actual == p) {
		// El siguiente valor del nuevo nodo coge el valor del puntero
		nuevoNodo->siguiente = p;
		// El puntero coge el valor del nuevo nodo
		p = nuevoNodo;
	} else {
		// Sino, el valor siguiente del anterior coge el nuevo nodo
		anterior->siguiente = nuevoNodo;
		// El siguiente valor del nuevo nodo coge el valor del actual
		nuevoNodo->siguiente = actual;
	}
}
void borrar(struct nodo *&p) {
	// Creamos variable estructura actual y anterior
	struct nodo *actual;
	struct nodo *anterior;
	
	// Declaramos variable
	int numero;
	
	// Solicitamos número a eliminar
	cout << "Escriba un n" << char(163) << "mero a borrar: ";
	cin >> numero;
	cout << endl;
	
	// Actual coge el valor del puntero
	actual = p;
	
	// Mientras que actual tenga un valor y el nçumero de actual sea diferente del número
	while((actual != NULL) && (actual->numero != numero)) {
		// anterior coge el valor actual
		anterior = actual;
		// actual coge el valor siguiente de actual
		actual = actual->siguiente;
	}
	
	// Si actual contiene algún valor
	if(actual != NULL) {
		// si actual es igual al puntero
		if(actual == p) {
			// p coge el valor siguiente de actual
			p = actual->siguiente;
			// el valor siguiente de actual es nulo
			actual->siguiente = NULL;
			// se elimina actual
			delete actual;
		} else {
			// el valor siguiente de anterir coge el valor siguiente de actal
			anterior->siguiente = actual->siguiente;
			// el valor siguiente de actual es nulo
			actual->siguiente = NULL;
			// se elimina actual
			delete actual;
		}
	}
}
void buscar(struct nodo *&p) {
	// Creamos variable estructura actual
	struct nodo *actual;
	
	// Declaramos variable
	int numero;
	int encontrado = 0;
	
	// Solicitamos número a buscar
	cout << "Escriba un n" << char(163) << "mero a buscar: ";
	cin >> numero;
	cout << endl;
	
	// Actual coge el valor de p
	actual = p;
	
	// Mientras actual contenga un valor y encontrado sea igual a 0
	while((actual != NULL) && (encontrado == 0)) {
		// si el número actual es igual al número
		if(actual->numero == numero) {
			// encontrado tendrá valor 1
			encontrado = 1;
		}
		// actual coge el valor siguiente de actual
		actual = actual->siguiente;
	}
	
	// Si encontrado es igual a 1
	if(encontrado == 1) {
		// Se ha encontrado
		cout << "El n" << char(163) << "mero est" << char(160) << " en la lista" << endl << endl;
	} else {
		// Sino, no se ha encontrado
		cout << "El n" << char(163) << "mero no se encuentra" << endl << endl;
	}
}
void borrarTodo(struct nodo *&p) {
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
