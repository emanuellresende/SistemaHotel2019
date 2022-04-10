#ifndef produto_h
#define produto_h

typedef struct cadastro_Prod {
    int codigo;
    char descricao[100];
    int estoque;
    int estoque_minimo;
    int preco_custo;
    int preco_venda;
    char nome[100];

} cadastro_Prod;
cadastro_Prod *cadastro_produto;
cadastro_Prod cadastro_produto_dados;


int posicao_produto, verificar_produto;
// Contador do produto
int contador_produto;
// Variaveis Menu
int produto_Home, listar_produtos;
//
int codigo_cadastro_produto;
int mostrar_produtos;
int deletar_produtos;
int deletar_busca;

// Verifica os produtos
int VerificarProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador);
// Busca a posicao do produto
int PosicaoProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador);
// Atualiza os produtos
void atualizaProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao);
// Realiza o cadastro na struct principal
void CadastroProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int *contador);
// Mostra os produtos cadastrados
void PosicaoProduto_Quantidade(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, posicoes *posicao);
// Mostra todos os produtos pre cadastrados
void verProduto(cadastro_Prod *cadastro_produto, int contador);
// Mostra o Nome de todos os produtos cadastrados
void verProduto_nome(cadastro_Prod *cadastro_produto, int contador);
// Verifica se o produto com certo nome esta disponivel
int Verificar_Disponibilidade_Produto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao);
// Funcao para atualizar a venda do produto depois de comprar novos
void atualizaProduto_Venda(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao);
// verifica o novo preco de compra do produto depois de atualizalo
void atualizaProduto_Compra(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao);
// Retorna na struct posicao as posicoes que o hotel tem para receber segunda o filtro
int VerificarProduto_Quantidade(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador);

#endif