#ifndef acomodacoes_h
#define acomodacoes_h

typedef struct criar_Acomodacao {
    int codigo;
    char descricao[100];
    char facilidades[100];
    char categoria[100];

} criar_Acomodacao;

criar_Acomodacao *cadastro_acomodacao;
criar_Acomodacao cadastro_acomodacao_dados;
// Variavel de procurar a acodamacao e buscar posicao
int verificar_acomodacao;
// Contador da Acomodacao
int contador_acomodacao;
// Variaveis Menu
int acomodacao_Home, listar_acomodacao;
//
int codigo_cadastro_acomodacao, mostrar_acomodacao, deletar_acomodacao;
char nome_arquivo[100];

FILE *exportar_hospede;

// reservas

// Verifica se a acomodacao ja existe
int Verificar_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador);
// Busca a Posicao na struct que a acomodacao esta
int Posicao_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador);
// Realiza a atualizacao da acomodacao
void atualiza_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int posicao, int contador);
// Cadastra a acomodacao
void Cadastro_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int *contador);
// Mostra na tela todas as acomodacoes
void ver_acomodacao(criar_Acomodacao *cadastro_acomodacao, int contador);
// reservas
// Pesquisa acomodacao por facilidade
void pesquisar_facilidades(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador, int *contar_acomodacao);
// verifica se a posicao da categoria e valida
int Verificar_acomodacao_Categoria(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador);
int Verificar_acomodacao_Categoria_Quantidade(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador);
// Retorna na struct posicao as posicoes que o hotel tem para receber segunda o filtro
void PosicaoAcomodacao_Teste(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador, posicoes *posicao);
// Retorna na struct posicao as posicoes que o hotel tem para receber segunda o filtro
#endif
