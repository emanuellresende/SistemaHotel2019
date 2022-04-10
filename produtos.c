#include <stdio.h>
#include <stdlib.h>
#include "hospede.h"
#include <string.h>


typedef struct cadastro_Prod {
    int codigo;
    char descricao[100];
    int estoque;
    int estoque_minimo;
    int preco_custo;
    int preco_venda;
    char nome[100];

} cadastro_Prod;
cadastro_Prod *cadastro_produto;
cadastro_Prod cadastro_produto_dados;

void CadastroProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int *contador) {
    (*(cadastro_produto + (*contador))).codigo = cadastro_produto_dados->codigo;
    (*(cadastro_produto + (*contador))).estoque = cadastro_produto_dados->estoque;
    (*(cadastro_produto + (*contador))).estoque_minimo = cadastro_produto_dados->estoque_minimo;
    (*(cadastro_produto + (*contador))).preco_custo = cadastro_produto_dados->preco_custo;
    (*(cadastro_produto + (*contador))).preco_venda = cadastro_produto_dados->preco_venda;
    strcpy((*(cadastro_produto + (*contador))).descricao, cadastro_produto_dados->descricao);
    strcpy((*(cadastro_produto + (*contador))).nome, cadastro_produto_dados->nome);
    (*contador)++;
    FILE* arquivo_produto = fopen("produto.txt", "wb");
    fwrite(cadastro_produto, sizeof (cadastro_Prod), (*contador), arquivo_produto);
    fflush(arquivo_produto);
    fclose(arquivo_produto);
    // Contador do Hotel
    FILE* contadores_produto = fopen("contador_produto.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_produto);
    fflush(contadores_produto);
    fclose(contadores_produto);

}

int VerificarProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_produto_dados->codigo == (*(cadastro_produto + i)).codigo) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int PosicaoProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_produto_dados->codigo == (*(cadastro_produto + i)).codigo) {
            posicao = i;
        }
    }
    return posicao;
}

void atualizaProduto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao) {

    cadastro_produto[posicao].codigo = cadastro_produto_dados->codigo;
    cadastro_produto[posicao].estoque = cadastro_produto_dados->estoque;
    cadastro_produto[posicao].estoque_minimo = cadastro_produto_dados->estoque_minimo;
    cadastro_produto[posicao].preco_custo = cadastro_produto_dados->preco_custo;
    cadastro_produto[posicao].preco_venda = cadastro_produto_dados->preco_venda;
    strcpy(cadastro_produto[posicao].descricao, cadastro_produto_dados->descricao);
    strcpy(cadastro_produto[posicao].nome, cadastro_produto_dados->nome);
    FILE* arquivo_produto = fopen("produto.txt", "wb");
    fwrite(cadastro_produto, sizeof (cadastro_Prod), contador, arquivo_produto);
    fflush(arquivo_produto);
    fclose(arquivo_produto);
}

void verProduto(cadastro_Prod *cadastro_produto, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf("Codigo: %d - %d \n", i + 1, (cadastro_produto + i)->codigo);
        printf("Estoque: %d \n", (cadastro_produto + i)->estoque);
        printf("Estoque Minimo: %d \n", (cadastro_produto + i)->estoque_minimo);
        printf("Preco Custo: %d \n", (cadastro_produto + i)->preco_custo);
        printf("Preco Venda: %d \n", (cadastro_produto + i)->preco_venda);
        printf("Nome: %s \n", (cadastro_produto + i)->nome);
        printf("Descricao: %s \n\n", (cadastro_produto + i)->descricao);
    }

}

void verProduto_nome(cadastro_Prod *cadastro_produto, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf(" ------------------------------------------------ \n");
        printf("                 Nome: %s \n", (cadastro_produto + i)->nome);
        printf("                 Codigo: %d - %d \n", i + 1, (cadastro_produto + i)->codigo);
        printf(" ------------------------------------------------ \n\n");
    }
}

int Verificar_Disponibilidade_Produto(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao) {
    int i;

    if (cadastro_produto_dados->estoque > (*(cadastro_produto + posicao)).estoque_minimo) {
        return 1;
    }
    return 0;
}

void atualizaProduto_Venda(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao) {


    cadastro_produto[posicao].estoque = cadastro_produto_dados->estoque;
    FILE* arquivo_produto = fopen("produto.txt", "wb");
    fwrite(cadastro_produto, sizeof (cadastro_Prod), contador, arquivo_produto);
    fclose(arquivo_produto);
}

void atualizaProduto_Compra(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, int posicao) {

    cadastro_produto[posicao].estoque = cadastro_produto[posicao].estoque + cadastro_produto_dados->estoque;
    cadastro_produto[posicao].estoque_minimo = cadastro_produto[posicao].estoque_minimo;
    cadastro_produto[posicao].preco_custo = cadastro_produto_dados->preco_custo;
    cadastro_produto[posicao].preco_venda = cadastro_produto_dados->preco_venda;
    FILE* arquivo_produto = fopen("produto.txt", "wb");
    fwrite(cadastro_produto, sizeof (cadastro_Prod), contador, arquivo_produto);
    fclose(arquivo_produto);
}
int VerificarProduto_Quantidade(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_produto_dados->estoque_minimo == (*(cadastro_produto + i)).estoque_minimo) {
            verificacao++;
        }
    }
    return verificacao;
}
void PosicaoProduto_Quantidade(cadastro_Prod *cadastro_produto, cadastro_Prod *cadastro_produto_dados, int contador, posicoes *posicao) {
    int i,j = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_produto_dados->estoque_minimo == (*(cadastro_produto + i)).estoque_minimo) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }
  
}


