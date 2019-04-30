#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>

#define MaxTam 10

int auxImprime=0;

typedef struct {
      int Chave;
     /* --- outros componentes --- */
} TipoItem;

typedef struct {
      TipoItem Item[MaxTam];
      int Frente, Tras;
} TipoFila;

//Inicialização da Fila
void FFVazia(TipoFila & Fila)
{
      Fila.Frente = 1;
      Fila.Tras = Fila.Frente;
}


//Verificando se Fila está vazia
int Vazia(TipoFila Fila)
{
      return (Fila.Frente == Fila.Tras);
}

//Inserir elementos na Fila: enfileirar
void Enfileira (TipoItem x, TipoFila & Fila)
{
        if (Fila.Tras % MaxTam + 1 == Fila.Frente){
               printf(" Erro: a fila esta cheia.\n");
               getch();
        }
        else
        { 
               Fila.Item[Fila.Tras - 1] = x;
               Fila.Tras = Fila.Tras % MaxTam + 1;
        }
}

//Remoção de elementos da Fila: desenfileirar
void Desenfileira (TipoFila & Fila, TipoItem & Item)
{
        if (Vazia(Fila)){
               printf("Erro: a fila esta vazia.\n");
               auxImprime = 1;
               getch();
        }
        else 
        { 
                Item = Fila.Item[Fila.Frente - 1];
                Fila.Frente = Fila.Frente % MaxTam + 1;
        }
}

//Mostrar
void Imprime(TipoFila Fila)
{
     int FrenteAux = Fila.Frente;
     printf ("\nITENS DA FILA\n\n");
     while(FrenteAux != Fila.Tras)
     {
          printf("   [%d] ==> %d\n", FrenteAux-1, Fila.Item[FrenteAux-1].Chave);
          FrenteAux = FrenteAux % MaxTam + 1;
     }     
} 


//Programa principal
int main(void)
{
  TipoFila TF;
  TipoItem TI;
  char escolha; 
  int i;
  
  FFVazia(TF);
  
  do
  {
    system("cls");
    printf (" Menu Principal \n");
    printf ("\n (1) - Insere um elemento na Fila");
    printf ("\n (2) - Remove um elemento da Fila");
    printf ("\n (3) - Imprime a Fila");
    printf ("\n (4) - Para SAIR\n");
    escolha = getch();
    switch (escolha)
    {
       case '1':
	       system("cls");
	       printf ("\nEntre com um numero: ");
           scanf ("%d", &TI.Chave);
           Enfileira(TI, TF);            
           break;
           
      case '2':
	       system("cls");
           Desenfileira(TF, TI);
           if(auxImprime==0)
               printf ("\nItem removido: %d \n", TI.Chave);
	       getch();
           break;

      case '3':
           system("cls");
           if(!Vazia(TF))
                Imprime(TF);
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
