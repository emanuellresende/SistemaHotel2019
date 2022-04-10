/* 
 * File:   main.c
 * Author: v-ing
 *
 * Created on 17 de Outubro de 2019, 19:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "produtos.h"

/*
 * 
 */
// Define a struct de cadastrar produtos




// Declara as funcoes utilizadas


int main(int argc, char** argv) {
    // Comeco codigo dos produtos
    //Aloca o produto e declara
    cadastro_Prod *cadastro_produto;
    cadastro_Prod cadastro_produto_dados;
    cadastro_produto = malloc(sizeof (cadastro_Prod));



    // Variavel de procurar o produtar e buscar posicao
   

    // Inicio codigo
    while (produto_Home != 5) {
        printf(" 1 - Cadastrar Produto \n");
        printf(" 2 - Ver Produto \n");
        printf(" 3 - Editar Produto \n");
        printf(" 4 - Excluir Produto \n");
        printf(" 5 - Sair \n");
        scanf("%d", &produto_Home);
        //Switch do Menu
        switch (produto_Home) {
                // Caso 1 para cadastrar Produtos
            case 1:

                posicao_produto = 0;
                codigo_cadastro_produto = 0;
                printf("----- Cadastro de Produtos ----- \n");
                printf(" Digite o Codigo do Produto \n");
                scanf("%d%", &cadastro_produto_dados.codigo);
                verificar_produto = VerificarProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                if (verificar_produto == 1) {
                    printf(" Codigo ja cadastrado tente outro \n");
                    break;
                }


                printf(" Digite o Nome do Produto \n");
                scanf("%s", &cadastro_produto_dados.nome);
                printf(" Digite a descricao do Produto \n ");
                scanf("%s", &cadastro_produto_dados.descricao);
                printf(" Digite a quantidade no estoque \n ");
                scanf("%d", &cadastro_produto_dados.estoque);
                printf(" Digite o estoque Minimo \n ");
                scanf("%d", &cadastro_produto_dados.estoque_minimo);
                printf(" Digite o Preco de Custo \n ");
                scanf("%d", &cadastro_produto_dados.preco_custo);
                printf(" Digite o Preco de Venda \n ");
                scanf("%d", &cadastro_produto_dados.preco_venda);
                CadastroProduto(cadastro_produto, &cadastro_produto_dados, &contador_produto);
                //Soma um na variavel Contadora
                cadastro_produto = realloc(cadastro_produto, (contador_produto + 2) * sizeof (cadastro_Prod));
                printf(" ----- Cadastrado com Sucesso ----- \n");
                break; // Fecha o case do switch principal
            case 2:
                if (contador_produto == 0) {
                    printf(" ----- Nenhum Produto Cadastrado\n");
                    break;
                }
                // Parte para listar todos produtos
                printf("----- Ver produtos -----\n");
                printf(" 1 - Ver todos\n");
                printf(" 2 - Pesquisar por codigo\n");
                scanf("%d", &listar_produtos);
                switch (listar_produtos) {
                    case 1:
                        verProduto(cadastro_produto, contador_produto);
                        break; // Fecha o case 1
                    case 2:
                        printf(" ----- Pesquisar por Codigo -----\n");
                        printf(" ----- Digite o Codigo ----- \n");
                        scanf("%d", &cadastro_produto_dados.codigo);

                        posicao_produto = PosicaoProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                        if (posicao_produto == -1) {
                            printf("----- Codigo nao encontrado -----\n");
                            break;
                        }
                        printf("Codigo: %d \n", cadastro_produto[posicao_produto].codigo);
                        printf("Estoque: %d \n", cadastro_produto[posicao_produto].estoque);
                        printf("Estoque Minimo: %d \n", cadastro_produto[posicao_produto].estoque_minimo);
                        printf("Preco Custo: %d \n", cadastro_produto[posicao_produto].preco_custo);
                        printf("Preco Venda: %d \n", cadastro_produto[posicao_produto].preco_venda);
                        printf("Nome: %s \n", cadastro_produto[posicao_produto].nome);
                        printf("Descricao: %s \n\n", cadastro_produto[posicao_produto].descricao);
                        break; // fecha o case 2

                }// Fecha o switch de ver os produtos
                break; // Fecha o case 2
            case 3:
                if (contador_produto == 0) {
                    printf(" ----- Nenhum codigo cadastrado ----- \n");
                    break;
                }
                posicao_produto = -1;
                printf(" ----- Editar Produtos -----\n");
                printf(" Digite o codigo do produto \n");
                scanf("%d", &cadastro_produto_dados.codigo);
                posicao_produto = PosicaoProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                if (posicao_produto == -1) {
                    printf(" Codigo nao cadastrado \n");
                    break;
                }
                printf(" ----- Codigo Encontrado ----- \n");
                printf(" Digite os novos dados \n");
                printf(" Digite o Codigo do Produto \n");
                scanf("%d%", &cadastro_produto_dados.codigo);
                printf(" Digite o Nome do Produto \n");
                scanf("%s", &cadastro_produto_dados.nome);
                printf(" Digite a descricao do Produto \n ");
                scanf("%s", &cadastro_produto_dados.descricao);
                printf(" Digite a quantidade no estoque \n ");
                scanf("%d", &cadastro_produto_dados.estoque);
                printf(" Digite o estoque Minimo \n ");
                scanf("%d", &cadastro_produto_dados.estoque_minimo);
                printf(" Digite o Preco de Custo \n ");
                scanf("%d", &cadastro_produto_dados.preco_custo);
                printf(" Digite o Preco de Venda \n ");
                scanf("%d", &cadastro_produto_dados.preco_venda);
                atualizaProduto(cadastro_produto, &cadastro_produto_dados, contador_produto, posicao_produto);
                printf(" ----- Atualizado com Sucesso ----- \n");
                break; // Fecha o case 3
            case 4:
                posicao_produto = -1;
                deletar_produtos = 0;
                if (contador_produto == 0) {
                    printf(" ----- Nenhum codigo cadastrado ----- \n");
                    break;
                }
                printf(" ----- Deletar Produtos ----- \n");
                printf(" Para deletar digite o codigo: \n");
                scanf("%d", &cadastro_produto_dados.codigo);
                posicao_produto = PosicaoProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                if (posicao_produto == -1) {
                    printf(" ----- Codigo nao Cadastrado ----- \n");
                    break;
                }
                printf(" ----- Produto encontrado -----\n");
                printf(" ----- Deseja Realmente deletar? \n");
                printf(" 1 - Sim \n");
                printf(" 2 - Nao \n ");
                scanf("%d", &deletar_produtos);
                switch (deletar_produtos) {
                    case 1:
                        printf(" ----- Produto Deletado -----");
                        for (deletar_busca = 0; deletar_busca <= contador_produto; deletar_busca++) {
                            cadastro_produto[posicao_produto + deletar_busca].codigo = cadastro_produto[posicao_produto + deletar_busca + 1].codigo;
                            cadastro_produto[posicao_produto + deletar_busca].estoque = cadastro_produto[posicao_produto + deletar_busca + 1].estoque;
                            cadastro_produto[posicao_produto + deletar_busca].estoque_minimo = cadastro_produto[posicao_produto + deletar_busca + 1].estoque_minimo;
                            cadastro_produto[posicao_produto + deletar_busca].preco_custo = cadastro_produto[posicao_produto + deletar_busca + 1].preco_custo;
                            cadastro_produto[posicao_produto + deletar_busca].preco_venda = cadastro_produto[posicao_produto + deletar_busca + 1].preco_venda;
                            strcpy(cadastro_produto[posicao_produto + deletar_busca].descricao, cadastro_produto[posicao_produto + deletar_busca + 1].descricao);
                            strcpy(cadastro_produto[posicao_produto + deletar_busca].nome, cadastro_produto[posicao_produto + deletar_busca + 1].nome);
                        }
                        contador_produto--;
                        cadastro_produto = realloc(cadastro_produto, (contador_produto + 2) * sizeof (cadastro_Prod));
                        break;
                    case 2:
                        printf(" Produto nao deletado \n");
                        break;
                    default:
                        printf(" Comando invalido \n");
                }

                break; // Fecha o case 4
        }

    }
    return (EXIT_SUCCESS);
}

