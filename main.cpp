#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	string caracter;
	Nodo *next;

}*lista, *auxiliar;

bool isEmpty(struct Nodo *lis) {
  bool flag = false;
  if (lis == NULL) {
    flag = true;
  }
  return flag;
}

void addNode(struct Nodo *lis, struct Nodo *aux, string c) {

		aux =(struct Nodo *) malloc(sizeof(struct Nodo));
		aux->next = lis;
		cin >> c;
		aux->caracter = c;
		lis = aux;

}

void mostrarLista(struct Nodo *lis, struct Nodo *aux) {
	aux = lis;
	printf("\n");
	while (lis->next != NULL){
		cout << aux->caracter;
		lis = lis->next;
	}
	lis = aux;

}

int main(void) {
    lista = (struct Nodo *) malloc(sizeof(struct Nodo));
	lista = NULL;
	string c = " ";
	printf("Ingrese caracteres:\nPara detenerse ingrese un '.'");
	while (c != "."){

		addNode(lista, auxiliar, c);
		mostrarLista(lista, auxiliar);

	}
	return 0;
}
