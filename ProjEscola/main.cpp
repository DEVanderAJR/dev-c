#include <iostream>
#include "encadeada.h"
using namespace std;

//void procura(tlista *lista,int x);
double calculo_salario(int horas, char titulacao);
/*void pass()
{
     printf("\n");}*/
       

int main(){
  int esc=-1, codig=0,cont=0;
   tlista lista;
  titem acess,item;
  tcelula prox;
  
 
   inicializa(&lista);
   
   do{system("cls");
     printf("Pressione o algorismo correspondente:\n\n\t(1)*Incluir professor\n\t(2)*Pesquisar dados de um professor\n\t(3)*Alterar título\n\t(4)*Alterar numero de horas\n\t(5)*Excluir professor\n\t(6)*Imprimir folha de Pgt\n\t(0)*sair\n");  system("pause>>null");
   
     scanf("%d",&esc);
   
   switch(esc){
   
              case 1:cont++;
                   fflush(stdin);
                   printf("Digite codigo:\n");
                   cin>>acess.codigo;
                   fflush(stdin);
                   printf("Digite seu Nome:\n");
                   cin>>acess.nome;
                   fflush(stdin);
                   printf("Titulo:\n");
                   cin>>acess.titulacao;
                   printf("\nDigite, Horas/expediente_Semanal:\n");
                   fflush(stdin);
                   cin>>acess.horas;
                   printf("Salario:\n");
                   acess.salario=calculo_salario(acess.horas,acess.titulacao);    
                   printf("0.2%fl",acess.salario);              
                   insere(acess,&lista);
                   printf("\n\n\n\tInserido com Sucess!\n\n\n");
                   system("pause>>null");
                   break;
                   case 3:
                        system("cls");
                        printf("Digite o codigo do professor:");
                        cin>>codig;
                        
                        
                        
                        tcelula *aux;
         // int i=0;
      for(int i=0;i<=cont;i++){
              if(lista.ultimo[i].prox->item.codigo==codig){
           printf("%d ", lista.primeiro[codig].item.codigo);//pass();
           printf("%s",lista.primeiro[codig].item.nome);//pass();
           printf("%c", lista.primeiro[codig].item.titulacao);//pass();
           printf("%d",lista.primeiro[codig].item.horas);//pass()
           printf("0.%fl",lista.primeiro[codig].item.salario);//pass();
           }system("pause>>null");
           //i++;
     }   break;
                        //procura(&lista,codig);
                   case 6:
                        imprime(&lista);
                        system("pause>>null");
                        break;
                   }
          
   }while(esc!=0);          
   
    return (0); 
    }
     
     double calculo_salario(int horas,char titulacao){
      double sa_bruto=0,sa_liquido=0;
           
            switch(titulacao){
                     case 'E':           
                sa_bruto=((horas * 20.40) * 4.5);
                   sa_liquido=((sa_bruto-(sa_bruto/100)*23.5));
                   return (sa_liquido);
                   break;
                   
                    case 'M':                     
                sa_bruto=((horas * 31.20) * 4.5);
                   sa_liquido=((sa_bruto-(sa_bruto/100)*23.5));
                   return (sa_liquido);
                   break; 
                                    
                  default:      
                sa_bruto=((horas * 42.20) * 4.5);
                   sa_liquido=((sa_bruto-(sa_bruto/100)*23.5));
                   return (sa_liquido);
                   break;
                   }
                   }

                   /*/Atividade 
                   implementar as funções de pilha encadeada:
                               
                               void imprime(tpilha *p);
                               que imprime os itens (chave) da pilha encadeada p 
                               int tamnho (tpilha *p);
                               que retorna o número de itens da pilha encadeada p
                               int acessa o topo ( tpilha *p, titem *x);
                               que retorna o se a pilha encadeada 
                               pestá vazia e, caso contrário, retorna 1, nesta situação, a função deve retornar
                               (indiretamenter) no parâmetro x o item que está no topo de p.*/
