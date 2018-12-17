// Implementación de una lista

// Librería
#include <iostream>
using namespace std;

// Estructuras
struct nodo {
	int numero;
	struct nodo *siguiente;
};

// Declaramos variable de estructura
struct nodo *principio = NULL;

// Prototipos
void insertar_principio(struct nodo *&p);
void insertar_final(struct nodo *&p);
void insertar_ordenado(struct nodo *&p);
void borrar(struct nodo *&p);
void buscar(struct nodo *&p);
void mostrar(struct nodo *&p);
void borrar_todo(struct nodo *&p);

// Función principal
int main() {
	/*cout << "--> INSERTAR AL PRINCIPIO <--" << endl << endl;
	insertar_principio(principio);
	cout << "--> INSERTAR AL FINAL <--" << endl << endl;
	insertar_final(principio);
	cout << "--> INSERTAR ORDENADO <--" << endl << endl;
	insertar_ordenado(principio);
	cout << "--> BORRAR <--" << endl << endl;
	borrar(principio);
	cout << "--> BUSCAR <--" << endl << endl;
	buscar(principio);
	cout << "--> MOSTRAR <--" << endl << endl;
	mostrar(principio);
	cout << "--> BORRAR TODO <--" << endl << endl;
	borrar_todo(principio);*/
	cout << "--> INSERTAR AL PRINCIPIO <--" << endl << endl;
	int i;
	for(i = 0; i < 5; i++) {
		insertar_ordenado(principio);
	}
	cout << "--> MOSTRAR <--" << endl << endl;
	mostrar(principio);
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
// Funciones secundarias
void insertar_principio(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *nuevo_nodo;
	// Creamos nuevo nodo
	nuevo_nodo = new struct nodo;
	
	// Solicitamos número
	cout << "Introduce un valor : ";
	cin >> nuevo_nodo->numero;
	cout << endl;
	
	// Insertamos el nuevo nodo al principio de la lista
	nuevo_nodo->siguiente = p;
	p = nuevo_nodo;
}
void insertar_final(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *nuevo_nodo;
	
	// Recorremos lista
	struct nodo *aux;
	
	// Creamos nuevo nodo
	nuevo_nodo = new struct nodo;
	
	// Solicitamos número
	cout << "Introduce un valor: ";
	cin >> nuevo_nodo->numero;
	cout << endl;
	
	// Insertamos el nuevo nodo al final de la lista
	nuevo_nodo->siguiente = NULL;
	if(p != NULL) {
		aux = p;
		while(aux->siguiente != NULL) {
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	} else {
		p = nuevo_nodo;
	}
}
void insertar_ordenado(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *nuevo_nodo;
	struct nodo *anterior;
	struct nodo *actual;
	
	// Creamos nuevo nodo
	nuevo_nodo = new struct nodo;
	
	// Solicitamos número
	cout << "Introduce un valor: ";
	cin >> nuevo_nodo->numero;
	cout << endl;
	
	// Insertamos el nuevo nodo al final de la lista
	actual = principio;
	
	// Avanzamos en lista
	while((actual != NULL) && (actual->numero < nuevo_nodo->numero)) {
		// Anterior es actual
		anterior = actual;
		// Actual es siguiente
		actual = actual->siguiente;
	}
	
	// Condicional
	if(actual == p) {
		nuevo_nodo->siguiente = p;
		p = nuevo_nodo;
	} else {
		anterior->siguiente = nuevo_nodo;
		nuevo_nodo->siguiente = actual;
	}
}
void borrar(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *anterior;
	struct nodo *actual;
	
	// Declaramos variable
	int numero;
	
	// Solicitamos número a eliminar
	cout << "Escriba un numero: ";
	cin >> numero;
	cout << endl;
	
	// Borramos nodo
	actual = p;
	while((actual != NULL) && (actual->numero != numero)) {
		anterior = actual;
		actual = actual->siguiente;
	}
	if(actual != NULL) {
		if(actual == p) {
			p = actual->siguiente;
			actual->siguiente = NULL;
			delete actual;
		} else {
			anterior->siguiente = actual->siguiente;
			actual->siguiente = NULL;
			delete actual;
		}
	}
}
void buscar(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *actual;
	
	// Declaramos variable
	int encontrado = 0;
	int numero;
	
	// Solicitamos búsqueda
	cout << "Escribe un numero: ";
	cin >> numero;
	
	// Buscamos nodo
	actual = p;
	while((actual != NULL) && (encontrado == 0)) {
		if(actual->numero == numero) {
			encontrado = 1;
		}
		actual = actual->siguiente;
	}
	
	// Resultado de búsqueda
	if(encontrado == 1) {
		cout << "El numero esta en la lista" << endl << endl;
	} else {
		cout << "El numero no se encuentra" << endl << endl;
	}
}
void mostrar(struct nodo *&p) {
	// Declaramos variable de estructura
	struct nodo *actual;
	
	// Actual apunta a p
	actual = p;
	
	// Comprobar p
	if(p == NULL) {
		cout << "La lista se encuentra vacia." << endl << endl;
	} else {
		// Recorremos lista
		while(actual != NULL) {
			cout << actual->numero << ", ";
			actual = actual->siguiente;
		}
	}
	cout << endl << endl;
}
void borrar_todo(struct nodo *&p) {
	// Nodo a borrar
	struct nodo *nodo_a_borrar;
	
	// Buscamos
	while(p != NULL) {
		// Apuntamos al primer nodo
		nodo_a_borrar = p;
		// Apuntamos al siguiente nodo
		p = p->siguiente;
		nodo_a_borrar->siguiente = NULL;
		delete nodo_a_borrar;
	}
}
