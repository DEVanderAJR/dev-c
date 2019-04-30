#define MAX 100

typedef int tchave;
struct titem{
       tchave chave;
       char nome[40];
       char tel[10];
       char end[50];
       char email[20];
};
       
struct tlista {
       titem item[MAX];
       int primeiro;//1 elemento.
       int ultimo;//ultimo vazio.
};
              
int vazia(tlista *lista);
void imprime(tlista *lista);
void inicializa(tlista *lista);
void insere( titem x, tlista *lista);
void retira(int p, tlista *lista);
int pesquisacod(tlista *lista);
