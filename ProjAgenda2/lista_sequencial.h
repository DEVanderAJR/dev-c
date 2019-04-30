#define Max 100
typedef int tchave;
//ESTRUTURAS
struct titem{
	tchave codig;
	char nome[40];
	char telefone[10];
	char endereço[50];
	char email[20];
};

struct tlista{
	titem item[Max];
int primeiro;
int ultimo;};

//PROTÓTIPOS
void inicializa (tlista *l);
int vazia (tlista *l);
void insere (titem x, tlista *l);
void retira (int p, tlista *l,titem*x);
//void imprime(tlista

