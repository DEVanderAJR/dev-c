#include <iostream>
#include "lista.h"
using namespace std;
void inicializa(tlista *l){
	l->primeiro=0;
	l->ultimo=0;
}

int vazia(tlista *list_t){
	if(list_t->primeiro==list_t->ultimo)
		return (1);
	else return(0);
}
void insere(titem x, tlista *list_t){
	if(list_t->ultimo==Max)
		printf("Erro:lista cheia\n");
	else{
		list_t->item[list_t->ultimo]=x;
		list_t->ultimo++;}
}
