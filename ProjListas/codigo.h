// implementa��o
#include <iostream.h>
#include "lista.h"


int criar(tpilha *L){//inicializar uma lista
	L->acess_topo=0;
}

	
int vazia(tpilha L){//verificar se uma lista esta vazia
	return (L.acess_topo==0);
}

int cheia(tpilha L);//verificar se uma lista esta cheia
int tamanho(tpilha L);//obter tamanho de uma lista
int elemento(tpilha L, int pos, tchave *dado);//obter o i-�simio elemento de uma lista
int posicao(tpilha L, tchave dado);//pesquisar um dado elemento, retornando a sua posi��o
int inserir(tpilha *L, int pos, tchave dado);//inser��o de um elemento em uma determinada posi��o
int remover(tpilha *L, int pos, tchave *dado);//remo��o do elemento de uma determinada posi��o