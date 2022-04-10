#ifndef fornecedores_h
#define fornecedores_h

typedef struct criar_Fornecedor {
    // declara todas as variaveis do cadastro dos dados do hotel //
    char nome_social[100];
    char razao_social[100];
    char inscricao_estadual[100];
    float cnpj;
    char endereco[100];
    float telefone;
    char email[100];
    int codigo;
    float frete;
    float imposto;
    float lucro;
    //
} criar_Fornecedor;
criar_Fornecedor *cadastro_fornecedor;
criar_Fornecedor cadastro_fornecedorl_dados;



// Variavel de procurar o Fornecedor e buscar posicao
int posicao_fornecedor, verificar_fornecedor;
// Contador do Fornecedor
int contador_fornecedor;
// Variaveis Menu
int fornecedor_Home, listar_fornecedor;
//
int codigo_cadastro_fornecedor, mostrar_fornecedor, deletar_fornecedor, deletar_busca_fornecedor;
// Verifica a posicao d fornecedor, realiza a busca da posicao, realiza a atalizacao, Cadastra o fornecedor, Mostra todos Fornecedores , e verifca disponibilidade
int VerificarFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador);
int PosicaoFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador);
void atualizaFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador, int posicao);
void CadastroFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int *contador);
void verFornecedor(criar_Fornecedor *cadastro_fornecedor, int contador);
int Verificar_Fornecedor_Codigo(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador);

#endif
