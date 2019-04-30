#include <stdio.h>
#include <stdlib.h>
#include "encadeada.h"


void pass()
{
     printf("\n");}
void inicializa(tlista *lista)                
{ 
     lista->primeiro= new tcelula;
     lista->ultimo=lista->primeiro;
     lista->primeiro->prox= NULL;
}

int vazia(tlista *lista)
{
    return(lista->primeiro==lista->ultimo);
}    

void insere(titem x, tlista *lista)
{
     lista->ultimo->prox = new tcelula;
     lista->ultimo = lista->ultimo->prox;
     lista->ultimo->item = x;
     lista->ultimo->prox = NULL;
}

void retira(tcelula *p, tlista *lista, titem *x)
{
     tcelula *q;
     
     if  ((vazia(lista)) || (p==NULL) || (p->prox==NULL))
        printf("Erro: lista vazia ou posicao invalida\n");
     else
     {
         q = p->prox;
         *x = q->item;
         p->prox = q->prox;
         if (p->prox==NULL)
            lista->ultimo = p;
         delete q;
     }
}    // retira 
     
void imprime(tlista *lista)
{
     tcelula *aux;
     
     aux = lista->primeiro->prox;
     while (aux != NULL)  {
           printf("%d ", aux->item.codigo);pass();
           printf("%s", aux->item.nome);pass();
           printf("%c", aux->item.titulacao);pass();
           printf("%d",aux->item.horas);pass();
           printf("0.2%fl",aux->item.salario);pass();
           aux = aux->prox;
     }   }     
