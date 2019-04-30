#include<stdlib.h>
#include<iostream>
#include "lista.h"

int menu();

using namespace std;

int main(){
    tlista lista;
    titem pessoa;
    int r,i;
    
    inicializa(&lista);
    r=menu();//criar função com menu e ela retorna um valor inteiro com a resposta.
    while (r!=0){
          fflush(stdin);
          switch (r){
                 system("cls");
                 
                 case 1: //insere;
                 system("cls");
                 fflush(stdin);
                 cout<<"digite os dados da pessoa\n\nnome: ";
                 gets(pessoa.nome);
                 cout<<"\ntelefone: ";
                 gets(pessoa.tel);
                 cout<<"\nendereco: ";
                 gets(pessoa.end);
                 cout<<"\nemail: ";
                 gets(pessoa.email);
                 fflush(stdin);
                 insere(pessoa, &lista);
                 cout<<"\ninserido com sucesso\n\n";
                 system("pause");
                 break;

                 case 2: //pesquisar;
                 system("cls");
                 pesquisacod(&lista);
                 system ("pause");
                 break;

                 case 3://listar todos.
                 system("cls");
                 imprime(&lista);
                 system("pause");
                 break;

                 case 4://excluir
                 system("cls");
                 int d;
                 i=pesquisacod(&lista);
                 cout<<"tem certeza que deseja excluir esta pessoa?\n1-sim\n2-nao\n";
                 cin>>d;
                 if (d==1)
                 retira(i, &lista);
                 cout<<"excluido com sucessso";
                 system("pause");
                 break;
          }
          r=menu();
    }  
    system("pause");
    }
    int menu(){
        int r;
        system("cls");
        cout<<"**********MENU**********\n\n1-inserir\n2-pesquisar\n3-listar todos\n4-excluir\n0-sair\n\ndigite a opcao desejada:  ";
     
        cin>>r;
    
        while (r<0 || r>4){
        system("cls");
        cout<<"opcao invalida, digite novamente.\n\n**********MENU**********\n\n1-inserir\n2-pesquisar\n3-listar todos\n4-excluir\n0-sair\n\ndigite a opcao desejada:  ";
        cin>>r;
        }
    return r;
}
