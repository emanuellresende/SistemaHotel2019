#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct posicoes {
    int posicaol;
} posicoes;

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

void CadastroHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int *contador) {
    (*(cadastro_hospede + (*contador))).cpf = cadastro_hospede_dados->cpf;
    (*(cadastro_hospede + (*contador))).codigo = cadastro_hospede_dados->codigo;
    (*(cadastro_hospede + (*contador))).telefone = cadastro_hospede_dados->telefone;
    strcpy((*(cadastro_hospede + (*contador))).nome_social, cadastro_hospede_dados->nome_social);
    strcpy((*(cadastro_hospede + (*contador))).sexo, cadastro_hospede_dados->sexo);
    strcpy((*(cadastro_hospede + (*contador))).estado_civil, cadastro_hospede_dados->estado_civil);
    strcpy((*(cadastro_hospede + (*contador))).endereco, cadastro_hospede_dados->endereco);
    strcpy((*(cadastro_hospede + (*contador))).email, cadastro_hospede_dados->email);
    (*(cadastro_hospede + (*contador))).dia = cadastro_hospede_dados->dia;
    (*(cadastro_hospede + (*contador))).mes = cadastro_hospede_dados->mes;
    (*(cadastro_hospede + (*contador))).ano = cadastro_hospede_dados->ano;
    (*contador)++;
    FILE* arquivo_hospede = fopen("hospede.txt", "wb");
    fwrite(cadastro_hospede, sizeof (criar_Hospede), (*contador), arquivo_hospede);
    fflush(arquivo_hospede);
    fclose(arquivo_hospede);
    // Contador do Hotel
    FILE* contadores_hospede = fopen("contador_hospede.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_hospede);
    fflush(contadores_hospede);
    fclose(contadores_hospede);

}

int VerificarHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_hospede_dados->codigo == (*(cadastro_hospede + i)).codigo)
            verificacao = 1;
    }

    return verificacao;
}

int PosicaoHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_hospede_dados->codigo == (*(cadastro_hospede + i)).codigo) {
            posicao = i;
        }
    }
    return posicao;
}

void atualizaHospede(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador, int posicao) {
    cadastro_hospede[posicao].cpf = cadastro_hospede_dados->cpf;
    cadastro_hospede[posicao].telefone = cadastro_hospede_dados->telefone;
    cadastro_hospede[posicao].codigo = cadastro_hospede_dados->codigo;
    strcpy(cadastro_hospede[posicao].nome_social, cadastro_hospede_dados->nome_social);
    strcpy(cadastro_hospede[posicao].sexo, cadastro_hospede_dados->sexo);
    strcpy(cadastro_hospede[posicao].email, cadastro_hospede_dados->email);
    strcpy(cadastro_hospede[posicao].endereco, cadastro_hospede_dados->endereco);
    cadastro_hospede[posicao].dia = cadastro_hospede_dados->dia;
    cadastro_hospede[posicao].mes = cadastro_hospede_dados->mes;
    cadastro_hospede[posicao].ano = cadastro_hospede_dados->ano;
    FILE* arquivo_hospede = fopen("hospede.txt", "wb");
    fwrite(cadastro_hospede, sizeof (criar_Hospede), contador, arquivo_hospede);
    fclose(arquivo_hospede);


}

void verHospede(criar_Hospede *cadastro_hospede, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf("Nome Social:  %s \n", (cadastro_hospede + i)->nome_social);
        printf("Sexo: %s \n", (cadastro_hospede + i)->sexo);
        printf("Estado Civil: %s \n", (cadastro_hospede + i)->estado_civil);
        printf("CPF: %f \n", (cadastro_hospede + i)->cpf);
        printf("Endereco: %s \n", (cadastro_hospede + i)->endereco);
        printf("E-mail: %s \n", (cadastro_hospede + i)->email);
        printf("Data Nascimento: %d/%d/%d \n", (cadastro_hospede + i)->dia, (cadastro_hospede + i)->mes, (cadastro_hospede + i)->ano);
        printf("Codigo: %d \n\n", (cadastro_hospede + i)->codigo);
    }
}

int PosicaoHospede_Nome(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (strcmp(cadastro_hospede_dados->sexo, (*(cadastro_hospede + i)).sexo) == 0) {
            posicao = i;
        }
    }
    return posicao;
}

int PosicaoHospede_Sexo(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador, int posicao_hospede) {
    int posicao = -1, i, j = 0;
    for (i = 0; i <= contador; i++) {
        if (strcmp(cadastro_hospede_dados->sexo, (*(cadastro_hospede + (posicao_hospede + i))).sexo) == 0) {
            j++;
        }
    }
    return j;
}

void PosicaoHospede_Teste(criar_Hospede *cadastro_hospede, criar_Hospede *cadastro_hospede_dados, int contador, posicoes *posicao) {
    int i, j = 0;
    for (i = 0; i <= contador; i++) {
        if (strcmp(cadastro_hospede_dados->sexo, (*(cadastro_hospede + i)).sexo) == 0) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }

}