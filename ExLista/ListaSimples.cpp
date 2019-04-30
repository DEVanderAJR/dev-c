#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MaxTam    10

int auxImprime = 0;

typedef struct {
    int Chave;
  /* outros componentes */
} TipoItem;


typedef struct {
  TipoItem Item[MaxTam];
  int Primeiro, Ultimo;
} TipoLista;

//Criação da Lista
void FLVazia(TipoLista & Lista)
{
  Lista.Primeiro = 1;
  Lista.Ultimo = Lista.Primeiro;
}  

//Verifica se Lista está vazia
int Vazia(TipoLista Lista)
{
  return (Lista.Primeiro == Lista.Ultimo);
}  

//Mostra itens da Lista
void Imprime(TipoLista Lista)
{
    int Aux;

    for(Aux=Lista.Primeiro-1; Aux<=Lista.Ultimo-2;     
         Aux++)
    {
         printf(" %d\n", Lista.Item[Aux].Chave);
    }
}

//Insere elementos na Lista no final
void Insere(TipoItem x, TipoLista & Lista)
{
   if (Lista.Ultimo > MaxTam) 
       printf("\nErro: Lista esta cheia\n");
   else { 
       Lista.Item[Lista.Ultimo - 1] = x;
       Lista.Ultimo++;
   }
}  

//Remove itens da Lista em qualquer posição
void Retira(int p, TipoLista & Lista, TipoItem & Item)
{
   int Aux;

   if (Vazia(Lista) || p >= Lista.Ultimo) 
   { 
      printf("\nErro: Posicao nao existe ou a lista esta vazia.\n");
      auxImprime=1;
      return;
   }
   Item = Lista.Item[p - 1];
   Lista.Ultimo--;
   for (Aux = p; Aux < Lista.Ultimo; Aux++)
       Lista.Item[Aux - 1] = Lista.Item[Aux];       
} 

//Programa principal
int main(void)
{
  TipoLista TL;
  TipoItem TI;
  char escolha; 
  int i;
  
  FLVazia(TL);
  
  do
  {
    system("cls");
    printf (" Menu Principal \n");
    printf ("\n (1) - Insere um elemento no final da Lista");
    printf ("\n (2) - Remove um elemento da Lista");
    printf ("\n (3) - Imprime a Lista");
    printf ("\n (4) - Para SAIR\n");
    escolha = getch();
    switch (escolha)
    {
       case '1':
	       system("cls");
	       printf ("\nEntre com um numero: ");
           scanf ("%d", &TI.Chave);
           Insere(TI, TL);            
           break;
           
      case '2':
	       system("cls");
           Retira(TL.Ultimo-2,TL, TI);
           if(auxImprime==0)
               printf ("\nItem removido: %d \n", TI.Chave);
	       getch();
           break;

      case '3':
           system("cls");
           if(!Vazia(TL))
                Imprime(TL);
           else
                printf("\nA Fila esta vazia!\n");
           getch(); 
	       break;

      case '4':
	       break;

      default :
           system("cls");
           printf ("\nOpcao incorreta. Reveja sua escolha.");
           getch();
    }
  } while (escolha!='4');    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
