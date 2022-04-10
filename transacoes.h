/* 
 * File:   transacoes.h
 * Author: v-ing
 *
 * Created on 13 de Novembro de 2019, 12:11
 */

#ifndef TRANSACOES_H
#define	TRANSACOES_H
// Struct do cadastro de transacoes

typedef struct criar_Transacao {
    int codigo_hospede;
    float deve_diaria;
    int reserva;
} criar_Transacao;
criar_Transacao *cadastro_transacao;
criar_Transacao cadastro_transacao_dados;

// Struct que cria um caixa

typedef struct criar_Caixa {
    float caixa;
    int dia, mes, ano;
    char tipo[100];
    float entrou;
    int dia_fim;
    int mes_fim;
    int ano_fim;

} criar_Caixa;
criar_Caixa *cadastro_caixa;
criar_Caixa cadastro_caixa_dados;

typedef struct criar_Conta {
    int codigo;
    float deve;
    char descricao[100];
    char compra[100];
    char fornecedor[100];
    int dia;
    int mes;
    int ano;
    int dia_fim;
    int mes_fim;
    int ano_fim;
} criar_Conta;
criar_Conta *cadastro_conta;
criar_Conta cadastro_conta_dados;

typedef struct criar_Controle {
    char tipo[100];
    float valor;

    char vendido[100];

} criar_Controle;
criar_Controle *cadastro_controle;
criar_Controle cadastro_controle_dados;

typedef struct criar_Receber {
    int dia;
    int mes;
    int ano;
    float valor;

} criar_Receber;
criar_Receber *cadastro_receber;
criar_Receber cadastro_receber_dados;

// Variaveis Utilizadas Para Transacoes
char linha[100];
 int nlinhas;
char nome_secundario[100];
char *variavel_auxiliar;
char *variavel_auxiliar_2;
int i, contadorinicial, contadorsecundario;
int verificar_recebimento;
int apagar;
int sub_menu_transacao;
int contador_caixa;
int contador_controle;
int contador_receber;
int contador_conta;
int menu_transacoes;
int confirmar_pagamento;
char tipo_diaria[100];
int Retorno_Hospede(criar_Agenda *cadastro_agenda, int posicao);
int posicao_hospede_transacao;
int quantidade_diaria_transacao;
int Diaria_Hospede(criar_Agenda *cadastro_agenda, int posicao);
int search_hospede;
int contador_checkin;
int verificar_reserva;
int verificar_pagamento;
int deletar_transacao;
char texto[] = "                              NOTA PROMISSORIA                       \n ";
char texto1[] = "Valor:   ";
char texto2[] = "\n No dia: __________ pagarei por meio dessa única VIA via de NOTA PROMISSORIA ao hotel , sou portador do CPF: ";
char texto3[] = "\n A quantia de: ";
char texto4[] = ", em moeda correnta nacional \n\n ";
char texto5[] = "Emitente \n ";
char texto6[] = "Nome:  ";
char texto7[] = "\n CPF:  ";
char texto8[] = "\n Assinatura:________________________________________________________ ";
char texto9[] = "\n\n dia:_________________ , de _______________, de _________________ ";
int menu_feedback;
int confirmar_feedback;
int mostrar_arquivo;
float total_pagar;
// Fim Variaveis

// Essa Funcao Busca a posicao em que esta o dado digitado da struct receber
int PosicaoReceber(criar_Receber *cadastro_receber, int data_entrada, int contador);
// Essa funcao Realiza o Cadastramento de Contas
void Cadastro_Conta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int *contador);
// Essa struct Realiza a Busca de um Hospede pela Posicao
int PosicaoHospede_Reserva_posicao(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador);
// Essa struct busca a posicao de um hospede recebendo o codigo de uma reserva pre digitada
int PosicaoHospede_Reserva_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador);
// Essa funcao Verifica o Valor da reserva que o Hospede pagou ou Colocou na Conta
int Diaria_Hospede_Valor(cadastro_categoria_acomodacao *cadastro_categoria, int posicao);
// Essa Funcao realiza o Cadastro de uma Transacao
void Cadastro_Transacao_Hospede(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int *contador);
// Realiza o Cadastramento do Caixa do Hotel Com Todos os Seus Dados acompanhando
void Cadastro_Caixa(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int *contador);
// Verifica se o codigo da reserva diitado e um codigo valido ja pre-cadastrado
int Verificar_Codigo_Transacao_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador);
// Busca a posicao do Hospede através do Numero de sua Reserva
int PosicaoHospede_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador);
// Realiza a atualizacao da transacao cujo codigo foi informado pelo operador
void atualizaTransacao(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador, int posicao);
// Realiza a verificacao se o codigo do Hospede digitado ja possui uma reserva
int VerificarHospede_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador);
// Verifica e a conta ja foi criada
int VerificarConta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador);
// Imprime na tela Todas as Contas
void verContas(criar_Conta *cadastro_conta, int contador);
// Localiza a posicao da conta pre-digitada pelo Operador
int PosicaoConta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador);
// Realiza o cadastramento do Controle de Caixa
void Cadastro_Controle(criar_Controle *cadastro_controle, criar_Controle *cadastro_controle_dados, int *contador);
// Realia o Cadastramento do que o Hotel tem para receber
void Cadastro_Receber(criar_Receber *cadastro_receber, criar_Receber *cadastro_receber_dados, int *contador);
// Mostra todos os dados processador pelo controle do Hotel
void verControle(criar_Controle *cadastro_controle, int contador);
// Mostra Todo oque o Hotel Ira Receber
void verReceber(criar_Receber *cadastro_receber, int contador);
// Verifica se a Posicao do Controle pre-digitada pelo operadores e valida
int VerificarControle(criar_Controle *cadastro_controle, criar_Controle *cadastro_controle_dados, int contador);
// Retorna a quantidade de acoes feita do contador do Controle
void PosicaoControle_Quantidade(criar_Controle *cadastro_controle, criar_Controle *cadastro_controle_dados, int contador, posicoes *posicao);
// verifica o codigo ja informado se e valido e retorna
int VerificarReceber(criar_Receber *cadastro_receber, criar_Receber *cadastro_receber_dados, int contador);
// Retorna na struct posicao as posicoes que o hotel tem para receber segunda o filtro
void PosicaoReceber_Quantidade(criar_Receber *cadastro_receber, criar_Receber *cadastro_receber_dados, int contador, posicoes *posicao);
// Verifica a quantidade de Contas cadastradas com aquele filtro
int VerificarContaz(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador);
// Mostra todo o Caixa do Hotel
void Exibir_Caixa(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int contador);
// Retorna na struct posicao as posicoes que o hotel tem para receber segunda o filtro
void PosicaoConta_QuantidadeVerificarConta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador, posicoes *posicao);
void PosicaoCaixa_QuantidadeVerificarConta(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int contador, posicoes *posicao);
// Retorna na struct posicao as posicoes que o hotel tem para receber segunda o filtro
int VerificarCaixas(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int contador);
// verifica se o caixa Existe
#endif	/* TRANSACOES_H */

