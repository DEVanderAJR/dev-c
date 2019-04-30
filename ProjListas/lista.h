//nesta biblioteca será inserido todos os protótipos para serem acessados.

# define MAZ 50

typedef int tchave;

struct logradouro{
	char complemento[10];
	char bairro[20];
	char cidade[20];
	char estado[20];
	unsigned int cep;
	unsigned int numer;
};

struct tlista{
	char nome[50];
	tchave chave;
	logradouro acesso;
	unsigned int rg;
	unsigned int cpf;
	unsigned int tel;
	unsigned int niver;
}editor;
struct tpilha{
	tlista lista[MAZ];
	int acess_topo;
}

int criar(tpilha *L);//inicializar uma lista
int vazia(tpilha L);//verificar se uma lista esta vazia
int cheia(tpilha L);//verificar se uma lista esta cheia
int tamanho(tpilha L);//obter tamanho de uma lista
int elemento(tpilha L, int pos, tchave *dado);//obter o i-ésimio elemento de uma lista
int posicao(tpilha L, tchave dado);//pesquisar um dado elemento, retornando a sua posição
int inserir(tpilha *L, int pos, tchave dado);//inserção de um elemento em uma determinada posição
int remover( tpilha *L, int po, tchave *dado);//remoção do elemento de uma determinada posição