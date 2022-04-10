#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hospede.h"

typedef struct criar_Acomodacao {
    int codigo;
    char descricao[100];
    char facilidades[100];
    char categoria[100];



} criar_Acomodacao;

void Cadastro_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int *contador) {
    (*(cadastro_acomodacao + (*contador))).codigo = cadastro_acomodacao_dados->codigo;
    strcpy((*(cadastro_acomodacao + (*contador))).categoria, cadastro_acomodacao_dados->categoria);
    strcpy((*(cadastro_acomodacao + (*contador))).facilidades, cadastro_acomodacao_dados->facilidades);
    strcpy((*(cadastro_acomodacao + (*contador))).descricao, cadastro_acomodacao_dados->descricao);

    (*contador)++;
    FILE* arquivo_acomodacao = fopen("acomodacao.txt", "wb");
    fwrite(cadastro_acomodacao, sizeof (criar_Acomodacao), (*contador), arquivo_acomodacao);
    fflush(arquivo_acomodacao);
    fclose(arquivo_acomodacao);
    // Contador do Hotel
    FILE* contadores_acomodacao = fopen("contador_acomodacao.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_acomodacao);
    fflush(contadores_acomodacao);
    fclose(contadores_acomodacao);

}

int Verificar_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_acomodacao_dados->codigo == (*(cadastro_acomodacao + i)).codigo) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int Posicao_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_acomodacao_dados->codigo == (*(cadastro_acomodacao + i)).codigo) {
            posicao = i;
        }
    }
    return posicao;
}

void atualiza_acomodacao(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int posicao, int contador) {

    cadastro_acomodacao[posicao].codigo = cadastro_acomodacao_dados->codigo;
    strcpy(cadastro_acomodacao[posicao].categoria, cadastro_acomodacao_dados->categoria);
    strcpy(cadastro_acomodacao[posicao].facilidades, cadastro_acomodacao_dados->facilidades);
    strcpy(cadastro_acomodacao[posicao].descricao, cadastro_acomodacao_dados->descricao);
    FILE* arquivo_acomodacao = fopen("acomodacao.txt", "wb");
    fwrite(cadastro_acomodacao, sizeof (criar_Acomodacao), contador, arquivo_acomodacao);
    fclose(arquivo_acomodacao);
}

void ver_acomodacao(criar_Acomodacao *cadastro_acomodacao, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf(" Codigo:%d \n", (cadastro_acomodacao + i)->codigo);
        printf("Categoria: %s \n", (cadastro_acomodacao + i)->categoria);
        printf("Facilidades: %s \n", (cadastro_acomodacao + i)->facilidades);
        printf("Descricao: %s \n", (cadastro_acomodacao + i)->descricao);
    }

}

// realiza a procura das facilidades

void pesquisar_facilidades(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador, int *contar_acomodacao) {
    (*contar_acomodacao) = 0;
    int i;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_acomodacao_dados->facilidades, (cadastro_acomodacao + i)->facilidades) == 0) {
            printf(" Codigo:%d \n", (cadastro_acomodacao + i)->codigo);
            printf(" Categoria: %s \n", (cadastro_acomodacao + i)->categoria);
            printf("Facilidades: %s \n", (cadastro_acomodacao + i)->facilidades);
            printf("Descricao: %s \n", (cadastro_acomodacao + i)->descricao);
            (*contar_acomodacao) = 1;
        }

    }

}


// fim facilidades
int Verificar_acomodacao_Categoria(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_acomodacao_dados->categoria, (*(cadastro_acomodacao + i)).categoria)==0) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int Verificar_acomodacao_Categoria_Quantidade(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_acomodacao_dados->categoria, (*(cadastro_acomodacao + i)).categoria)==0) {
            verificacao++;
        }
    }
    return verificacao;
}

void PosicaoAcomodacao_Teste(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador, posicoes *posicao) {
    int  i,  j = 0;
    for (i = 0; i <= contador; i++) {
        if (strcmp(cadastro_acomodacao_dados->categoria, (*(cadastro_acomodacao + i)).categoria) == 0) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }
 
}








