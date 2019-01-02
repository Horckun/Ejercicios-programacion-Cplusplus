// Colas

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
void insertar(nodo *&p);
void borrar(struct nodo *&p);

// Función principal
int main() {
	// Variables
	int opcion;
	
	// Menú principal
	do {
		do {
			cout << "\t--> LISTAS <--" << endl;
			cout << "\t==============" << endl;
			cout << "\t[1] - Mostrar cola." << endl;
			cout << "\t[2] - Insertar cola." << endl;
			cout << "\t[3] - Eliminar cola." << endl << endl;
			cout << "Opci" << char(162) << "n: ";
			cin >> opcion;
			cout << endl;
			switch(opcion) {
				case 1: {
					mostrar(inicio);
					break;
				}
				case 2: {
					insertar(inicio);
					break;
				}
				case 3: {
					borrar(inicio);
					break;
				}
				default: {
					cout << "No has seleccionado ninguna opci" << char(162) << "n v" << char(160) << "lida." << endl << endl;
					break;
				}
			}
		} while(opcion < 1 ||opcion > 3);
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
	// Declaramos variable de estructura
	struct nodo *actual;
	
	// Actual coge el valor del puntero
	actual = p;
		
	cout << "\t--> MOSTRAR COLA <--" << endl;
	cout << "\t====================" << endl << endl;
	
	// Si el puntero contiene algún valor
	if(p != NULL) {
		// Mientras hayan números, se muestran
		while(actual != NULL) {
			cout << "- " << actual->numero << endl;
			actual = actual->siguiente;
		}
	} else {
		cout << "La cola est" << char(160) << " vac" << char(161) << "a." << endl << endl;
	}
}
void insertar(nodo *&p) {
	// Creamos variable estructura nuevo nodo y auxiliar
	struct nodo *nuevo_nodo;
	struct nodo *aux;
	
	// Creamos nueva estructura para nuevo nodo
	nuevo_nodo = new struct nodo;
	
	// Solicitamos nuevo nodo
	cout << "\t--> INSERTAR COLA <--" << endl;
	cout << "\t=====================" << endl << endl;
	cout << "Introduce un valor: ";
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
void borrar(struct nodo *&p) {
	// Creamos variable estructura borrar todo
	struct nodo *borrar;
	
	// Mientras p contenga algún valor
	while(p != NULL) {
		// borrar todo coge el valor del puntero
		borrar = p;
		// el siguiente valor de puntero coge el valor siguiente
		p = p->siguiente;
		// el siguiente valor de borrar todo coge un valor nulo
		borrar->siguiente = NULL;
		// borramos todo
		delete borrar;
	}
	
	// decimos que se ha eliminado todo
	cout << "Se ha eliminado la cola" << endl << endl;
}
