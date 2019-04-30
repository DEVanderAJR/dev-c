#include <iostream>
#include"lista.h"
//#include"LISTA_SEQUENCIAL_AGENDA"

using namespace std;

int digi=0;

void space(){
	printf("\n\n");}

int menu(){
    int escolha=0;
	system("cls");
	system("color A");
    printf("\t\t%c%c",201,187);
	//linha(37);
	printf("\n\t\t\xDB||||BEM VINDO A AGENDA ELETRONICA||||||\xDB\n\t\t",201,187);
	//linha(37);
	printf("%c%c",200,188);
    printf("\n\n\t\t~> Faca Sua Escolha :\n\n\t\%c Pressione .:. (1) INSERIR->\n\t%c Pressione .:. (2) EXCLUIR-> \n\t%c Pressione .:. (3) PESQUISAR-> \n\t%c Pressione .:. (4) ALTERAR-> \n\t%c Pressione .:. (5) Numer Primo?->\n\t%c Pressione .:. (6) Potencia Desejada->\n\t%c Pressione .:. (0) Para -> Exit <-\n",245,245,245,245,245,245,245);
	scanf_s("%d",&digi);
	return(digi);
}
	void main(){
		int geti=0;

		tlista list_t;
		titem indigent_t;


		inicializa(&list_t);
		
		do{
			geti=menu();
			
		switch(geti){
			case 1:
			system("cls");
			printf("Vamos inserir o contato:\n\n");
			cout<<"Nome"<<endl;
			cin>>indigent_t.nome;
			space();
			cout<<"Endereço:"<<endl;
			cin>>indigent_t.endereCo;
			space();
			cout<<"Telefone:"<<endl;
			cin>>indigent_t.telefone;
			space();
			cout<<"E-mail:"<<endl;
			cin>>indigent_t.email;}
			
	}while(geti!=0);
		system("pause");}

