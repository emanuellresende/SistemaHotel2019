#ifndef hospedes_h
#define hospedes_h

typedef struct posicoes {
    int posicaol;
} posicoes;
posicoes *posicao;


typedef struct criar_Hospede {
    // declara todas as variaveis do cadastro dos dados do hotel //
    char nome_social[100];
    char sexo[100];
    char estado_civil[100];
    float cpf;
    char endereco[100];
    float telefone;
    char email[100];
    int codigo;
    int dia;
    int mes;
    int ano;
    //
} criar_Hospede;
criar_Hospede *cadastro_hospede;
criar_Hospede cadastro_hospede_dados;
FILE *arquivo_hospede;
FILE *arquivo_exportacao;
char receber_nome[100];

// Variavel de procurar o hospede
int posicao_hospede, verificar_hospede;
// Contador do produto
int contador_hospede;
// Variaveis Menu
int hospede_Home, listar_hospede;
//

int codigo_cadastro_hospede, mostrar_hospede, deletar_hospede, deletar_busca_hospede;
int excluir;
int codigo_inicio;
int codigo_fim;
int codigo_posicao;
// verifica disponibilidade do codigo do hospede
int VerificarHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador);
// busca a posicao d hospede
int PosicaoHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador);
// realiza a atualizacao do hospede
void atualizaHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador, int posicao);
// Cadastra o Hospede
void CadastroHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int *contador);
// Mostra o Hospede
void verHospede(criar_Hospede *cadastro_hospede, int contador);
// Realiza a busca do hospede por nome
int PosicaoHospede_Nome(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador);
// Realiza a busca do hospede por sexo
int PosicaoHospede_Sexo(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador, int posicao_hospede);
void PosicaoHospede_Teste(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador, posicoes *posicao);
#endif
