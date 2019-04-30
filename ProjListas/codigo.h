// implementação
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
int elemento(tpilha L, int pos, tchave *dado);//obter o i-ésimio elemento de uma lista
int posicao(tpilha L, tchave dado);//pesquisar um dado elemento, retornando a sua posição
int inserir(tpilha *L, int pos, tchave dado);//inserção de um elemento em uma determinada posição
int remover(tpilha *L, int pos, tchave *dado);//remoção do elemento de uma determinada posição