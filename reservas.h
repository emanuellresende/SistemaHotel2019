#ifndef reservas_h
#define reservas_h
// Struct para criar reserva

typedef struct criar_Reserva {
    int codigo;
    char descricao[100];
    char facilidades[100];
    char categoria[100];

} criar_Reserva;
criar_Reserva *cadastro_reserva;
criar_Reserva cadastro_reserva_dados;


//struct de agendamento




// variaveis da area de reserva
int menu_reservas;
int sub_menu_reservas;
int contador_reservas;
int verificar_reservas;
int confirmar_reserva;
int posicao_reserva;


// fim reservas






// Imprime os tipos da acomodacoes
void mostrar_acomodacao_tipo(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador);
// Realiza o cadastro da reserva
void Cadastro_reserva(criar_Acomodacao *cadastro_acomodacao, criar_Reserva *cadastro_reserva_dados, int *contador, int *posicao);
// Verifica a acomodacao
int Verificar_acomodacao_tipo(criar_Acomodacao *cadastro_acomodacao, criar_Reserva *cadastro_reserva_dados, int contador);
// Mostra a reserva
void ver_reserva(criar_Reserva *cadastro_reserva_dados, int contador);
// Busca a posicao reservada
int Posicao_Reserva(criar_Acomodacao *cadastro_acomodacao, criar_Reserva *cadastro_reserva_dados, int contador);
// verifica a reserva
int Verificar_Reserva(criar_Acomodacao *cadastro_acomodacao, criar_Reserva *cadastro_reserva_dados, int contador);
// realiza o cadastro final
void Cadastro_reserva_final(criar_Reserva *cadastro_reserva, criar_Reserva *cadastro_reserva_dados, int *contador);

// fim reservas
#endif