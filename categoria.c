#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro_categoria_acomodacao {
    int codigo;
    char descricao[100];
    float valor;
    char facilidades[100];
    int quantidade_comportada;
    char nome[100];

} cadastro_categoria_acomodacao;

cadastro_categoria_acomodacao *cadastro_categoria;
cadastro_categoria_acomodacao cadastro_categoria_dados;

void Cadastro_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int *contador) {
    (*(cadastro_categoria + (*contador))).codigo = cadastro_categoria_dados->codigo;
    (*(cadastro_categoria + (*contador))).valor = cadastro_categoria_dados->valor;
    (*(cadastro_categoria + (*contador))).quantidade_comportada = cadastro_categoria_dados->quantidade_comportada;
    strcpy((*(cadastro_categoria + (*contador))).descricao, cadastro_categoria_dados->descricao);
    strcpy((*(cadastro_categoria + (*contador))).nome, cadastro_categoria_dados->nome);


    (*contador)++;
    FILE* arquivo_categoria = fopen("categoria.txt", "wb");
    fwrite(cadastro_categoria, sizeof (cadastro_categoria_acomodacao), (*contador), arquivo_categoria);
    fflush(arquivo_categoria);
    fclose(arquivo_categoria);
    // Contador do Hotel
    FILE* contadores_categoria = fopen("contador_categoria.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_categoria);
    fflush(arquivo_categoria);
    fclose(contadores_categoria);

}

int Verificar_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_categoria_dados->codigo == (*(cadastro_categoria + i)).codigo) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int Posicao_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_categoria_dados->codigo == (*(cadastro_categoria + i)).codigo) {
            posicao = i;
        }
    }
    return posicao;
}

void atualiza_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int posicao, int contador) {

    cadastro_categoria[posicao].codigo = cadastro_categoria_dados->codigo;
    cadastro_categoria[posicao].valor = cadastro_categoria_dados->valor;
    cadastro_categoria[posicao].quantidade_comportada = cadastro_categoria_dados->quantidade_comportada;
    strcpy(cadastro_categoria[posicao].descricao, cadastro_categoria_dados->descricao);
    strcpy(cadastro_categoria[posicao].nome, cadastro_categoria_dados->nome);
    FILE* arquivo_categoria = fopen("categoria.txt", "wb");
    fwrite(cadastro_categoria, sizeof (cadastro_categoria_acomodacao), contador, arquivo_categoria);
    fflush(arquivo_categoria);
    fclose(arquivo_categoria);

}

void ver_Categoria(cadastro_categoria_acomodacao *cadastro_categoria, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf("Codigo:%d \n", (cadastro_categoria + i)->codigo);
        printf("Valor: %f \n", (cadastro_categoria + i)->valor);
        printf("Quantidade Comportada: %d \n", (cadastro_categoria + i)->quantidade_comportada);
        printf("Descricao: %s \n", (cadastro_categoria + i)->descricao);
        printf("Tipo: %s \n", (cadastro_categoria + i)->nome);
    }

}

int Verificar_Categoria_Nome(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_categoria_dados->nome, (*(cadastro_categoria + i)).nome) == 0) {
            verificacao = 1;
        }
    }
    return verificacao;
}

void ver_Categoria_tipo(cadastro_categoria_acomodacao *cadastro_categoria, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf("Tipo: %s \n", (cadastro_categoria + i)->nome);
    }

}

int Verificar_Categoria_tipo(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_categoria_dados->nome, (*(cadastro_categoria + i)).nome) == 0) {
            verificacao = 1;
        }
    }
    return verificacao;
}
// funcao da parte de reservas

void pesquisar_quantidade_pessoas(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador, int *contar_acomodacao) {
    (*contar_acomodacao) = 0;
    int i;
    for (i = 0; i < contador; i++) {
        if (cadastro_categoria_dados->quantidade_comportada == (cadastro_categoria + i)->quantidade_comportada) {
            printf(" ----- Encontrado ----- \n\n");
            printf("Codigo:%d \n", (cadastro_categoria + i)->codigo);
            printf("Valor: %f \n", (cadastro_categoria + i)->valor);
            printf("Quantidade Comportada: %d \n", (cadastro_categoria + i)->quantidade_comportada);
            printf("Descricao: %s \n", (cadastro_categoria + i)->descricao);
            printf("Tipo: %s \n", (cadastro_categoria + i)->nome);
            (*contar_acomodacao) = 1;
        }

    }

}

int Posicao_Categoria_Tipo(cadastro_categoria_acomodacao *cadastro_categoria, cadastro_categoria_acomodacao *cadastro_categoria_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (strcmp(cadastro_categoria_dados->nome, (*(cadastro_categoria + i)).nome) == 0) {
            posicao = i;
        }
    }
    return posicao;
}

