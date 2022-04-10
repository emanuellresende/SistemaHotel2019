#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro_Operadores {
    int codigo;
    char nome[100];
    int senha;
    char usuario[100];
    int permissao[5];
} cadastro_Operadores;
cadastro_Operadores *cadastro_operadores;
cadastro_Operadores cadastro_operadores_dados;

void Cadastro_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int *contador) {
    (*(cadastro_operadores + (*contador))).codigo = cadastro_operadores_dados->codigo;
    (*(cadastro_operadores + (*contador))).senha = cadastro_operadores_dados->senha;
    (*(cadastro_operadores + (*contador))).permissao[0] = cadastro_operadores_dados->permissao[0];
    (*(cadastro_operadores + (*contador))).permissao[1] = cadastro_operadores_dados->permissao[1];
    (*(cadastro_operadores + (*contador))).permissao[2] = cadastro_operadores_dados->permissao[2];
    (*(cadastro_operadores + (*contador))).permissao[3] = cadastro_operadores_dados->permissao[3];
    (*(cadastro_operadores + (*contador))).permissao[4] = cadastro_operadores_dados->permissao[4];
    (*(cadastro_operadores + (*contador))).permissao[5] = cadastro_operadores_dados->permissao[5];
    strcpy((*(cadastro_operadores + (*contador))).usuario, cadastro_operadores_dados->usuario);
    strcpy((*(cadastro_operadores + (*contador))).nome, cadastro_operadores_dados->nome);
    (*contador)++;
    FILE* arquivo_operador = fopen("operador.txt", "wb");
    fwrite(cadastro_operadores, sizeof (cadastro_Operadores), (*contador), arquivo_operador);
    fflush(arquivo_operador);
    fclose(arquivo_operador);
    // Contador do Hotel
    FILE* contadores_operador = fopen("contador_operador.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_operador);
    fflush(contadores_operador);
    fclose(contadores_operador);

}

int Verificar_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_operadores_dados->codigo == (*(cadastro_operadores + i)).codigo) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int Posicao_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_operadores_dados->codigo == (*(cadastro_operadores + i)).codigo) {
            posicao = i;
        }
    }
    return posicao;
}

void atualiza_Operador(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int posicao, int contador) {

    cadastro_operadores[posicao].codigo = cadastro_operadores_dados->codigo;
    cadastro_operadores[posicao].permissao[0] = cadastro_operadores_dados->permissao[0];
    cadastro_operadores[posicao].permissao[1] = cadastro_operadores_dados->permissao[1];
    cadastro_operadores[posicao].permissao[2] = cadastro_operadores_dados->permissao[2];
    cadastro_operadores[posicao].permissao[3] = cadastro_operadores_dados->permissao[3];
    cadastro_operadores[posicao].permissao[4] = cadastro_operadores_dados->permissao[4];
    cadastro_operadores[posicao].permissao[5] = cadastro_operadores_dados->permissao[5];
    cadastro_operadores[posicao].senha = cadastro_operadores_dados->senha;
    strcpy(cadastro_operadores[posicao].usuario, cadastro_operadores_dados->usuario);
    strcpy(cadastro_operadores[posicao].nome, cadastro_operadores_dados->nome);
    FILE* arquivo_operador = fopen("operador.txt", "wb");
    fwrite(cadastro_operadores, sizeof (cadastro_Operadores), contador, arquivo_operador);
    fclose(arquivo_operador);
}

void ver_Operador(cadastro_Operadores *cadastro_operadores, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf(" ------------------------------------------------ \n");
        printf("Codigo:%d \n", (cadastro_operadores + i)->codigo);
        printf("Usuario: %s \n", (cadastro_operadores + i)->usuario);
        printf("Senha: %d \n", (cadastro_operadores + i)->senha);
        printf("Nome: %s \n", (cadastro_operadores + i)->nome);
        printf("Modulos que contem Permissao:  \n");
        if ((cadastro_operadores + i)->permissao[0] == 1) {
            printf("Todo Sistema\n");
            break;
        }
        if ((cadastro_operadores + i)->permissao[1] == 1) {
            printf("Modulo De Cadastros\n");
        }
        if ((cadastro_operadores + i)->permissao[2] == 1) {
            printf("Modulo De Reservas\n");
        }
        if ((cadastro_operadores + i)->permissao[3] == 1) {
            printf("Modulo De Transacoes \n");
        }
        if ((cadastro_operadores + i)->permissao[4] == 1) {
            printf("Modulo De Feedback\n");
        }
        if ((cadastro_operadores + i)->permissao[5] == 1) {
            printf("Modulo De Importacao Exportacao\n");
        }
        printf(" ------------------------------------------------ \n\n");


    }

}

int VerificarOperador_Login(cadastro_Operadores *cadastro_operadores, cadastro_Operadores *cadastro_operadores_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_operadores_dados->usuario, (*(cadastro_operadores + i)).usuario) == 0) {
            verificacao = 1;
        }
    }
    return verificacao;
}



