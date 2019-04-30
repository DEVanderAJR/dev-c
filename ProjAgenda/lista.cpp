#include <cstdlib>
#include <iostream>
#include "lista.h"

using namespace std;

void inicializa(tlista *lista){
     lista->primeiro=lista->ultimo=0;
}
     
void insere( titem x, tlista *lista){
     if (lista -> ultimo == MAX)
        cout<<"lista cheia";
     else{
          lista -> item[lista->ultimo] = x;
          lista->item[lista->ultimo].chave=lista->ultimo+1;
          lista->ultimo++;
     }
}
                        
int vazia(tlista *lista){
    return(lista->primeiro==lista->ultimo);
}

void imprime(tlista *lista){
     for( int i=0;i<lista->ultimo;i++){
          cout<< "cod: "<<lista->item[i].chave<<"\nnome: ";
          cout<<lista->item[i].nome<<"\ntelefone: ";
          cout<<lista->item[i].tel<<"\nendereco: ";
          cout<<lista->item[i].end<<"\nemail: ";
          cout<<lista->item[i].email<<"\n\n";
     }
}

void retira(int p, tlista *lista){
     if (p< lista->primeiro || p>=lista->ultimo)
        cout<<"erro: posição invalida ou lista vazia\n";
     else{
          for (int i=p; i<lista->ultimo;i++)
			lista ->item[i]=lista->item[i+1];
     }
     lista->ultimo --;
}

int pesquisacod(tlista *lista){
     int cod;
     titem r;
     cout<<"digite o codigo da pessoa procurada: ";
     cin>>cod;
     if(cod>lista->ultimo|| cod<lista->primeiro){
          cout<<"codigo nao existe\n ";
          return NULL;
     }else{
           for(int i=0;i<lista->ultimo;i++){
             if(cod==lista->item[i].chave){
                   cout<< "\n\ncod: "<<lista->item[i].chave<<"\nnome: ";
                   cout<<lista->item[i].nome<<"\ntelefone: ";
                   cout<<lista->item[i].tel<<"\nendereco: ";
                   cout<<lista->item[i].end<<"\nemail: ";
                   cout<<lista->item[i].email<<"\n\n";
                   cod=i;
             }
           }
           return cod;    
     }
}
