/* Exemplo de Alocação dinâmica de Memória - Escrever um program para o conjunto de númros inteiros( o nº 0 indica fim
de entradfa de dados e não deve ser considerado). Ao final , imprimir todos
os números lidos.*/

#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;

void step(){
	Sleep(500);
}
void stop(){
	system("Pause>>null");
}
void pass(int x){
	if(x==1){
		printf("\n");}
	if(x==2){
		printf("\n");
	}
}
struct elementar{
	int numer;
	elementar *ptr;
}*inicio,*aux;

void main(){
	static int xx;
	//elementar *inicio,*aux;//variáveis ponteiros(*),para controlar a alocação dinâmica na memória;
	cout<<"Digite o nº: [0->para exit]"<<endl;
	cin>>xx;
	
	inicio=NULL;//INICIANDO O PONTEIRO inicio com	NULL(vazio);	
	while(xx!=0){
		aux=inicio;//Se inicio é igual a NULL,NULL tambem será atribuido á variável aux;
		inicio=new(elementar);//(int*)malloc(sizeof(elementar));//Usando malloc para criar uma estrutura dinamicamente;
		//Também pode ser usada a função NEW, para criar, a estrutura dinâmica, e DELETE,para esvaziar a pilha de memória.(O mesmo que free(variavel(*));
		inicio->numer=xx;//Usando a variável numer dentro da estrutura elementar,para atribuí-la o valor int de xx;
		printf("Digite o nº:[0->para exit]");pass(1);
		scanf_s("%d",&xx);}
		aux=inicio;
		while(aux!=NULL){
			printf("%d",aux->ptr);pass(1);
			delete aux;
			aux=inicio;}
		stop();}