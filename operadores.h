#ifndef operadores_h
#define operadores_h

typedef struct cadastro_Operadores {
    int codigo;
    char nome[100];
    int senha;
    char usuario[100];
    int permissao[5];

} cadastro_Operadores;
cadastro_Operadores *cadastro_operadores;
cadastro_Operadores cadastro_operadores_dados;
// Variavel de procurar o operador e buscar posicao
int posicao_operador, verificar_operador;
// Contador do operador
int contador_operador;
// Variaveis Menu
int operador_Home, listar_operador;
int operador_salvar;
//
int codigo_cadastro_operador, mostrar_operador, deletar_operador;

// Verifica se o operador esta disponivel
int Verificar_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int contador);
// Busca a posicao do operador
int Posicao_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int contador);
// Realiza a atualizacao do operador
void atualiza_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int posicao, int contador);
// Cadastra ooperador
void Cadastro_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int *contador);
// Mostra o operador
void ver_Operador(cadastro_Operadores *cadastro_operadores, int contador);
// Verifica o operador
int VerificarOperador_Login(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int contador);

#endif
