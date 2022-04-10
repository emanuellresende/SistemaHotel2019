#ifndef hotel_h
#define hotel_h

// Struct do hotel
typedef struct criar_Hotel {
    // declara todas as variaveis do cadastro dos dados do hotel //
    char nome_social[100];
    char razao_social[100];
    char inscricao_estadual[100];
    float cnpj;
    char endereco[100];
    float telefone;
    char email[100];
    char nome_dono[100];
    float telefone_dono;
    float horario_chegar;
    float horario_sair;
    float lucro_produtos_vendidos;
    //
} criar_Hotel;
criar_Hotel *cadastro_hotel;
    criar_Hotel cadastro_hotel_dados;

 // Variavel de procurar o produtar e buscar posicao
    int posicao_hotel = 0, verificar_hotel = 0;
    // Contador do produto
    int contador_hotel;
    // Variaveis Menu
    int hotel_Home, listar_hoteis;
    //
    int codigo_cadastro_hotel, mostrar_hotel, deletar_hotel, deletar_busca_hotel;


// Declara as funcoes utilizadas
// Funcao de verificar hotel
int VerificarHotel(criar_Hotel *cadastro_hotel, criar_Hotel *cadastro_hotel_dados, int contador);
// Struct de buscar a posicao do hotel
int PosicaoHotel(criar_Hotel *cadastro_hotel, criar_Hotel *cadastro_hotel_dados, int contador);
// Atualiza o hotel
void atualizaHotel();
// Cadastra o Hotel
void CadastroHotel(criar_Hotel *cadastro_Hotel, criar_Hotel *cadastro_hotel_dados, int *contador);
// Verifica o Hotel
void verHotel(criar_Hotel *cadastro_hotel, int contador);





#endif
