/* Exemplo de Aloca��o din�mica de Mem�ria - Escrever um program para o conjunto de n�mros inteiros( o n� 0 indica fim
de entradfa de dados e n�o deve ser considerado). Ao final , imprimir todos
os n�meros lidos.*/

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
	//elementar *inicio,*aux;//vari�veis ponteiros(*),para controlar a aloca��o din�mica na mem�ria;
	cout<<"Digite o n�: [0->para exit]"<<endl;
	cin>>xx;
	
	inicio=NULL;//INICIANDO O PONTEIRO inicio com	NULL(vazio);	
	while(xx!=0){
		aux=inicio;//Se inicio � igual a NULL,NULL tambem ser� atribuido � vari�vel aux;
		inicio=new(elementar);//(int*)malloc(sizeof(elementar));//Usando malloc para criar uma estrutura dinamicamente;
		//Tamb�m pode ser usada a fun��o NEW, para criar, a estrutura din�mica, e DELETE,para esvaziar a pilha de mem�ria.(O mesmo que free(variavel(*));
		inicio->numer=xx;//Usando a vari�vel numer dentro da estrutura elementar,para atribu�-la o valor int de xx;
		printf("Digite o n�:[0->para exit]");pass(1);
		scanf_s("%d",&xx);}
		aux=inicio;
		while(aux!=NULL){
			printf("%d",aux->ptr);pass(1);
			delete aux;
			aux=inicio;}
		stop();}