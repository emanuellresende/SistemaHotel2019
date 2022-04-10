#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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





// Cadastra os hoteis
void CadastroHotel(criar_Hotel *cadastro_hotel, criar_Hotel *cadastro_hotel_dados, int *contador) {
    (*(cadastro_hotel + (*contador))).cnpj = cadastro_hotel_dados->cnpj;
    (*(cadastro_hotel + (*contador))).horario_chegar = cadastro_hotel_dados->horario_chegar;
    (*(cadastro_hotel + (*contador))).horario_sair = cadastro_hotel_dados->horario_sair;
    (*(cadastro_hotel + (*contador))).lucro_produtos_vendidos = cadastro_hotel_dados->lucro_produtos_vendidos;
    (*(cadastro_hotel + (*contador))).telefone_dono = cadastro_hotel_dados->telefone_dono;
    (*(cadastro_hotel + (*contador))).telefone = cadastro_hotel_dados->telefone;
    strcpy((*(cadastro_hotel + (*contador))).nome_social, cadastro_hotel_dados->nome_social);
    strcpy((*(cadastro_hotel + (*contador))).razao_social, cadastro_hotel_dados->razao_social);
    strcpy((*(cadastro_hotel + (*contador))).inscricao_estadual, cadastro_hotel_dados->inscricao_estadual);
    strcpy((*(cadastro_hotel + (*contador))).endereco, cadastro_hotel_dados->endereco);
    strcpy((*(cadastro_hotel + (*contador))).nome_dono, cadastro_hotel_dados->nome_dono);
    strcpy((*(cadastro_hotel + (*contador))).email, cadastro_hotel_dados->email);
    (*contador)++;
    FILE* arquivo_hotel = fopen("hotel.txt", "wb");
    fwrite(cadastro_hotel, sizeof(criar_Hotel), (*contador), arquivo_hotel);
    fflush(arquivo_hotel);
    fclose(arquivo_hotel);
    
    FILE* contadores_hotel = fopen("contador.txt", "wb");
    fwrite(contador, sizeof(int), 1, contadores_hotel);
    fflush(contadores_hotel);
    fclose(contadores_hotel);

}
// Verifica os hoteis
int VerificarHotel(criar_Hotel *cadastro_hotel, criar_Hotel *cadastro_hotel_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_hotel_dados->nome_social, (*(cadastro_hotel + i)).nome_social) == 0)
            verificacao = 1;
    }

    return verificacao;
}
// Busca a posicao do vetor do hotel
int PosicaoHotel(criar_Hotel *cadastro_hotel, criar_Hotel *cadastro_hotel_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (strcmp(cadastro_hotel_dados->nome_social, (*(cadastro_hotel + i)).nome_social) == 0)
            posicao = i;
    }

    return posicao;
}
// Atualiza o hotel
void atualizaHotel(criar_Hotel *cadastro_hotel, criar_Hotel *cadastro_hotel_dados, int contador, int posicao) {
    cadastro_hotel[posicao].cnpj = cadastro_hotel_dados->cnpj;
    cadastro_hotel[posicao].telefone = cadastro_hotel_dados->telefone;
    cadastro_hotel[posicao].telefone_dono = cadastro_hotel_dados->telefone_dono;
    cadastro_hotel[posicao].horario_chegar = cadastro_hotel_dados->horario_chegar;
    cadastro_hotel[posicao].horario_sair = cadastro_hotel_dados->horario_sair;
    cadastro_hotel[posicao].lucro_produtos_vendidos = cadastro_hotel_dados->lucro_produtos_vendidos;
    strcpy(cadastro_hotel[posicao].nome_social, cadastro_hotel_dados->nome_social);
    strcpy(cadastro_hotel[posicao].razao_social, cadastro_hotel_dados->razao_social);
    strcpy(cadastro_hotel[posicao].email, cadastro_hotel_dados->email);
    strcpy(cadastro_hotel[posicao].nome_dono, cadastro_hotel_dados->nome_dono);
    strcpy(cadastro_hotel[posicao].endereco, cadastro_hotel_dados->endereco);
    FILE* arquivo_hotel = fopen("hotel.txt", "wb");
    fwrite(cadastro_hotel, sizeof(criar_Hotel), contador, arquivo_hotel);
    fclose(arquivo_hotel);



}
// Mostra os hoteis

void verHotel(criar_Hotel *cadastro_hotel, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf(" ------------------------------------------------ \n");
        printf("Nome Social:  %s \n", (cadastro_hotel + i)->nome_social);
        printf("Razao Social: %s \n", (cadastro_hotel + i)->razao_social);
        printf("Inscricao Estadual: %s \n", (cadastro_hotel + i)->inscricao_estadual);
        printf("CNPJ: %f \n", (cadastro_hotel + i)->cnpj);
        printf("Endereco: %s \n", (cadastro_hotel + i)->endereco);
        printf("Nome dono: %s \n", (cadastro_hotel + i)->nome_dono);
        printf("Telefone Dono: %f \n", (cadastro_hotel + i)->telefone_dono);
        printf("E-mail: %s \n", (cadastro_hotel + i)->email);
        printf("Horario Check-in: %f \n", (cadastro_hotel + i)->horario_chegar);
        printf("Horario Check-out: %f \n", (cadastro_hotel + i)->horario_sair);
        printf("Lucro Produtos Vendidos: %f \n", (cadastro_hotel + i)->lucro_produtos_vendidos);
        printf("Endereco: %s \n\n", (cadastro_hotel + i)->endereco);
        printf(" ------------------------------------------------ \n\n");
    }
}
void ler_hotel(criar_Hotel *cadastro_hotel, int *contador_hotel){
(*contador_hotel) = 0;
    FILE* contadores_hotel = fopen("contador.txt", "rb");
    if (contadores_hotel != NULL) {
        fread(&contador_hotel, sizeof (int), 1, contadores_hotel);
        fclose(contadores_hotel);
    }
    fclose(contadores_hotel);

    FILE* arquivo_hotel = fopen("hotel.txt", "rb");
    if (arquivo_hotel != NULL) {
        cadastro_hotel = realloc(cadastro_hotel, ((*(contador_hotel)) + 2) * sizeof (criar_Hotel));
        do {
            fread(cadastro_hotel, sizeof (criar_Hotel), (*contador_hotel), arquivo_hotel);

        } while (!feof(arquivo_hotel));


    }
    fclose(arquivo_hotel);
    // Fim Hotel



}

