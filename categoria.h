#ifndef categoria_h
#define categoria_h

typedef struct cadastro_categoria_acomodacao {
    int codigo;
    char descricao[100];
    float valor;
    char facilidades[100];
    int quantidade_comportada;
    char nome[100];

} cadastro_categoria_acomodacao;

cadastro_categoria_acomodacao *cadastro_categoria;
cadastro_categoria_acomodacao cadastro_categoria_dados;
int posicao_categoria, verificar_categoria;
// Contador daCategoria
int contador_categoria;
int deletar_acomodacao_fim;
// Variaveis Menu
int categoria_Home, listar_categoria;
//int dele
int codigo_cadastro_categoria, mostrar_categoria, deletar_categoria, contar_ocupacao, contar_facilidade;

// Verifica a categoria se ja esta cadastrada
int Verificar_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador);
// Busca a posicao da categoria
int Posicao_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador);
// Realiza a atualiza da categoria
void atualiza_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int posicao, int contador);
// Realiza o Cadastro da categoria
void Cadastro_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int *contador);
// Mostra todas as categorias
void ver_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, int contador);
// verifica se o nome da categorias esta disponivel
int Verificar_Categoria_Nome(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador);
// Mostra os tipos da categoria
void ver_Categoria_tipo(cadastro_categoria_acomodacao *cadastro_categoria, int contador);
// Verifica se o tipo da categoria esta disponivel
int Verificar_Categoria_tipo(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador);
// busca a posicao do tipo da categoria
int Posicao_Categoria_Tipo(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador);
// pesquisa a quantidade de pessoas que cabem naquela categoria
void pesquisar_quantidade_pessoas(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador, int *contar_acomodacao);
#endif 
