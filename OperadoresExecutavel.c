/* 
 * File:   main.c
 * Author: v-ing
 *
 * Created on 17 de Outubro de 2019, 19:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operadores.h"

/*
 * 
 */
// Define a struct de cadastrar produtos



// Declara as funcoes utilizadas


int main(int argc, char** argv) {
    // Comeco codigo dos produtos
    //Aloca o produto e declara
    cadastro_Operadores *cadastro_operadores;
    cadastro_Operadores cadastro_operadores_dados;
    // Aloca a Memoria
    cadastro_operadores = malloc(sizeof (cadastro_Operadores));



    
            ;

    // Inicio codigo
    // Realiza o crud dos produtos
    while (operador_Home != 5) {
        printf(" 1 - Cadastrar Operador \n");
        printf(" 2 - Ver Operadores \n");
        printf(" 3 - Editar Operadores \n");
        printf(" 4 - Excluir Operadores \n");
        printf(" 5 - Sair \n");
        scanf("%d", &operador_Home);
        //Switch do Menu
        switch (operador_Home) {
                // Caso 1 para cadastrar Operador
            case 1:
                verificar_operador = 0;
                posicao_operador = 0;
                codigo_cadastro_operador = 0;
                printf("----- Cadastro de Operadores ----- \n");
                printf(" Digite o Codigo do Operador \n");
                scanf("%d", &cadastro_operadores_dados.codigo);
                // Ve se o codigo informado esta disponivel
                verificar_operador = Verificar_Operador(cadastro_operadores, &cadastro_operadores_dados, contador_operador);
                if (verificar_operador == 1) {
                    printf(" Codigo ja cadastrado tente outro \n");
                    break;
                }


                verificar_operador = 0;
                // Ve se o usuario digitado esta disponivel
                printf(" Digite o usuario do Operador \n");
                setbuf(stdin, NULL);
                fgets(cadastro_operadores_dados.usuario, 100, stdin);
                verificar_operador = VerificarOperador_Login(cadastro_operadores, &cadastro_operadores_dados, contador_operador);
                if (verificar_operador == 1) {
                    printf(" Usuario ja cadastrado tente outro \n");
                    break;
                }
                //  Cadastra o operador
                printf(" Digite o Nome do Operador \n");
                setbuf(stdin, NULL);
                fgets(cadastro_operadores_dados.nome, 100, stdin);
                printf(" Digite a senha \n ");
                scanf("%d", &cadastro_operadores_dados.senha);
                printf(" Permissao do Operador: \n");
                printf(" 1 - Todo o Sistema\n");
                printf(" 2 - Cadastro e Gestao \n");
                printf(" 3 - Reservas \n");
                printf(" 4 - Transacoes \n");
                printf(" 5 - FeedBeck \n");
                printf(" 6 - Importacao \n");
                scanf("%d", &cadastro_operadores_dados.permissao);
                if (cadastro_operadores_dados.permissao > 6) {
                    printf(" Opcao invalida \n");
                    break;
                }
                //Envia para a variavel principal
                Cadastro_Operador(cadastro_operadores, &cadastro_operadores_dados, &contador_operador);


                cadastro_operadores = realloc(cadastro_operadores, (contador_operador + 2) * sizeof (cadastro_Operadores));
                printf(" ----- Cadastrado com Sucesso ----- \n");
                break; // Fecha o case do switch principal
            case 2:
                if (contador_operador == 0) {
                    printf(" ----- Nenhum Operador Cadastrado\n");
                    break;
                }
                // Parte para listar todos operadores
                printf("----- Ver Operadores -----\n");
                printf(" 1 - Ver todos\n");
                printf(" 2 - Pesquisar por codigo\n");
                scanf("%d", &listar_operador);
                switch (listar_operador) {
                    case 1:
                        ver_Operador(cadastro_operadores, contador_operador);
                        break; // Fecha o case 1
                    case 2:
                        printf(" ----- Pesquisar por Codigo -----\n");
                        printf(" ----- Digite o Codigo ----- \n");
                        scanf("%d", &cadastro_operadores_dados.codigo);
                        posicao_operador = Posicao_Operador(cadastro_operadores, &cadastro_operadores_dados, contador_operador);
                        if (posicao_operador == -1) {
                            printf("----- Codigo nao encontrado -----\n");
                            break;
                        }
                        printf("Codigo: %d \n", cadastro_operadores[posicao_operador].codigo);
                        printf("Usuario: %s \n", cadastro_operadores[posicao_operador].usuario);
                        printf("Nome: %s \n", cadastro_operadores[posicao_operador].nome);
                        printf("Senha: %d \n", cadastro_operadores[posicao_operador].senha);
                        printf("Permissao: %d \n", cadastro_operadores[posicao_operador].permissao);
                        break; // fecha o case 2

                }// Fecha o switch de ver os operador
                break; // Fecha o case 2
            case 3:
                if (contador_operador == 0) {
                    printf(" ----- Nenhum Operador cadastrado ----- \n");
                    break;
                }
                posicao_operador = -1;
                printf(" ----- Editar Operadores -----\n");
                printf(" Digite o codigo do operador \n");
                scanf("%d", &cadastro_operadores_dados.codigo);
                posicao_operador = Posicao_Operador(cadastro_operadores, &cadastro_operadores_dados, contador_operador);
                if (posicao_operador == -1) {
                    printf(" Codigo nao cadastrado \n");
                    break;
                }
                printf(" ----- Codigo Encontrado ----- \n");
                printf(" Digite os novos dados \n");
                printf(" Digite o novo Usuario do Operador \n");
                setbuf(stdin, NULL);
                fgets(cadastro_operadores_dados.usuario, 100, stdin);
                printf(" Digite o codigo do operador \n");
                scanf("%d", &cadastro_operadores_dados.codigo);
                printf(" Digite o novo Nome do Operador \n");
                setbuf(stdin, NULL);
                fgets(cadastro_operadores_dados.nome, 100, stdin);
                printf(" Digite a nova senha do operador \n ");
                scanf("%d", &cadastro_operadores_dados.senha);
                printf(" Permissao do Operador: \n");
                printf(" 1 - Todo o Sistema\n");
                printf(" 2 - Cadastro e Gestao \n");
                printf(" 3 - Reservas \n");
                printf(" 4 - Transacoes \n");
                printf(" 5 - FeedBeck \n");
                printf(" 6 - Importacao \n");
                scanf("%d", &cadastro_operadores_dados.permissao);

                atualiza_Operador(cadastro_operadores, &cadastro_operadores_dados, posicao_operador);
                printf(" ----- Atualizado com Sucesso ----- \n");
                break; // Fecha o case 3
            case 4:
                posicao_operador = -1;
                deletar_operador = 0;
                if (contador_operador == 0) {
                    printf(" ----- Nenhum Operador cadastrado ----- \n");
                    break;
                }
                printf(" ----- Deletar Operadores ----- \n");
                printf(" Para deletar digite o codigo: \n");
                scanf("%d", &cadastro_operadores_dados.codigo);
                posicao_operador = Posicao_Operador(cadastro_operadores, &cadastro_operadores_dados, contador_operador);
                if (posicao_operador == -1) {
                    printf(" ----- Codigo nao Cadastrado ----- \n");
                    break;
                }
                printf(" ----- Operador encontrado -----\n");
                printf(" ----- Deseja Realmente deletar? \n");
                printf(" 1 - Sim \n");
                printf(" 2 - Nao \n ");
                scanf("%d", &deletar_operador);
                switch (deletar_operador) {
                    case 1:
                        printf(" ----- Operador Deletado -----");
                        for (deletar_operador = 0; deletar_operador <= contador_operador; deletar_operador++) {
                            cadastro_operadores[posicao_operador + deletar_operador].codigo = cadastro_operadores[posicao_operador + deletar_operador + 1].codigo;
                            cadastro_operadores[posicao_operador + deletar_operador].senha = cadastro_operadores[posicao_operador + deletar_operador + 1].senha;
                            cadastro_operadores[posicao_operador + deletar_operador].permissao = cadastro_operadores[posicao_operador + deletar_operador + 1].permissao;
                            strcpy(cadastro_operadores[posicao_operador + deletar_operador].usuario, cadastro_operadores[posicao_operador + deletar_operador + 1].usuario);
                            strcpy(cadastro_operadores[posicao_operador + deletar_operador].nome, cadastro_operadores[posicao_operador + deletar_operador + 1].nome);
                        }
                        contador_operador--;
                        cadastro_operadores = realloc(cadastro_operadores, (contador_operador + 2) * sizeof (cadastro_Operadores));
                        break;
                    case 2:
                        printf(" Operador nao deletado \n");
                        break;
                    default:
                        printf(" Comando invalido \n");
                }

                break; // Fecha o case 4
        }

    }
    return (EXIT_SUCCESS);
}


