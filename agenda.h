#ifndef agenda_h
#define agenda_h
// struct de agenda

typedef struct criar_Agenda {
    int dia;
    int mes;
    int ano;
    int dia_sair;
    int mes_sair;
    int ano_sair;
    int codigo;
    char categoria[100];
    int hospede;
    int diarias;
    int codigo_reserva;
} criar_Agenda;
criar_Agenda *cadastro_agenda;
criar_Agenda cadastro_agenda_dados;

// matriz
int verificar_agenda;
int verificar_agenda_sair;
int verificar_data;
int verificar_data_saida;
int contador_agenda;
int verificar_disponibilidade;
int verificar_reservas;
int menu_reservas;
int diferenca_Ano;
int confirmar_reserva;
int verificar_codigo_reserva;
int posicao_agenda;
int confirmar_deletar_reserva;
int deletar_agenda;
int pesquisar_por;
int data_entrada, data_saida;


// Retorna a diferneca dos anos
int diferenca_ano(criar_Agenda *cadastro_agenda_dados);
// Realiza o Cadasrament de uma agenda
void Cadastro_agenda(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int *contador);
// verifica se a data digitada e valida
int valida_data(criar_Agenda *cadastro_agenda_dados);
//verifica se a data de sair e valida
int valida_data_sair(criar_Agenda *cadastro_agenda_dados);
// Verifica a Disponibilidade das datas
int verificar_Datas(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador_agenda);
// Retorna em dias a diferenca entre as datas
const char *wd(int year, int month, int day); 
// Mostra todas as reservas
void imprimirReserva(criar_Agenda *cadastro_agenda, int contador);
// Mostra todas as acomodacoes
void mostrar_acomodacao_tipo(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador);
// verifica a reserva pelo codigo
int Verificar_Reserva(criar_Acomodacao *cadastro_acomodacao, criar_Agenda *cadastro_agenda_dados, int contador);
// verifica se o tipo da acomodacao esta correto
int Verificar_acomodacao_tipo(criar_Acomodacao *cadastro_acomodacao, criar_Agenda *cadastro_agenda_dados, int contador);
// verifica se o codigo da reserva ja nao esta pre cadastrado
int Verificar_Codigo_Reserva(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador);
// busca a posicao da reserva
int PosicaoReserva(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador);
// verificacao de dias
int PosicaoEncerrarReserva(criar_Agenda *cadastro_agenda, int data_entrada, int contador);
typedef struct _MinhaDataHora {
    int hora;
    int minuto;
    int segundo;
    int dia;
    int mes;
    int ano;
} MinhaDataHora;
MinhaDataHora d1, d2;
void defineDataHora(MinhaDataHora *pd, int hora, int minuto, int segundo, int dia, int mes, int ano);
void imprimeDataHora(MinhaDataHora d);
int ehBissexto(int ano);
int contaBissextos(int ano);
unsigned long long dataParaSegundos(MinhaDataHora d);
unsigned long long calculaDiferencaEmSegundos(MinhaDataHora d1, MinhaDataHora d2);
unsigned long long calculaDiferencaEmDias(MinhaDataHora d1, MinhaDataHora d2);



// fim verificar dias


// pesquisar por data
int PosicaoReserva_codigo(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador);
int PosicaoDiaria_Teste(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador, posicoes *posicao);
int Verificar_Diaria_Quantidade(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador);
int Verificar_Agenda_Quantidade(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador);
void verificar_Datas_pesquisa(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador_agenda);
void PosicaoAgenda_Teste(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador, posicoes *posicao);
// fim



#endif