typedef int tchave;


struct titem {
             tchave chave;
           tchave codigo;   // {Código do professor} 
                  char nome[40];//    {Nome do professor} 
                  char titulacao;    //{Titulação do professor} 
                  int horas;     // {Número de aulas/hora semanais} 
                  float salario;   // {Salário bruto} 
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
