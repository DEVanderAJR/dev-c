typedef int tchave;


struct titem {
             tchave chave;
           tchave codigo;   // {C�digo do professor} 
                  char nome[40];//    {Nome do professor} 
                  char titulacao;    //{Titula��o do professor} 
                  int horas;     // {N�mero de aulas/hora semanais} 
                  float salario;   // {Sal�rio bruto} 
};

struct tcelula {
           titem item;
           tcelula *prox;
};

struct tlista {
           tcelula *primeiro;
           tcelula *ultimo;
};
               
void inicializa(tlista *lista);                

int vazia(tlista *lista);

void insere(titem x, tlista *lista);

void retira(tcelula *p, tlista *lista, titem *x);
     
void imprime(tlista *lista);
//void procura(titem x,tlista *lista);
