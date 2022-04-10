/* 
 * File:   ArquivoPrincipal.c
 * Author: v-ing
 *
 * Created on 23 de Outubro de 2019, 10:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "hotel.h"
#include "hospede.h"
#include "fornecedores.h"
#include "operadores.h"
#include "produtos.h"
#include "acomodacoes.h"
#include "categoria.h"
#include "agenda.h"
#include "login.h"
#include "transacoes.h"

/*
 * 
 */
int main(int argc, char** argv) {
    // alocacao estatica da memoria
    // alocacao estatica da memoria
    cadastro_agenda = malloc(sizeof (criar_Agenda));
    cadastro_hotel = malloc(sizeof (criar_Hotel));
    cadastro_hospede = malloc(sizeof (criar_Hospede));
    cadastro_fornecedor = malloc(sizeof (criar_Fornecedor));
    cadastro_produto = malloc(sizeof (cadastro_Prod));
    cadastro_categoria = malloc(sizeof (cadastro_categoria_acomodacao));
    cadastro_acomodacao = malloc(sizeof (criar_Acomodacao));
    cadastro_operadores = malloc(sizeof (cadastro_Operadores));
    cadastro_transacao = malloc(sizeof (criar_Transacao));
    cadastro_caixa = malloc(sizeof (criar_Caixa));
    cadastro_conta = malloc(sizeof (criar_Conta));
    cadastro_receber = malloc(sizeof (criar_Receber));
    cadastro_controle = malloc(sizeof (criar_Controle));


    // fim alocacao

    // Ler arquivos e contadores
    // Hotel
    contador_hotel = 0;
    FILE* contadores_hotel = fopen("contador.txt", "rb");
    if (contadores_hotel != NULL) {
        fread(&contador_hotel, sizeof (int), 1, contadores_hotel);
        fflush(contadores_hotel);
        fclose(contadores_hotel);

    }
    fflush(contadores_hotel);
    fclose(contadores_hotel);

    if (contador_hotel != 0) {
        FILE* arquivo_hotel = fopen("hotel.txt", "rb");
        if (arquivo_hotel != NULL) {
            cadastro_hotel = realloc(cadastro_hotel, (contador_hotel + 2) * sizeof (criar_Hotel));
            do {
                fread(cadastro_hotel, sizeof (criar_Hotel), contador_hotel, arquivo_hotel);

            } while (!feof(arquivo_hotel));


        }
        fflush(arquivo_hotel);
        fclose(arquivo_hotel);
    }
    // Fim Hotel

    // Hospede
    contador_hospede = 0;
    FILE* contadores_hospede = fopen("contador_hospede.txt", "rb");
    if (contadores_hospede != NULL) {
        fread(&contador_hospede, sizeof (int), 1, contadores_hospede);
        fflush(contadores_hospede);
        fclose(contadores_hospede);
    }
    fflush(contadores_hospede);
    fclose(contadores_hospede);
    if (contador_hospede != 0) {
        arquivo_hospede = fopen("hospede.txt", "rb");
        if (arquivo_hospede != NULL) {
            cadastro_hospede = realloc(cadastro_hospede, (contador_hospede + 2) * sizeof (criar_Hospede));
            do {
                fread(cadastro_hospede, sizeof (criar_Hospede), contador_hospede, arquivo_hospede);

            } while (!feof(arquivo_hospede));


        }
        fflush(arquivo_hospede);
        fclose(arquivo_hospede);
    }

    // Fim hospede

    // comeco acomodacoes
    contador_acomodacao = 0;
    FILE* contadores_acomodacao = fopen("contador_acomodacao.txt", "rb");
    if (contadores_acomodacao != NULL) {
        fread(&contador_acomodacao, sizeof (int), 1, contadores_acomodacao);
        fflush(contadores_acomodacao);
        fclose(contadores_acomodacao);
    }
    fflush(contadores_acomodacao);
    fclose(contadores_acomodacao);
    if (contador_acomodacao != 0) {
        FILE* arquivo_acomodacao = fopen("acomodacao.txt", "rb");
        if (arquivo_acomodacao != NULL) {
            cadastro_acomodacao = realloc(cadastro_acomodacao, (contador_acomodacao + 2) * sizeof (criar_Acomodacao));
            do {
                fread(cadastro_acomodacao, sizeof (criar_Acomodacao), contador_acomodacao, arquivo_acomodacao);

            } while (!feof(arquivo_acomodacao));


        }
        fflush(arquivo_acomodacao);
        fclose(arquivo_acomodacao);
    }
    // fim acomodacoes

    // comeco categoria
    contador_categoria = 0;
    FILE* contadores_categoria = fopen("contador_categoria.txt", "rb");
    if (contadores_categoria != NULL) {
        fread(&contador_categoria, sizeof (int), 1, contadores_categoria);
        fflush(contadores_categoria);
        fclose(contadores_categoria);
    }
    fflush(contadores_categoria);
    fclose(contadores_categoria);
    if (contador_categoria != 0) {
        FILE* arquivo_categoria = fopen("categoria.txt", "rb");
        if (arquivo_categoria != NULL) {
            cadastro_categoria = realloc(cadastro_categoria, (contador_categoria + 2) * sizeof (cadastro_categoria_acomodacao));
            do {
                fread(cadastro_categoria, sizeof (cadastro_categoria_acomodacao), contador_categoria, arquivo_categoria);

            } while (!feof(arquivo_categoria));


        }
        fflush(arquivo_categoria);
        fclose(arquivo_categoria);
    }
    // fim categoria

    // comeco agenda
    contador_agenda = 0;
    FILE* contadores_agenda = fopen("contador_agenda.txt", "rb");
    if (contadores_agenda != NULL) {
        fread(&contador_agenda, sizeof (int), 1, contadores_agenda);
        fflush(contadores_agenda);
        fclose(contadores_agenda);
    }
    fflush(contadores_agenda);
    fclose(contadores_agenda);
    if (contador_agenda != 0) {
        FILE* arquivo_agenda = fopen("agenda.txt", "rb");
        if (arquivo_agenda != NULL) {
            cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
            do {
                fread(cadastro_agenda, sizeof (criar_Agenda), contador_agenda, arquivo_agenda);

            } while (!feof(arquivo_agenda));
        }
        fflush(arquivo_agenda);
        fclose(arquivo_agenda);
    }
    // fim agenda

    // inicio fornecedores
    contador_fornecedor = 0;
    FILE* contadores_fornecedor = fopen("contador_fornecedor.txt", "rb");
    if (contadores_fornecedor != NULL) {
        fread(&contador_fornecedor, sizeof (int), 1, contadores_fornecedor);
        fflush(contadores_fornecedor);
        fclose(contadores_fornecedor);
    }
    fflush(contadores_fornecedor);
    fclose(contadores_fornecedor);

    if (contador_fornecedor != 0) {
        FILE* arquivo_fornecedor = fopen("fornecedor.txt", "rb");
        if (arquivo_fornecedor != NULL) {
            cadastro_fornecedor = realloc(cadastro_fornecedor, (contador_fornecedor + 2) * sizeof (criar_Fornecedor));
            do {
                fread(cadastro_fornecedor, sizeof (criar_Fornecedor), contador_fornecedor, arquivo_fornecedor);

            } while (!feof(arquivo_fornecedor));
        }
        fflush(arquivo_fornecedor);
        fclose(arquivo_fornecedor);
    }
    // fim fornecedores


    // comeco produto
    contador_produto = 0;
    FILE* contadores_produto = fopen("contador_produto.txt", "rb");
    if (contadores_produto != NULL) {
        fread(&contador_produto, sizeof (int), 1, contadores_produto);
        fflush(contadores_produto);
        fclose(contadores_produto);
    }
    fflush(contadores_produto);
    fclose(contadores_produto);
    if (contador_produto != 0) {
        FILE* arquivo_produto = fopen("produto.txt", "rb");
        if (arquivo_produto != NULL) {
            cadastro_produto = realloc(cadastro_produto, (contador_produto + 2) * sizeof (cadastro_Prod));
            do {
                fread(cadastro_produto, sizeof (cadastro_Prod), contador_produto, arquivo_produto);

            } while (!feof(arquivo_produto));
        }
        fflush(arquivo_produto);
        fclose(arquivo_produto);
    }
    // fim produto

    // comeco operadores
    contador_operador = 0;
    FILE* contadores_operador = fopen("contador_operador.txt", "rb");
    if (contadores_operador != NULL) {
        fread(&contador_operador, sizeof (int), 1, contadores_operador);
        fflush(contadores_operador);
        fclose(contadores_operador);
    }
    fflush(contadores_operador);
    fclose(contadores_operador);
    if (contador_operador != 0) {
        FILE* arquivo_operador = fopen("operador.txt", "rb");
        if (arquivo_operador != NULL) {
            cadastro_operadores = realloc(cadastro_operadores, (contador_operador + 2) * sizeof (cadastro_Operadores));
            do {
                fread(cadastro_operadores, sizeof (cadastro_Operadores), contador_operador, arquivo_operador);

            } while (!feof(arquivo_operador));
        }
        fflush(arquivo_operador);
        fclose(arquivo_operador);
    }
    // fim operadores
    // inicio transacao
    contador_checkin = 0;
    FILE* contadores_transacao = fopen("contador_transacao.txt", "rb");
    if (contadores_transacao != NULL) {
        fread(&contador_checkin, sizeof (int), 1, contadores_transacao);
        fflush(contadores_transacao);
        fclose(contadores_transacao);
    }
    fflush(contadores_transacao);
    fclose(contadores_transacao);
    if (contador_checkin > 0) {
        FILE* arquivo_transacao = fopen("transacao.txt", "rb");
        if (arquivo_transacao != NULL) {
            cadastro_transacao = realloc(cadastro_transacao, (contador_checkin + 2) * sizeof (criar_Transacao));
            do {
                fread(cadastro_transacao, sizeof (criar_Transacao), contador_checkin, arquivo_transacao);

            } while (!feof(arquivo_transacao));
        }
        fflush(arquivo_transacao);
        fclose(arquivo_transacao);
    }
    // fim transacao

    //inicio caixa
    contador_caixa = 0;
    FILE* contadores_caixa = fopen("contador_caixa.txt", "rb");
    if (contadores_caixa != NULL) {
        fread(&contador_caixa, sizeof (int), 1, contadores_caixa);
        fflush(contadores_caixa);
        fclose(contadores_caixa);
    }
    if (contador_caixa > 0) {
        FILE* arquivo_caixa = fopen("caixa.txt", "rb");
        if (arquivo_caixa != NULL) {
            cadastro_caixa = realloc(cadastro_caixa, (1) * sizeof (criar_Caixa));
            do {
                fread(cadastro_caixa, sizeof (criar_Caixa), contador_caixa, arquivo_caixa);

            } while (!feof(arquivo_caixa));
        }
        fflush(arquivo_caixa);
        fclose(arquivo_caixa);
    }
    // fim caixa

    // inicio conta
    contador_conta = 0;
    FILE* contadores_conta = fopen("contador_conta.txt", "rb");
    if (contadores_conta != NULL) {
        fread(&contador_conta, sizeof (int), 1, contadores_conta);
        fflush(contadores_conta);
        fclose(contadores_conta);
    }
    if (contador_conta > 0) {
        fflush(contadores_conta);
        fclose(contadores_conta);
        FILE* arquivo_conta = fopen("conta.txt", "rb");
        if (arquivo_conta != NULL) {
            cadastro_conta = realloc(cadastro_conta, (contador_conta + 2) * sizeof (criar_Conta));
            do {
                fread(cadastro_conta, sizeof (criar_Conta), contador_conta, arquivo_conta);

            } while (!feof(arquivo_conta));
        }
        fflush(arquivo_conta);
        fclose(arquivo_conta);
    }
    // fim conta

    // inicio controle
    contador_controle = 0;
    FILE* contadores_controle = fopen("contador_controle.txt", "rb");
    if (contadores_controle != NULL) {
        fread(&contador_controle, sizeof (int), 1, contadores_controle);
        fflush(contadores_controle);
        fclose(contadores_controle);
    }
    if (contador_controle > 0) {
        fflush(contadores_controle);
        fclose(contadores_controle);
        FILE* arquivo_controle = fopen("controle.txt", "rb");
        if (arquivo_controle != NULL) {
            cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
            do {
                fread(cadastro_controle, sizeof (criar_Controle), contador_controle, arquivo_controle);

            } while (!feof(arquivo_controle));
        }
        fflush(arquivo_controle);
        fclose(arquivo_controle);
    }

    // fim controle
    // fim da leitura




    int menu_principal;
    int sub_menu_principal_cadastro;
    verificar_login_final = 1;

    // Area de Login
    // Area de Login
    if (contador_hotel >= 1) {
        while (verificar_senha_login != 1) {

            printf(" ------------------------------------------------ \n");
            printf(" Bem Vindo ao sistema de Hoteis \n");
            printf(" ------------------------------------------------ \n");
            printf(" Deseja fazer Login ? \n");
            printf(" 1 - Sim \n 2 - Nao \n");
            scanf("%d", &logar);
            printf(" ------------------------------------------------ \n\n");

            switch (logar) {
                    // Realiza o Login no sistema verificando os dados do usario
                case 1:

                    printf("Digite o usuario\n");
                    setbuf(stdin, NULL);
                    scanf("%[^\n]s", &login.usuario);
                    verificar_Usuario = verificar_Usuariol(cadastro_operadores, &login, contador_operador);
                    if (verificar_Usuario == 0) {
                        printf("Login nao cadastrado\n");
                        break;
                    }
                    verificar_Posicao_login = verificar_posicao_login(cadastro_operadores, &login, contador_operador);
                    printf("Digite a Senha\n");
                    scanf("%d", &login.senha);

                    verificar_senha_login = verificar_senhal(cadastro_operadores, &login, verificar_Posicao_login);
                    if (verificar_senha_login == 0) {
                        printf("Senha incorreta\n");
                        break;
                    }
                    verificar_login_final = verificar_Login_final(cadastro_operadores, &login, verificar_Posicao_login);
                    if (verificar_login_final == 0) {
                        printf("Nao acessado\n");
                        break;
                    }
                    verificar_senha_login = 1;
                    break;
                case 2:
                    printf(" Retornado \n");
                    break;

                default:
                    printf(" Comando Invalido \n");
                    break;
            }
        }
        printf(" ------------------------------------------------ \n");
        printf("               Logado com Sucesso \n");
        printf(" ------------------------------------------------ \n\n");
    }
    // Menu inicial do Programa
    while (menu_principal != 6) {
        printf(" ----- Escolha uma opcao ----- \n");
        printf("----- 1 -  Modulo de Cadastro e Gestao de Dados -----\n");
        printf("----- 2 -  Modulo de Reservas -----\n");
        printf("----- 3 - Modulo de Transacoes -----\n");
        printf("----- 4 - Modulo de Feedback -----\n");
        printf("----- 5 - Modulo de Importacao/Exportacao -----\n");
        printf("----- 6 - Fechar Programa -----\n");
        scanf("%d", &menu_principal);
        switch (menu_principal) {
            case 6:
                printf(" ----- Programa Encerrado -----\n");
                //verificar_login_final = 0;
                break;
            default:
                printf(" Opcao Invalida");
                break;

            case 1:

                verificar_acesso0 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                verificar_acesso1 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                if (verificar_acesso0 == 1 & verificar_acesso1 == 1) {
                    printf(" Sem Permissao de acesso \n");
                    break;
                }


                sub_menu_principal_cadastro = 0;
                printf(" ----- Area de Cadastro -----\n");
                printf(" Selecione uma opcao \n");
                printf("1 - Hotel\n");
                printf("2 - Hospede\n");
                printf("3 - Fornecedor\n");
                printf("4 - Produtos\n");
                printf("5 - Categoria de Acomodacao\n");
                printf("6 - Acomodacao\n");
                printf("7 - Operador\n");
                printf("8 - Sair\n");
                scanf("%d", &sub_menu_principal_cadastro);
                switch (sub_menu_principal_cadastro) {
                    case 8:
                        printf("Retornado\n");

                        break;
                    case 1:
                        // Inicio codigo do cadastro de Hotel
                        hotel_Home = 0;
                        while (hotel_Home != 5) {
                            printf(" 1 - Cadastrar Hotel \n");
                            printf(" 2 - Ver Hotel \n");
                            printf(" 3 - Editar Hotel \n");
                            printf(" 4 - Excluir Hotel \n");
                            printf(" 5 - Sair \n");
                            scanf("%d", &hotel_Home);
                            //Switch do Menu
                            switch (hotel_Home) {
                                    // Caso 1 para cadastrar Produtos
                                case 1:
                                    if (contador_hotel >= 1) {
                                        printf(" Ja existe um Hotel Cadastrado \n");
                                        break;
                                    }
                                    printf("Digite o nome Fantasia\n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.nome_social);
                                    verificar_hotel = VerificarHotel(cadastro_hotel, &cadastro_hotel_dados, contador_hotel);
                                    if (verificar_hotel == 1) {
                                        printf(" Nome ja cadastrado tente outro \n");
                                        break;
                                    }
                                    printf(" Digite a Razao Social \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.razao_social);
                                    printf(" Inscricao Estadual \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.inscricao_estadual);
                                    printf(" Digite o Endereco \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.endereco);
                                    printf(" Digite o E-mail \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.email);
                                    printf(" Digite o nome do dono \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.nome_dono);
                                    printf(" Digite o CNPJ \n ");
                                    scanf("%f", &cadastro_hotel_dados.cnpj);
                                    printf(" Digite o Telefone do dono \n ");
                                    scanf("%f", &cadastro_hotel_dados.telefone_dono);
                                    printf(" Digite o Telefone do Hotel \n ");
                                    scanf("%f", &cadastro_hotel_dados.telefone);
                                    printf(" Horario Check-in \n ");
                                    scanf("%f", &cadastro_hotel_dados.horario_chegar);
                                    printf(" Horario Check-out \n ");
                                    scanf("%f", &cadastro_hotel_dados.horario_sair);
                                    printf(" Lucro Produtos Vendidos \n ");
                                    scanf("%f", &cadastro_hotel_dados.lucro_produtos_vendidos);
                                    CadastroHotel(cadastro_hotel, &cadastro_hotel_dados, &contador_hotel);
                                    //Soma um na variavel Contadora
                                    cadastro_hotel = realloc(cadastro_hotel, (contador_hotel + 2) * sizeof (criar_Hotel));
                                    printf(" ----- Cadastrado com Sucesso ----- \n");
                                    break; // Fecha o case do switch principal
                                case 2:
                                    if (contador_hotel == 0) {
                                        printf(" ----- Nenhum Hotel Cadastrado\n");
                                        break;
                                    }
                                    // Parte para listar todos hoteis
                                    printf("----- Ver Hoteis -----\n");
                                    printf(" 1 - Ver todos\n");
                                    printf(" 2 - Pesquisar por Nome\n");
                                    scanf("%d", &listar_hoteis);
                                    switch (listar_hoteis) {
                                        case 1:
                                            verHotel(cadastro_hotel, contador_hotel);
                                            break; // Fecha o case 1
                                        case 2:
                                            printf(" ----- Pesquisar por Nome -----\n");
                                            printf(" ----- Digite o Nome do Hotel ----- \n");
                                            setbuf(stdin, NULL);
                                            scanf("%[^\n]s", &cadastro_hotel_dados.nome_social);
                                            posicao_hotel = PosicaoHotel(cadastro_hotel, &cadastro_hotel_dados, contador_hotel);
                                            if (posicao_hotel == -1) {
                                                printf("----- Hotel nao encontrado -----\n");
                                                break;
                                            }
                                            printf(" ------------------------------------------------ \n");
                                            printf(" Nome Fantasia %s \n", cadastro_hotel[posicao_hotel].nome_social);
                                            printf(" Razao Social %s  \n", cadastro_hotel[posicao_hotel].razao_social);
                                            printf(" Inscricao Estadual %s  \n", cadastro_hotel[posicao_hotel].inscricao_estadual);
                                            printf(" Endereco %s   \n", cadastro_hotel[posicao_hotel].endereco);
                                            printf(" E-mail  %s \n", cadastro_hotel[posicao_hotel].email);
                                            printf(" Nome do Dono %s  \n", cadastro_hotel[posicao_hotel].nome_dono);
                                            printf(" CNPJ %f \n ", cadastro_hotel[posicao_hotel].cnpj);
                                            printf(" Telefone do Dono %f \n ", cadastro_hotel[posicao_hotel].telefone_dono);
                                            printf(" Telefone do Hotel %f  \n ", cadastro_hotel[posicao_hotel].telefone);
                                            printf(" Horario Check-in %f \n ", cadastro_hotel[posicao_hotel].horario_chegar);
                                            printf(" Horario Check-out %f \n ", cadastro_hotel[posicao_hotel].horario_sair);
                                            printf(" Lucro Produtos %f \n ", cadastro_hotel[posicao_hotel].lucro_produtos_vendidos);
                                            printf(" ------------------------------------------------ \n\n");
                                            break; // fecha o case 2

                                    }// Fecha o switch de ver os produtos
                                    break; // Fecha o case 2
                                case 3:
                                    if (contador_hotel == 0) {
                                        printf(" ----- Nenhum Hotel cadastrado ----- \n");
                                        break;
                                    }
                                    // Realiza a atualizacao do hotel
                                    posicao_hotel = -1;
                                    printf(" ----- Editar Hoteis -----\n");
                                    // Pesquisa o hotel
                                    printf(" Digite o Nome Fantasia Hotel \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.nome_social);
                                    posicao_hotel = PosicaoHotel(cadastro_hotel, &cadastro_hotel_dados, contador_hotel);
                                    if (posicao_hotel == -1) {
                                        printf(" Hotel nao cadastrado \n");
                                        break;
                                    }
                                    printf(" ----- Hotel Encontrado ----- \n");
                                    printf(" Digite os novos dados \n");
                                    printf(" Digite o Nome Social \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.nome_social);
                                    printf(" Digite a Razao Social \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.razao_social);
                                    printf(" Inscricao Estadual \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.inscricao_estadual);
                                    printf(" Digite o Endereco \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.endereco);
                                    printf(" Digite o E-mail \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.email);
                                    printf(" Digite o nome do dono \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.nome_dono);
                                    printf(" Digite o CNPJ \n ");
                                    scanf("%f", &cadastro_hotel_dados.cnpj);
                                    printf(" Digite o Telefone do dono \n ");
                                    scanf("%f", &cadastro_hotel_dados.telefone_dono);
                                    printf(" Digite o Telefone do Hotel \n ");
                                    scanf("%f", &cadastro_hotel_dados.telefone);
                                    printf(" Horario Check-in \n ");
                                    scanf("%f", &cadastro_hotel_dados.horario_chegar);
                                    printf(" Horario Check-out \n ");
                                    scanf("%f", &cadastro_hotel_dados.horario_sair);
                                    printf(" Lucro Produtos Vendidos \n ");
                                    scanf("%f", &cadastro_hotel_dados.lucro_produtos_vendidos);
                                    atualizaHotel(cadastro_hotel, &cadastro_hotel_dados, contador_hotel, posicao_hotel);
                                    printf(" ----- Atualizado com Sucesso ----- \n");
                                    break; // Fecha o case 3
                                case 4:
                                    posicao_hotel = -1;
                                    deletar_hotel = 0;
                                    if (contador_hotel == 0) {
                                        printf(" ----- Nenhum Hotel Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Deletar Hotel ----- \n");
                                    printf(" Para deletar o Nome: \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hotel_dados.nome_social);
                                    posicao_hotel = PosicaoHotel(cadastro_hotel, &cadastro_hotel_dados, contador_hotel);
                                    if (posicao_hotel == -1) {
                                        printf(" ----- Hotel nao Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Hotel encontrado -----\n");
                                    printf(" ----- Deseja Realmente deletar? \n");
                                    printf(" 1 - Sim \n");
                                    printf(" 2 - Nao \n ");
                                    scanf("%d", &deletar_hotel);
                                    switch (deletar_hotel) {
                                        case 1:
                                            printf(" ----- Hotel Deletado -----\n");
                                            for (deletar_busca_hotel = 0; deletar_busca_hotel <= contador_hotel; deletar_busca_hotel++) {
                                                cadastro_hotel[posicao_hotel + deletar_busca_hotel].cnpj = cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].cnpj;
                                                cadastro_hotel[posicao_hotel + deletar_busca_hotel].telefone = cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].telefone;
                                                cadastro_hotel[posicao_hotel + deletar_busca_hotel].telefone_dono = cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].telefone_dono;
                                                cadastro_hotel[posicao_hotel + deletar_busca_hotel].horario_sair = cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].horario_sair;
                                                cadastro_hotel[posicao_hotel + deletar_busca_hotel].horario_chegar = cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].horario_chegar;
                                                cadastro_hotel[posicao_hotel + deletar_busca_hotel].lucro_produtos_vendidos = cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].lucro_produtos_vendidos;
                                                strcpy(cadastro_hotel[posicao_hotel + deletar_busca_hotel].nome_social, cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].nome_social);
                                                strcpy(cadastro_hotel[posicao_hotel + deletar_busca_hotel].razao_social, cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].razao_social);
                                                strcpy(cadastro_hotel[posicao_hotel + deletar_busca_hotel].email, cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].email);
                                                strcpy(cadastro_hotel[posicao_hotel + deletar_busca_hotel].inscricao_estadual, cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].inscricao_estadual);
                                                strcpy(cadastro_hotel[posicao_hotel + deletar_busca_hotel].nome_dono, cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].nome_dono);
                                                strcpy(cadastro_hotel[posicao_hotel + deletar_busca_hotel].endereco, cadastro_hotel[posicao_hotel + deletar_busca_hotel + 1].endereco);


                                            }
                                            contador_hotel--;
                                            // Arquivo
                                            cadastro_hotel = realloc(cadastro_hotel, (contador_hotel + 2) * sizeof (criar_Hotel));
                                            FILE* arquivo_hotel = fopen("hotel.txt", "wb");
                                            fwrite(cadastro_hotel, sizeof (criar_Hotel), contador_hotel, arquivo_hotel);
                                            fflush(arquivo_hotel);
                                            fclose(arquivo_hotel);
                                            // Contador do Hotel
                                            FILE* contadores_hotel = fopen("contador.txt", "wb");
                                            fwrite(&contador_hotel, sizeof (int), 1, contadores_hotel);
                                            fflush(contadores_hotel);
                                            fclose(contadores_hotel);
                                            // Fim Contador Do Hotel
                                            break;
                                        case 2:
                                            printf(" Produto nao deletado \n");
                                            break;
                                        default:
                                            printf(" Comando invalido \n");
                                    }

                                    break; // Fecha o case 4
                                default:
                                    printf(" Comando Invalido \n");
                                    break;
                                case 5:
                                    printf(" ----- Retornado -----");
                                    break;
                            }

                        }


                        break;

                    case 2:
                        // Comeco codigo dos Hoteis
                        //Aloca o produto e declara

                        //Aloca a Memoria




                        hospede_Home = 0;

                        // Inicio codigo do cadastro de Hospede
                        while (hospede_Home != 5) {

                            printf(" 1 - Cadastrar Hospede \n");
                            printf(" 2 - Ver Hospede \n");
                            printf(" 3 - Editar Hospede \n");
                            printf(" 4 - Excluir Hospede \n");
                            printf(" 5 - Sair \n");
                            scanf("%d", &hospede_Home);
                            //Switch do Menu
                            switch (hospede_Home) {
                                    // Caso 1 para cadastrar Hospede
                                case 1:
                                    //Cadastra e verifica o Hospede
                                    posicao_hospede = 0;
                                    codigo_cadastro_hospede = 0;
                                    printf("----- Cadastro de Hospedes ----- \n");
                                    printf(" Digite o codigo do Hospede \n");
                                    scanf("%d", &cadastro_hospede_dados.codigo);
                                    verificar_hospede = VerificarHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                    if (verificar_hospede == 1) {
                                        printf(" Codigo ja cadastrado tente outro \n");
                                        break;
                                    }
                                    setbuf(stdin, NULL);
                                    printf(" Digite o nome do Hospede \n");
                                    scanf("%[^\n]s", &cadastro_hospede_dados.nome_social);
                                    setbuf(stdin, NULL);
                                    printf(" Digite o sexo \n ");
                                    scanf("%[^\n]s", &cadastro_hospede_dados.sexo);
                                    printf(" Digite o Estado Civil \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.estado_civil);
                                    printf(" Digite o Endereco \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.endereco);
                                    printf(" Digite o E-mail \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.email);
                                    printf(" Digite o CPF \n ");
                                    scanf("%f", &cadastro_hospede_dados.cpf);
                                    printf(" Digite o Telefone  \n ");
                                    scanf("%f", &cadastro_hospede_dados.telefone);
                                    printf(" Digite a data de nascimento \n ");
                                    printf(" DD/MM/AA \n");
                                    scanf("%d/%d/%d", &cadastro_hospede_dados.dia, &cadastro_hospede_dados.mes, &cadastro_hospede_dados.ano);

                                    CadastroHospede(cadastro_hospede, &cadastro_hospede_dados, &contador_hospede);
                                    //Soma um na variavel Contadora
                                    cadastro_hospede = realloc(cadastro_hospede, (contador_hospede + 2) * sizeof (criar_Hospede));
                                    printf(" ----- Cadastrado com Sucesso ----- \n");
                                    break; // Fecha o case do switch principal
                                case 2:
                                    if (contador_hospede == 0) {
                                        printf(" ----- Nenhum Hospede Cadastrado\n");
                                        break;
                                    }
                                    // Parte para listar todos os Hospedes
                                    printf("----- Ver Hospedes -----\n");
                                    printf(" 1 - Ver todos\n");
                                    printf(" 2 - Pesquisar por Codigo\n");
                                    scanf("%d", &listar_hospede);
                                    switch (listar_hospede) {
                                        case 1:
                                            verHospede(cadastro_hospede, contador_hospede);
                                            break; // Fecha o case 1
                                        case 2:
                                            printf(" ----- Pesquisar por Codigo -----\n");
                                            printf(" ----- Digite o Codigo do Hospede ----- \n");
                                            scanf("%d", &cadastro_hospede_dados.codigo);
                                            posicao_hospede = PosicaoHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                            if (posicao_hospede == -1) {
                                                printf("----- Hospede nao encontrado -----\n");
                                                break;
                                            }
                                            printf(" ------------------------------------------------ \n");
                                            printf(" Nome  %s \n", cadastro_hospede[posicao_hospede].nome_social);
                                            printf(" Sexo %s  \n", cadastro_hospede[posicao_hospede].sexo);
                                            printf(" Estado Civil %s  \n", cadastro_hospede[posicao_hospede].estado_civil);
                                            printf(" Endereco %s   \n", cadastro_hospede[posicao_hospede].endereco);
                                            printf(" E-mail  %s \n", cadastro_hospede[posicao_hospede].email);
                                            printf(" CPF %f \n ", cadastro_hospede[posicao_hospede].cpf);
                                            printf(" Telefone %f  \n ", cadastro_hospede[posicao_hospede].telefone);
                                            printf(" Data de Nascimento %d/%d/%d \n ", cadastro_hospede[posicao_hospede].dia, cadastro_hospede[posicao_hospede].mes, cadastro_hospede[posicao_hospede].ano);
                                            printf(" Codigo %d \n\n ", cadastro_hospede[posicao_hospede].codigo);
                                            printf(" ------------------------------------------------ \n\n");
                                            break; // fecha o case 2

                                    }// Fecha o switch de ver hospedes
                                    break; // Fecha o case 2
                                case 3:
                                    if (contador_hospede == 0) {
                                        printf(" ----- Nenhum Hospede cadastrado ----- \n");
                                        break;
                                    }
                                    posicao_hospede = -1;
                                    printf(" ----- Editar Hospedes -----\n");
                                    printf(" ----- Digite o Codigo do Hospede ----- \n");
                                    scanf("%d", &cadastro_hospede_dados.codigo);
                                    posicao_hospede = PosicaoHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                    if (posicao_hospede == -1) {
                                        printf(" Hospede nao cadastrado \n");
                                        break;
                                    }
                                    printf(" ----- Hospede Encontrado ----- \n");
                                    printf(" Digite os novos dados \n");
                                    printf(" Digite o nome do Hospede \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.nome_social);
                                    printf(" Digite o sexo \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.sexo);
                                    printf(" Digite o Estado Civil \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.estado_civil);
                                    printf(" Digite o Endereco \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.endereco);
                                    printf(" Digite o E-mail \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_hospede_dados.email);
                                    printf(" Digite o CPF \n ");
                                    scanf("%f", &cadastro_hospede_dados.cpf);
                                    printf(" Digite o Telefone  \n ");
                                    scanf("%f", &cadastro_hospede_dados.telefone);
                                    printf(" Digite a data de nascimento \n ");
                                    scanf("%d/%d/%d", &cadastro_hospede_dados.dia, &cadastro_hospede_dados.mes, &cadastro_hospede_dados.ano);
                                    atualizaHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede, posicao_hospede);
                                    printf(" ----- Atualizado com Sucesso ----- \n");
                                    break; // Fecha o case 3
                                case 4:
                                    posicao_hospede = -1;
                                    deletar_hospede = 0;
                                    if (contador_hospede == 0) {
                                        printf(" ----- Nenhum Hospede Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Deletar Hospede ----- \n");
                                    printf(" ----- Digite o Codigo do Hospede ----- \n");
                                    scanf("%d", &cadastro_hospede_dados.codigo);
                                    posicao_hospede = PosicaoHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                    if (posicao_hospede == -1) {
                                        printf(" ----- Hospede nao Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Hospede encontrado -----\n");
                                    printf(" ----- Deseja Realmente deletar? \n");
                                    printf(" 1 - Sim \n");
                                    printf(" 2 - Nao \n ");
                                    scanf("%d", &deletar_hospede);
                                    switch (deletar_hospede) {
                                        case 1:
                                            printf(" ----- Hospede Deletado -----\n");
                                            for (deletar_busca_hospede = 0; deletar_busca_hospede <= contador_hospede; deletar_busca_hospede++) {
                                                cadastro_hospede[posicao_hospede + deletar_busca_hospede].cpf = cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].cpf;
                                                cadastro_hospede[posicao_hospede + deletar_busca_hospede].telefone = cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].telefone;
                                                cadastro_hospede[posicao_hospede + deletar_busca_hospede].ano = cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].ano;
                                                cadastro_hospede[posicao_hospede + deletar_busca_hospede].mes = cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].mes;
                                                cadastro_hospede[posicao_hospede + deletar_busca_hospede].dia = cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].dia;
                                                cadastro_hospede[posicao_hospede + deletar_busca_hospede].codigo = cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].codigo;
                                                strcpy(cadastro_hospede[posicao_hospede + deletar_busca_hospede].nome_social, cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].nome_social);
                                                strcpy(cadastro_hospede[posicao_hospede + deletar_busca_hospede].sexo, cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].sexo);
                                                strcpy(cadastro_hospede[posicao_hospede + deletar_busca_hospede].email, cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].email);
                                                strcpy(cadastro_hospede[posicao_hospede + deletar_busca_hospede].estado_civil, cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].estado_civil);
                                                strcpy(cadastro_hospede[posicao_hospede + deletar_busca_hospede].endereco, cadastro_hospede[posicao_hospede + deletar_busca_hospede + 1].endereco);

                                            }
                                            contador_hospede--;
                                            cadastro_hospede = realloc(cadastro_hospede, (contador_hospede + 2) * sizeof (criar_Hospede));
                                            FILE* arquivo_hospede = fopen("hospede.txt", "wb");
                                            fwrite(cadastro_hospede, sizeof (criar_Hospede), contador_hospede, arquivo_hospede);
                                            fclose(arquivo_hospede);
                                            // Contador do Hotel
                                            FILE* contadores_hospede = fopen("contador_hospede.txt", "wb");
                                            fwrite(&contador_hospede, sizeof (int), 1, contadores_hospede);
                                            fclose(contadores_hospede);
                                            break;
                                        case 2:
                                            printf(" Hospede nao deletado \n");
                                            break;
                                        default:
                                            printf(" Comando invalido \n");
                                    }

                                    break; // Fecha o case 4
                                default:
                                    printf(" Comando Invalido \n");
                                    break;
                                case 5:
                                    printf(" ----- Retornado ----- \n");
                                    break;
                            }

                        }

                        break;


                    case 3:
                        // Comeco codigo dos produtos
                        //Aloca o produto e declara

                        //Aloca a Memoria






                        fornecedor_Home = 0;
                        // Inicio codigo do cadastro de Fornecedor
                        while (fornecedor_Home != 5) {
                            if (contador_hotel == 0) {
                                printf(" ----- Nenhum Hotel cadastrado ----- \n");
                                break;
                            }
                            printf(" 1 - Cadastrar Fornecedor \n");
                            printf(" 2 - Ver Fornecedor \n");
                            printf(" 3 - Editar Fornecedor \n");
                            printf(" 4 - Excluir Fornecedor \n");
                            printf(" 5 - Sair \n");
                            scanf("%d", &fornecedor_Home);
                            //Switch do Menu
                            switch (fornecedor_Home) {
                                    // Caso 1 para cadastrar Fornecedor
                                case 1:
                                    //Cadastra e verifica o Fornecedor
                                    posicao_fornecedor = 0;
                                    codigo_cadastro_fornecedor = 0;
                                    printf("----- Cadastro de Fornecedor ----- \n");
                                    printf(" Digite o Nome Fantasia do Fornecedor \n");
                                    setbuf(stdin, NULL);

                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.nome_social);
                                    verificar_fornecedor = VerificarFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor);
                                    if (verificar_fornecedor == 1) {
                                        printf(" Nome ja cadastrado tente outro \n");
                                        break;
                                    }
                                    verificar_fornecedor = 0;
                                    printf(" Digite o Codigo do Fornecedor \n");
                                    scanf("%d", &cadastro_fornecedorl_dados.codigo);

                                    // Ve se o codigo informado esta disponivel
                                    verificar_fornecedor = Verificar_Fornecedor_Codigo(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor);
                                    if (verificar_fornecedor == 1) {
                                        printf(" Codigo ja cadastrado tente outro \n");
                                        break;
                                    }



                                    printf(" Digite a Razao Social \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.nome_social);
                                    printf(" Inscricao Estadual \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.inscricao_estadual);
                                    printf(" Digite o Endereco \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.endereco);
                                    printf(" Digite o E-mail \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.email);
                                    printf(" Digite o CNPJ \n ");
                                    scanf("%f", &cadastro_fornecedorl_dados.cnpj);
                                    printf(" Digite o Telefone do Fornecedor \n ");
                                    scanf("%f", &cadastro_fornecedorl_dados.telefone);

                                    CadastroFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, &contador_fornecedor);
                                    //Soma um na variavel Contadora
                                    cadastro_fornecedor = realloc(cadastro_fornecedor, (contador_fornecedor + 2) * sizeof (criar_Fornecedor));
                                    printf(" ----- Cadastrado com Sucesso ----- \n");
                                    break; // Fecha o case do switch principal
                                case 2:
                                    if (contador_fornecedor == 0) {
                                        printf(" ----- Nenhum Fornecedor Cadastrado\n");
                                        break;
                                    }
                                    // Parte para listar todos Fornecedores
                                    printf("----- Ver Fornecedores -----\n");
                                    printf(" 1 - Ver todos\n");
                                    printf(" 2 - Pesquisar por Nome\n");
                                    scanf("%d", &listar_fornecedor);
                                    switch (listar_fornecedor) {
                                        case 1:
                                            verFornecedor(cadastro_fornecedor, contador_fornecedor);
                                            break; // Fecha o case 1
                                        case 2:
                                            printf(" ----- Pesquisar por Nome -----\n");
                                            printf(" ----- Digite o Nome do Fornecedor ----- \n");
                                            setbuf(stdin, NULL);
                                            scanf("%[^\n]s", &cadastro_fornecedorl_dados.nome_social);
                                            posicao_fornecedor = PosicaoFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor);
                                            if (posicao_fornecedor == -1) {
                                                printf("----- Fornecedor nao encontrado -----\n");
                                                break;
                                            }
                                            printf(" ------------------------------------------------ \n");
                                            printf(" Nome Fantasia %s \n", cadastro_fornecedor[posicao_fornecedor].nome_social);
                                            printf(" Razao Social %s  \n", cadastro_fornecedor[posicao_fornecedor].razao_social);
                                            printf(" Inscricao Estadual %s  \n", cadastro_fornecedor[posicao_fornecedor].inscricao_estadual);
                                            printf(" Endereco %s   \n", cadastro_fornecedor[posicao_fornecedor].endereco);
                                            printf(" E-mail  %s \n", cadastro_fornecedor[posicao_fornecedor].email);
                                            printf(" CNPJ %f \n ", cadastro_fornecedor[posicao_fornecedor].cnpj);
                                            printf(" Telefone do Fornecedor %f  \n ", cadastro_fornecedor[posicao_fornecedor].telefone);
                                            printf(" Codigo %d \n ", cadastro_fornecedor[posicao_fornecedor].codigo);
                                            printf(" ------------------------------------------------ \n\n");
                                            break; // fecha o case 2

                                    }// Fecha o switch de ver os Fornecedores
                                    break; // Fecha o case 2
                                case 3:
                                    if (contador_fornecedor == 0) {
                                        printf(" ----- Nenhum Fornecedor cadastrado ----- \n");
                                        break;
                                    }
                                    posicao_fornecedor = -1;
                                    printf(" ----- Editar Fornecedor -----\n");

                                    printf(" Digite o Nome Fantasia Fornecedor \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.nome_social);
                                    posicao_fornecedor = PosicaoFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor);
                                    if (posicao_fornecedor == -1) {
                                        printf(" Fornecedor nao cadastrado \n");
                                        break;
                                    }
                                    printf(" ----- Fornecedor Encontrado ----- \n");
                                    printf(" Digite os novos dados \n");
                                    printf(" Digite o Nome Social \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.nome_social);
                                    printf(" Digite a Razao Social \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.razao_social);
                                    printf(" Inscricao Estadual \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.inscricao_estadual);
                                    printf(" Digite o Endereco \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.endereco);
                                    printf(" Digite o E-mail \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.email);
                                    printf(" Digite o CNPJ \n ");
                                    scanf("%f", &cadastro_fornecedorl_dados.cnpj);
                                    printf(" Digite o Codigo do Fornecedor \n ");
                                    scanf("%d", &cadastro_fornecedorl_dados.codigo);
                                    printf(" Digite o Telefone do Fornecedor \n ");
                                    scanf("%f", &cadastro_fornecedorl_dados.telefone);
                                    atualizaFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor, posicao_fornecedor);
                                    printf(" ----- Atualizado com Sucesso ----- \n");
                                    break; // Fecha o case 3
                                case 4:
                                    posicao_fornecedor = -1;
                                    deletar_fornecedor = 0;
                                    if (contador_fornecedor == 0) {
                                        printf(" ----- Nenhum Fornecedor Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Deletar Fornecedor ----- \n");
                                    printf(" Para deletar digite o Nome: \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_fornecedorl_dados.nome_social);
                                    posicao_fornecedor = PosicaoFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor);
                                    if (posicao_fornecedor == -1) {
                                        printf(" ----- Fornecedor nao Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Fornecedor encontrado -----\n");
                                    printf(" ----- Deseja Realmente deletar? \n");
                                    printf(" 1 - Sim \n");
                                    printf(" 2 - Nao \n ");
                                    scanf("%d", &deletar_fornecedor);
                                    switch (deletar_fornecedor) {
                                        case 1:
                                            printf(" ----- Fornecedor Deletado -----\n");
                                            for (deletar_busca_fornecedor = 0; deletar_busca_fornecedor <= contador_fornecedor; deletar_busca_fornecedor++) {
                                                cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].cnpj = cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].cnpj;
                                                cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].telefone = cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].telefone;
                                                cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].codigo = cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].codigo;
                                                strcpy(cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].nome_social, cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].nome_social);
                                                strcpy(cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].razao_social, cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].razao_social);
                                                strcpy(cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].email, cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].email);
                                                strcpy(cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].inscricao_estadual, cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].inscricao_estadual);
                                                strcpy(cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor].endereco, cadastro_fornecedor[posicao_fornecedor + deletar_busca_fornecedor + 1].endereco);

                                            }
                                            contador_fornecedor--;
                                            cadastro_fornecedor = realloc(cadastro_fornecedor, (contador_fornecedor + 2) * sizeof (criar_Fornecedor));
                                            FILE* arquivo_fornecedor = fopen("fornecedor.txt", "wb");
                                            fwrite(cadastro_fornecedor, sizeof (criar_Fornecedor), contador_fornecedor, arquivo_fornecedor);
                                            fclose(arquivo_fornecedor);
                                            // Contador do Hotel
                                            FILE* contadores_fornecedor = fopen("contador_fornecedor.txt", "wb");
                                            fwrite(&contador_fornecedor, sizeof (int), 1, contadores_fornecedor);
                                            fclose(contadores_fornecedor);
                                            break;
                                        case 2:
                                            printf(" Fornecedor nao deletado \n");
                                            break;
                                        default:
                                            printf(" Comando invalido \n");
                                    }

                                    break; // Fecha o case 4
                                default:
                                    printf(" Comando Invalido \n");
                                    break;
                                case 5:
                                    printf(" ----- Retornado -----");
                                    break;
                            }

                        }

                        break;

                    case 4:
                        // Comeco codigo dos produtos
                        //Aloca o produto e declara





                        // Variavel de procurar o produtar e buscar posicao


                        // Inicio codigo
                        produto_Home = 0;
                        while (produto_Home != 5) {
                            if (contador_hotel == 0) {
                                printf(" ----- Nenhum Hotel cadastrado ----- \n");
                                break;
                            }
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
                                            FILE* arquivo_produto = fopen("produto.txt", "wb");
                                            fwrite(cadastro_produto, sizeof (cadastro_Prod), contador_produto, arquivo_produto);
                                            fclose(arquivo_produto);
                                            // Contador do Hotel
                                            FILE* contadores_produto = fopen("contador_produto.txt", "wb");
                                            fwrite(&contador_produto, sizeof (int), 1, contadores_produto);
                                            fclose(contadores_produto);
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

                        break;

                    case 5:
                        // Comeco codigo doa Categoria
                        //Aloca a Categoria e declara

                        // Aloca a Memoria




                        // Variavel de procurar a categoria e buscar posicao



                        // Inicio codigo
                        // Realiza o crud da categoria
                        categoria_Home = 0;
                        while (categoria_Home != 5) {
                            if (contador_hotel == 0) {
                                printf(" ----- Nenhum Hotel cadastrado ----- \n");
                                break;
                            }
                            printf(" 1 - Cadastrar Categoria \n");
                            printf(" 2 - Ver Categoria \n");
                            printf(" 3 - Editar Categoria \n");
                            printf(" 4 - Excluir Categoria \n");
                            printf(" 5 - Sair \n");
                            scanf("%d", &categoria_Home);
                            //Switch do Menu
                            switch (categoria_Home) {
                                    // Caso 1 para cadastrar Categoria
                                case 1:
                                    verificar_categoria = 0;
                                    posicao_categoria = 0;
                                    codigo_cadastro_categoria = 0;
                                    printf("----- Cadastro de Categoria Acomodacoes ----- \n");
                                    printf(" Digite o Codigo da Categoria \n");
                                    scanf("%d", &cadastro_categoria_dados.codigo);
                                    // Ve se o codigo informado esta disponivel
                                    verificar_categoria = Verificar_Categoria(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                                    if (verificar_categoria == 1) {
                                        printf(" Codigo ja cadastrado tente outro \n");
                                        break;
                                    }
                                    verificar_categoria = 0;
                                    printf(" Digite o Tipo da Categoria \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_categoria_dados.nome);
                                    verificar_categoria = Verificar_Categoria_Nome(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                                    if (verificar_categoria == 1) {
                                        printf(" Tipo ja cadastrado tente outro \n");
                                        break;
                                    }


                                    //  Cadastra a Categoria
                                    printf(" Digite a Descricao da categoria \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_categoria_dados.descricao);
                                    printf(" Digite o valor da Diaria \n ");
                                    scanf("%f", &cadastro_categoria_dados.valor);
                                    printf(" Digite a quantidade Comportada \n ");
                                    scanf("%d", &cadastro_categoria_dados.quantidade_comportada);

                                    //Envia para a variavel principal
                                    Cadastro_Categoria(cadastro_categoria, &cadastro_categoria_dados, &contador_categoria);


                                    cadastro_categoria = realloc(cadastro_categoria, (contador_categoria + 2) * sizeof (cadastro_categoria_acomodacao));
                                    printf(" ----- Cadastrado com Sucesso ----- \n");
                                    break; // Fecha o case do switch principal
                                case 2:
                                    if (contador_categoria == 0) {
                                        printf(" ----- Nenhuma Categoria Cadastrado\n");
                                        break;
                                    }
                                    // Parte para listar todos operadores
                                    printf("----- Ver Categorias -----\n");
                                    printf(" 1 - Ver todos\n");
                                    printf(" 2 - Pesquisar por codigo\n");
                                    scanf("%d", &listar_categoria);
                                    switch (listar_categoria) {
                                        case 1:
                                            ver_Categoria(cadastro_categoria, contador_categoria);
                                            break; // Fecha o case 1
                                        case 2:
                                            printf(" ----- Pesquisar por Codigo -----\n");
                                            printf(" ----- Digite o Codigo ----- \n");
                                            scanf("%d", &cadastro_categoria_dados.codigo);
                                            posicao_categoria = Posicao_Categoria(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                                            if (posicao_categoria == -1) {
                                                printf("----- Codigo nao encontrado -----\n");
                                                break;
                                            }
                                            printf(" ------------------------------------------------ \n");
                                            printf("Codigo: %d \n", cadastro_categoria[posicao_categoria].codigo);
                                            printf("Descricao: %s \n", cadastro_categoria[posicao_categoria].descricao);
                                            printf("Tipo: %s \n", cadastro_categoria[posicao_categoria].nome);
                                            printf("Valor Diaria: %f \n", cadastro_categoria[posicao_categoria].valor);
                                            printf("Quantidade Comportada: %d \n", cadastro_categoria[posicao_categoria].quantidade_comportada);
                                            printf(" ------------------------------------------------ \n\n");
                                            break; // fecha o case 2

                                    }// Fecha o switch de ver as categorias
                                    break; // Fecha o case 2
                                case 3:
                                    if (contador_categoria == 0) {
                                        printf(" ----- Nenhuma Categoria Cadastrada ----- \n");
                                        break;
                                    }
                                    posicao_categoria = -1;
                                    printf(" ----- Editar Categoria -----\n");
                                    printf(" Digite o codigo da Categoria \n");
                                    scanf("%d", &cadastro_categoria_dados.codigo);
                                    posicao_categoria = Posicao_Categoria(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                                    if (posicao_categoria == -1) {
                                        printf(" Codigo nao cadastrado \n");
                                        break;
                                    }
                                    printf(" ----- Codigo Encontrado ----- \n");

                                    printf(" Digite os novos dados \n");
                                    printf("Digite o novo codigo :");
                                    scanf("%d", &cadastro_categoria_dados.codigo);
                                    printf(" Digite o Tipo da Categoria \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_categoria_dados.nome);
                                    printf(" Digite a Descricao da categoria \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_categoria_dados.descricao);
                                    printf(" Digite o valor da Diaria \n ");
                                    scanf("%f", &cadastro_categoria_dados.valor);
                                    printf(" Digite a quantidade Comportada \n ");
                                    scanf("%d", &cadastro_categoria_dados.quantidade_comportada);

                                    atualiza_Categoria(cadastro_categoria, &cadastro_categoria_dados, posicao_categoria, contador_categoria);
                                    printf(" ----- Atualizado com Sucesso ----- \n");
                                    break; // Fecha o case 3
                                case 4:
                                    posicao_categoria = -1;
                                    deletar_categoria = 0;
                                    if (contador_categoria == 0) {
                                        printf(" ----- Nenhuma Categoria Cadastrada ----- \n");
                                        break;
                                    }
                                    printf(" ----- Deletar Categoria ----- \n");
                                    printf(" Para deletar digite o codigo: \n");
                                    scanf("%d", &cadastro_categoria_dados.codigo);
                                    posicao_categoria = Posicao_Categoria(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                                    if (posicao_categoria == -1) {
                                        printf(" ----- Codigo nao Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Categoria encontrada -----\n");
                                    printf(" ----- Deseja Realmente deletar? Deletara tambem todas acomodacoes nessa categoria \n");
                                    printf(" 1 - Sim \n");
                                    printf(" 2 - Nao \n ");
                                    scanf("%d", &deletar_categoria);
                                    switch (deletar_categoria) {
                                        case 1:
                                            printf(" ----- Categoria Deletada ----- \n");
                                            // Deleta a acomodacao que esta no codigo
                                            for (deletar_acomodacao_fim = 0; deletar_acomodacao_fim <= contador_acomodacao; deletar_acomodacao_fim++) {
                                                while (strcmp((cadastro_categoria + posicao_categoria)->nome, (cadastro_acomodacao + deletar_acomodacao_fim)->categoria) == 0) {
                                                    if (strcmp((cadastro_categoria + posicao_categoria)->nome, (cadastro_acomodacao + deletar_acomodacao_fim)->categoria) == 0) {
                                                        for (deletar_acomodacao = 0; deletar_acomodacao <= contador_acomodacao; deletar_acomodacao++) {

                                                            cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao].codigo, cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao + 1].codigo;
                                                            strcpy(cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao].facilidades, cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao + 1].facilidades);
                                                            strcpy(cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao].descricao, cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao + 1].descricao);
                                                            strcpy(cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao].categoria, cadastro_acomodacao[deletar_acomodacao_fim + deletar_acomodacao + 1].categoria);
                                                        }
                                                        contador_acomodacao--;
                                                        cadastro_acomodacao = realloc(cadastro_acomodacao, (contador_acomodacao + 2) * sizeof (criar_Acomodacao));
                                                        FILE* arquivo_acomodacao = fopen("acomodacao.txt", "wb");
                                                        fwrite(cadastro_acomodacao, sizeof (criar_Acomodacao), contador_acomodacao, arquivo_acomodacao);
                                                        fclose(arquivo_acomodacao);
                                                        // Contador do Hotel
                                                        FILE* contadores_acomodacao = fopen("contador_acomodacao.txt", "wb");
                                                        fwrite(&contador_acomodacao, sizeof (int), 1, contadores_acomodacao);
                                                        fclose(contadores_acomodacao);
                                                    }

                                                }
                                            }
                                            // deleta a categoria


                                            for (deletar_categoria = 0; deletar_categoria <= contador_categoria; deletar_categoria++) {
                                                cadastro_categoria[posicao_categoria + deletar_categoria].codigo = cadastro_categoria[posicao_categoria + deletar_categoria + 1].codigo;
                                                cadastro_categoria[posicao_categoria + deletar_categoria].valor = cadastro_categoria[posicao_categoria + deletar_categoria + 1].valor;
                                                cadastro_categoria[posicao_categoria + deletar_categoria].quantidade_comportada = cadastro_categoria[posicao_categoria + deletar_categoria + 1].quantidade_comportada;
                                                strcpy(cadastro_categoria[posicao_categoria + deletar_categoria].descricao, cadastro_categoria[posicao_categoria + deletar_categoria + 1].descricao);
                                                strcpy(cadastro_categoria[posicao_categoria + deletar_categoria].nome, cadastro_categoria[posicao_categoria + deletar_categoria + 1].nome);

                                            }
                                            contador_categoria--;
                                            cadastro_categoria = realloc(cadastro_categoria, (contador_categoria + 2) * sizeof (cadastro_categoria_acomodacao));
                                            FILE* arquivo_categoria = fopen("categoria.txt", "wb");
                                            fwrite(cadastro_categoria, sizeof (cadastro_categoria_acomodacao), contador_categoria, arquivo_categoria);
                                            fclose(arquivo_categoria);
                                            // Contador do Hotel
                                            FILE* contadores_categoria = fopen("contador_categoria.txt", "wb");
                                            fwrite(&contador_categoria, sizeof (int), 1, contadores_categoria);
                                            fclose(contadores_categoria);
                                            break;
                                        case 2:
                                            printf(" Categoria nao deletada \n");
                                            break;
                                        default:
                                            printf(" Comando invalido \n");
                                    }

                                    break; // Fecha o case 4
                            }

                        }

                        break;

                    case 6:
                        if (contador_categoria == 0) {
                            printf("Necessario Cadastrar categoria antes de acessar esse cadastro\n");
                        }

                        // Aloca a Memoria





                        // Inicio codigo
                        // Realiza o crud da Acomodacao
                        acomodacao_Home = 0;
                        while (acomodacao_Home != 5) {
                            if (contador_hotel == 0) {
                                printf(" ----- Nenhum Hotel cadastrado ----- \n");
                                break;
                            }
                            printf(" 1 - Cadastrar Acomodacao \n");
                            printf(" 2 - Ver Acomodacao \n");
                            printf(" 3 - Editar Acomodacao \n");
                            printf(" 4 - Excluir Acomodacao \n");
                            printf(" 5 - Sair \n");
                            scanf("%d", &acomodacao_Home);
                            //Switch do Menu
                            switch (acomodacao_Home) {
                                    // Caso 1 para cadastrar Acomodacao
                                case 1:
                                    verificar_acomodacao = 0;
                                    posicao_categoria = 0;
                                    codigo_cadastro_acomodacao = 0;
                                    printf("----- Cadastro de Acomodacoes ----- \n");
                                    printf(" Digite o Codigo da Acomodacao \n");
                                    scanf("%d", &cadastro_acomodacao_dados.codigo);
                                    // Ve se o codigo informado esta disponivel
                                    verificar_acomodacao = Verificar_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                    if (verificar_acomodacao == 1) {
                                        printf(" Codigo ja cadastrado tente outro \n");
                                        break;
                                    }
                                    verificar_acomodacao = 0;


                                    //  Cadastra a Categoria
                                    printf(" Digite a Descricao da categoria \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_acomodacao_dados.descricao);
                                    printf(" Digite as facilidades da acomodacao \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_acomodacao_dados.facilidades);
                                    ver_Categoria_tipo(cadastro_categoria, contador_categoria);
                                    printf(" Digite a categoria da acomodacao que deseja cadastrar \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_categoria_dados.nome);
                                    verificar_acomodacao = Verificar_Categoria_tipo(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                                    strcpy(cadastro_acomodacao_dados.categoria, cadastro_categoria_dados.nome);
                                    if (verificar_acomodacao == 0) {
                                        printf("Categoria Digitada Invalida\n");
                                        break;

                                    }
                                    //Envia para a variavel principal
                                    Cadastro_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, &contador_acomodacao);


                                    cadastro_acomodacao = realloc(cadastro_acomodacao, (contador_acomodacao + 2) * sizeof (criar_Acomodacao));
                                    printf(" ----- Cadastrado com Sucesso ----- \n");
                                    break; // Fecha o case do switch principal
                                case 2:
                                    if (contador_acomodacao == 0) {
                                        printf(" ----- Nenhuma Acomodacao Cadastrada\n");
                                        break;
                                    }
                                    // Parte para listar todas as acomodacoes
                                    printf("----- Ver Acomodacoes -----\n");
                                    printf(" 1 - Ver todos\n");
                                    printf(" 2 - Pesquisar por codigo\n");
                                    scanf("%d", &listar_acomodacao);
                                    switch (listar_acomodacao) {
                                        case 1:
                                            ver_acomodacao(cadastro_acomodacao, contador_acomodacao);
                                            break; // Fecha o case 1
                                        case 2:
                                            printf(" ----- Pesquisar por Codigo -----\n");
                                            printf(" ----- Digite o Codigo ----- \n");
                                            scanf("%d", &cadastro_acomodacao_dados.codigo);
                                            posicao_categoria = Posicao_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                            if (posicao_categoria == -1) {
                                                printf("----- Codigo nao encontrado -----\n");
                                                break;
                                            }
                                            printf(" ------------------------------------------------ \n");
                                            printf("Codigo: %d \n", cadastro_acomodacao[posicao_categoria].codigo);
                                            printf("Descricao: %s \n", cadastro_acomodacao[posicao_categoria].descricao);
                                            printf("Facilidades: %s \n", cadastro_acomodacao[posicao_categoria].facilidades);
                                            printf("Categoria: %s \n", cadastro_acomodacao[posicao_categoria].categoria);
                                            printf(" ------------------------------------------------ \n\n");
                                            break; // fecha o case 2

                                    }// Fecha o switch de ver as acomodacoes
                                    break; // Fecha o case 2
                                case 3:
                                    if (contador_acomodacao == 0) {
                                        printf(" ----- Nenhuma Acomodacao Cadastrada ----- \n");
                                        break;
                                    }
                                    posicao_categoria = -1;
                                    printf(" ----- Editar Acomodacao -----\n");
                                    printf(" Digite o codigo da Acomodacao \n");
                                    scanf("%d", &cadastro_acomodacao_dados.codigo);
                                    posicao_categoria = Posicao_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                    if (posicao_categoria == -1) {
                                        printf(" Codigo nao cadastrado \n");
                                        break;
                                    }
                                    printf(" ----- Codigo Encontrado ----- \n");

                                    printf(" Digite os novos dados \n");
                                    printf("Digite o novo codigo :");
                                    scanf("%d", &cadastro_acomodacao_dados.codigo);
                                    printf(" Digite a Descricao da categoria \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_acomodacao_dados.descricao);
                                    printf(" Digite as facilidades da acomodacao \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_acomodacao_dados.facilidades);
                                    printf(" Digite a categoria da acomodacao \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_acomodacao_dados.categoria);

                                    atualiza_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, posicao_categoria, contador_acomodacao);
                                    printf(" ----- Atualizado com Sucesso ----- \n");
                                    break; // Fecha o case 3
                                case 4:
                                    posicao_categoria = -1;
                                    deletar_acomodacao = 0;
                                    if (contador_acomodacao == 0) {
                                        printf(" ----- Nenhuma Acomodacao Cadastrada ----- \n");
                                        break;
                                    }
                                    printf(" ----- Deletar Acomodacao ----- \n");
                                    printf(" Para deletar digite o codigo: \n");
                                    scanf("%d", &cadastro_acomodacao_dados.codigo);
                                    posicao_categoria = Posicao_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                    if (posicao_categoria == -1) {
                                        printf(" ----- Codigo nao Cadastrado ----- \n");
                                        break;
                                    }
                                    printf(" ----- Acomodacao encontrada -----\n");
                                    printf(" ----- Deseja Realmente deletar? \n");
                                    printf(" 1 - Sim \n");
                                    printf(" 2 - Nao \n ");
                                    scanf("%d", &deletar_acomodacao);
                                    switch (deletar_acomodacao) {
                                        case 1:
                                            printf(" ----- Acomodacao Deletada -----\n");
                                            for (deletar_acomodacao = 0; deletar_acomodacao <= contador_acomodacao; deletar_acomodacao++) {
                                                cadastro_acomodacao[posicao_categoria + deletar_acomodacao].codigo = cadastro_acomodacao[posicao_categoria + deletar_acomodacao + 1].codigo;
                                                strcpy(cadastro_acomodacao[posicao_categoria + deletar_acomodacao].categoria, cadastro_acomodacao[posicao_categoria + deletar_acomodacao + 1].categoria);
                                                strcpy(cadastro_acomodacao[posicao_categoria + deletar_acomodacao].facilidades, cadastro_acomodacao[posicao_categoria + deletar_acomodacao + 1].facilidades);
                                                strcpy(cadastro_acomodacao[posicao_categoria + deletar_acomodacao].descricao, cadastro_acomodacao[posicao_categoria + deletar_acomodacao + 1].descricao);

                                            }
                                            contador_acomodacao--;
                                            cadastro_acomodacao = realloc(cadastro_acomodacao, (contador_acomodacao + 2) * sizeof (criar_Acomodacao));
                                            FILE* arquivo_acomodacao = fopen("acomodacao.txt", "wb");
                                            fwrite(cadastro_acomodacao, sizeof (criar_Acomodacao), contador_acomodacao, arquivo_acomodacao);
                                            fclose(arquivo_acomodacao);
                                            // Contador do Hotel
                                            FILE* contadores_acomodacao = fopen("contador_acomodacao.txt", "wb");
                                            fwrite(&contador_acomodacao, sizeof (int), 1, contadores_acomodacao);
                                            fclose(contadores_acomodacao);
                                            break;
                                        case 2:
                                            printf(" Acomodacao nao deletada \n");
                                            break;
                                        default:
                                            printf(" Comando invalido \n");
                                    }

                                    break; // Fecha o case 4
                            }

                        }

                        break;

                    case 7:
                        // Comeco codigo dos produtos
                        //Aloca o produto e declara

                        // Aloca a Memoria







                        // Inicio codigo
                        // Realiza o crud dos produtos
                        operador_Home = 0;
                        while (operador_Home != 5) {
                            if (contador_hotel == 0) {
                                printf(" ----- Nenhum Hotel cadastrado ----- \n");
                                break;
                            }
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
                                    scanf("%[^\n]s", &cadastro_operadores_dados.usuario);
                                    verificar_operador = VerificarOperador_Login(cadastro_operadores, &cadastro_operadores_dados, contador_operador);
                                    if (verificar_operador == 1) {
                                        printf(" Usuario ja cadastrado tente outro \n");
                                        break;
                                    }
                                    //  Cadastra o operador
                                    printf(" Digite o Nome do Operador \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_operadores_dados.nome);
                                    printf(" Digite a senha \n ");
                                    scanf("%d", &cadastro_operadores_dados.senha);
                                    printf(" Permissao do Operador: \n");
                                    printf("Digite 0 - Tem permissao\n");
                                    printf("Digite 1 - Nao tem\n");
                                    printf(" 1 - Todo o Sistema\n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[0]);
                                    if (cadastro_operadores_dados.permissao[0] == 0) {
                                        cadastro_operadores_dados.permissao[1] = 0;
                                        cadastro_operadores_dados.permissao[2] = 0;
                                        cadastro_operadores_dados.permissao[3] = 0;
                                        cadastro_operadores_dados.permissao[4] = 0;
                                        cadastro_operadores_dados.permissao[5] = 0;
                                        Cadastro_Operador(cadastro_operadores, &cadastro_operadores_dados, &contador_operador);
                                        cadastro_operadores = realloc(cadastro_operadores, (contador_operador + 2) * sizeof (cadastro_Operadores));
                                        break;
                                    }
                                    printf(" 2 - Cadastro e Gestao \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[1]);
                                    printf(" 3 - Reservas \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[2]);
                                    printf(" 4 - Transacoes \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[3]);
                                    printf(" 5 - FeedBeck \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[4]);
                                    printf(" 6 - Importacao \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[5]);
                                    // verifica se algum digitado nao foi maior que 5
                                    for (operador_salvar = 0; operador_salvar < 6; operador_salvar++) {
                                        if (cadastro_operadores_dados.permissao[operador_salvar] > 1 && cadastro_operadores_dados.permissao[operador_salvar] < 0) {
                                            printf("Algum Numero digitado foi maior que 1 portando opcao invalida\n");
                                        }

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
                                            printf(" ------------------------------------------------ \n");
                                            printf("Codigo: %d \n", cadastro_operadores[posicao_operador].codigo);
                                            printf("Usuario: %s \n", cadastro_operadores[posicao_operador].usuario);
                                            printf("Nome: %s \n", cadastro_operadores[posicao_operador].nome);
                                            printf("Senha: %d \n", cadastro_operadores[posicao_operador].senha);
                                            printf("Permissoes:  \n");
                                            if (cadastro_operadores[posicao_operador].permissao[0] == 1) {
                                                printf("Todo Sistema\n");
                                                break;
                                            }
                                            if (cadastro_operadores[posicao_operador].permissao[1] == 1) {
                                                printf("Modulo De Cadastros\n");
                                            }
                                            if (cadastro_operadores[posicao_operador].permissao[2] == 1) {
                                                printf("Modulo De Reservas\n");
                                            }
                                            if (cadastro_operadores[posicao_operador].permissao[3] == 1) {
                                                printf("Modulo De Transacoes \n");
                                            }
                                            if (cadastro_operadores[posicao_operador].permissao[4] == 1) {
                                                printf("Modulo De Feedback\n");
                                            }
                                            if (cadastro_operadores[posicao_operador].permissao[5] == 1) {
                                                printf("Modulo De Importacao Exportacao\n");
                                            }
                                            printf(" ------------------------------------------------ \n\n");
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
                                    scanf("%[^\n]s", &cadastro_operadores_dados.usuario);
                                    printf(" Digite o codigo do operador \n");
                                    scanf("%d", &cadastro_operadores_dados.codigo);
                                    printf(" Digite o novo Nome do Operador \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_operadores_dados.nome);
                                    printf(" Digite a nova senha do operador \n ");
                                    scanf("%d", &cadastro_operadores_dados.senha);
                                    printf(" Permissao do Operador: \n");
                                    printf("Digite 1 - Tem permissao\n");
                                    printf("Digite 2 - Nao tem\n");
                                    printf(" 1 - Todo o Sistema\n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[0]);
                                    printf(" 2 - Cadastro e Gestao \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[1]);
                                    printf(" 3 - Reservas \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[2]);
                                    printf(" 4 - Transacoes \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[3]);
                                    printf(" 5 - FeedBeck \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[4]);
                                    printf(" 6 - Importacao \n");
                                    scanf("%d", &cadastro_operadores_dados.permissao[5]);
                                    for (operador_salvar = 0; operador_salvar < 6; operador_salvar++) {
                                        if (cadastro_operadores_dados.permissao[operador_salvar] > 1 && cadastro_operadores_dados.permissao[operador_salvar] < 0) {
                                            printf("Algum Numero digitado foi maior que 1 portando opcao invalida\n");
                                        }

                                    }

                                    atualiza_Operador(cadastro_operadores, &cadastro_operadores_dados, posicao_operador, contador_operador);
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
                                                cadastro_operadores[posicao_operador + deletar_operador].permissao[0] = cadastro_operadores[posicao_operador + deletar_operador + 1].permissao[0];
                                                cadastro_operadores[posicao_operador + deletar_operador].permissao[1] = cadastro_operadores[posicao_operador + deletar_operador + 1].permissao[1];
                                                cadastro_operadores[posicao_operador + deletar_operador].permissao[2] = cadastro_operadores[posicao_operador + deletar_operador + 1].permissao[2];
                                                cadastro_operadores[posicao_operador + deletar_operador].permissao[3] = cadastro_operadores[posicao_operador + deletar_operador + 1].permissao[3];
                                                cadastro_operadores[posicao_operador + deletar_operador].permissao[4] = cadastro_operadores[posicao_operador + deletar_operador + 1].permissao[4];
                                                cadastro_operadores[posicao_operador + deletar_operador].permissao[5] = cadastro_operadores[posicao_operador + deletar_operador + 1].permissao[5];
                                                strcpy(cadastro_operadores[posicao_operador + deletar_operador].usuario, cadastro_operadores[posicao_operador + deletar_operador + 1].usuario);
                                                strcpy(cadastro_operadores[posicao_operador + deletar_operador].nome, cadastro_operadores[posicao_operador + deletar_operador + 1].nome);
                                            }
                                            contador_operador--;
                                            cadastro_operadores = realloc(cadastro_operadores, (contador_operador + 2) * sizeof (cadastro_Operadores));
                                            FILE* arquivo_operador = fopen("operador.txt", "wb");
                                            fwrite(cadastro_operadores, sizeof (cadastro_Operadores), contador_operador, arquivo_operador);
                                            fclose(arquivo_operador);
                                            // Contador do Hotel
                                            FILE* contadores_operador = fopen("contador_operador.txt", "wb");
                                            fwrite(&contador_operador, sizeof (int), 1, contadores_operador);
                                            fclose(contadores_operador);
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

                        break;

                    default:
                        printf(" Opcao invalida \n");
                        break;
                }// Fecha o switch de escolher oque deseja cadastrar
                break; // Fecha o case 1 principal


            case 2:

                verificar_acesso0 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                verificar_acesso2 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                if (verificar_acesso0 == 1 & verificar_acesso2 == 1) {
                    printf(" Sem Permissao de acesso \n");
                    break;
                }


                if (contador_hospede == 0) {
                    printf(" ----- Necessario Cadastrar Hospede -----\n");
                }
                menu_reservas = 0;
                // Define os tempos atuais
                time_t mytime;
                mytime = time(NULL);
                struct tm tm = *localtime(&mytime);
                data_entrada = tm.tm_mday + (tm.tm_mon + 1) *30 + (tm.tm_year + 1900) *360;

                // Fim tempo atual

                // Realiza o deletamento automatico  de uma reserva caso a data tenha passado
                posicao_agenda = 0;
                while (posicao_agenda != -1) {
                    posicao_agenda = 0;
                    posicao_agenda = PosicaoEncerrarReserva(cadastro_agenda, data_entrada, contador_agenda);
                    if (posicao_agenda != -1 && contador_agenda >= 1) {
                        for (deletar_agenda = 0; deletar_agenda < contador_agenda; deletar_agenda++) {
                            printf(" Sistema Informa: \n");
                            printf(" Reserva deletada \n");
                            printf(" Reserva numero:%d \n", (cadastro_agenda + posicao_agenda)->codigo_reserva);
                            printf(" Motivo: Data de Check-Out atingida \n");
                            posicao_agenda = PosicaoEncerrarReserva(cadastro_agenda, data_entrada, contador_agenda);
                            cadastro_agenda[posicao_agenda + deletar_agenda].codigo = cadastro_agenda[posicao_agenda + deletar_agenda + 1].codigo;
                            cadastro_agenda[posicao_agenda + deletar_agenda].codigo_reserva = cadastro_agenda[posicao_agenda + deletar_agenda + 1].codigo_reserva;
                            cadastro_agenda[posicao_agenda + deletar_agenda].diarias = cadastro_agenda[posicao_agenda + deletar_agenda + 1].diarias;
                            cadastro_agenda[posicao_agenda + deletar_agenda].hospede = cadastro_agenda[posicao_agenda + deletar_agenda + 1].hospede;
                            cadastro_agenda[posicao_agenda + deletar_agenda].dia = cadastro_agenda[posicao_agenda + deletar_agenda + 1].dia;
                            cadastro_agenda[posicao_agenda + deletar_agenda].dia_sair = cadastro_agenda[posicao_agenda + deletar_agenda + 1].dia_sair;
                            cadastro_agenda[posicao_agenda + deletar_agenda].mes = cadastro_agenda[posicao_agenda + deletar_agenda + 1].mes;
                            cadastro_agenda[posicao_agenda + deletar_agenda].mes_sair = cadastro_agenda[posicao_agenda + deletar_agenda + 1].mes_sair;
                            cadastro_agenda[posicao_agenda + deletar_agenda].ano = cadastro_agenda[posicao_agenda + deletar_agenda + 1].ano;
                            cadastro_agenda[posicao_agenda + deletar_agenda].ano_sair = cadastro_agenda[posicao_agenda + deletar_agenda + 1].ano_sair;
                            strcpy(cadastro_agenda[posicao_agenda + deletar_agenda].categoria, cadastro_agenda[posicao_agenda + deletar_agenda + 1].categoria);
                            contador_agenda--;
                            cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
                            FILE* arquivo_agenda = fopen("agenda.txt", "wb");
                            fwrite(cadastro_agenda, sizeof (criar_Agenda), contador_agenda, arquivo_agenda);
                            fclose(arquivo_agenda);
                            // Contador do Hotel
                            FILE* contadores_agenda = fopen("contador_agenda.txt", "wb");
                            fwrite(&contador_agenda, sizeof (int), 1, contadores_agenda);
                            fclose(contadores_agenda);
                        }


                    }
                }




                // fim deletamento data passou

                while (menu_reservas != 4) {
                    data_entrada = 0;
                    data_saida = 0;
                    if (contador_hotel == 0) {
                        printf(" E necessario cadastrar um hotel primeiro \n");
                        break;
                    }

                    printf(" ----- Modulo de Reservas ----- \n");
                    printf("1 - Realizar Reserva\n");
                    printf("2 - Listar Reserva\n");
                    printf("3 - Excluir Reserva\n");
                    printf("4 - Sair\n");
                    scanf("%d", &menu_reservas);
                    switch (menu_reservas) {
                        default:
                            printf("Opcao Invalida\n");
                            break;
                        case 2:
                            imprimirReserva(cadastro_agenda, contador_agenda);
                            break; // Fecha listar
                        case 4:
                            printf(" ----- Retornado ----- \n");
                            break;
                        case 3:
                            posicao_agenda = -1;
                            printf(" Para deletar uma reserva digite o codigo da reserva:  \n");
                            scanf("%d", &cadastro_agenda_dados.codigo_reserva);
                            verificar_codigo_reserva = Verificar_Codigo_Reserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                            if (verificar_codigo_reserva == 0) {
                                printf(" Codigo de reserva nao cadastrado \n");
                                printf(" Tente novamente \n");
                                break;
                            }
                            posicao_agenda = PosicaoReserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                            if (posicao_agenda == -1) {
                                printf(" Ocorreu um erro \n");
                                break;
                            }
                            printf(" Deseja realmente deletar a reserva ?  \n");
                            printf(" 1 - Sim \n 2 - Nao \n");
                            scanf("%d", &confirmar_deletar_reserva);
                            switch (confirmar_deletar_reserva) {
                                default:
                                    printf(" Opcao invalida \n");
                                    break;
                                case 2:
                                    printf(" Reserva nao deletada \n");
                                    break;
                                case 1:
                                    for (deletar_agenda = 0; deletar_agenda <= contador_agenda; deletar_agenda++) {
                                        cadastro_agenda[posicao_agenda + deletar_agenda].codigo = cadastro_agenda[posicao_agenda + deletar_agenda + 1].codigo;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].codigo_reserva = cadastro_agenda[posicao_agenda + deletar_agenda + 1].codigo_reserva;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].diarias = cadastro_agenda[posicao_agenda + deletar_agenda + 1].diarias;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].hospede = cadastro_agenda[posicao_agenda + deletar_agenda + 1].hospede;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].dia = cadastro_agenda[posicao_agenda + deletar_agenda + 1].dia;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].dia_sair = cadastro_agenda[posicao_agenda + deletar_agenda + 1].dia_sair;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].mes = cadastro_agenda[posicao_agenda + deletar_agenda + 1].mes;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].mes_sair = cadastro_agenda[posicao_agenda + deletar_agenda + 1].mes_sair;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].ano = cadastro_agenda[posicao_agenda + deletar_agenda + 1].ano;
                                        cadastro_agenda[posicao_agenda + deletar_agenda].ano_sair = cadastro_agenda[posicao_agenda + deletar_agenda + 1].ano_sair;
                                        strcpy(cadastro_agenda[posicao_agenda + deletar_agenda].categoria, cadastro_agenda[posicao_agenda + deletar_agenda + 1].categoria);


                                    }
                                    contador_agenda--;
                                    cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
                                    printf(" ----- Reserva Deletada -----\n");

                                    break;


                            }

                            break;
                        case 1:
                            pesquisar_por = 0;

                            // realiza a verificaÃ§ao e recebe os dados
                            printf(" Deseja pesquisar por :  \n");
                            printf(" 1 - Categoria de acomodacao \n");
                            printf(" 2 - Data \n");
                            printf(" 3 - Quantidade de pessoas  \n");
                            printf(" 4 - Facilidades \n");
                            printf(" 5 - Sair \n ");
                            scanf("%d", &pesquisar_por);
                            switch (pesquisar_por) {

                                case 1:
                                    printf("Digite o tipo desejado\n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_agenda_dados.categoria);
                                    // recebe os dados da categoria que deseja cadastrar
                                    verificar_reservas = Verificar_acomodacao_tipo(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (verificar_reservas == 0) {
                                        printf("Tipo nao Cadastrado\n");
                                        break;
                                    }
                                    mostrar_acomodacao_tipo(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                    printf("Digite o codigo da Acomodacao que Deseja alugar\n");
                                    scanf("%d", &cadastro_agenda_dados.codigo);
                                    verificar_reservas = Verificar_Reserva(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (verificar_reservas == 0) {
                                        printf(" Codigo nao cadastrado \n");
                                        break;
                                    }
                                    printf("Digite a data que deseja realizar a Reserva\n");
                                    printf("Coloque a data incial no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia, &cadastro_agenda_dados.mes, &cadastro_agenda_dados.ano);
                                    data_entrada = cadastro_agenda_dados.dia + cadastro_agenda_dados.ano * 360 + cadastro_agenda_dados.mes * 30;
                                    data_saida = tm.tm_mday + (tm.tm_mon + 1) *30 + (tm.tm_year + 1900) *360;
                                    if (data_entrada < data_saida) {
                                        printf(" Data digitada ja passou \n");
                                        break;

                                    }
                                    verificar_data = valida_data(&cadastro_agenda_dados);
                                    if (verificar_data == 0) {
                                        printf("Data inicial invalida \n");
                                        break;

                                    }
                                    printf(" Coloque a data final no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia_sair, &cadastro_agenda_dados.mes_sair, &cadastro_agenda_dados.ano_sair);
                                    verificar_data_saida = valida_data_sair(&cadastro_agenda_dados);
                                    //Verifica a data saida
                                    if (verificar_data_saida == 0) {
                                        printf(" Data de saida invalida \n");
                                        break;
                                    }
                                    diferenca_Ano = diferenca_ano(&cadastro_agenda_dados);
                                    if (diferenca_Ano == 1) {
                                        printf(" Erro segunda data e anterior a primeira tente novamente \n");
                                        break;
                                    }
                                    verificar_disponibilidade = verificar_Datas(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                    if (verificar_disponibilidade == 1) {
                                        printf(" Data ja cadastrada tente novamente em outra data\n");
                                        break;
                                    }
                                    //Mostra as datas que a pessoa digitou
                                    printf(" Chegada: %d/%02d/%02d: %s \n", cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano, wd(cadastro_agenda_dados.ano, cadastro_agenda_dados.mes, cadastro_agenda_dados.dia));
                                    printf(" Saida: %d/%02d/%02d: %s \n", cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair, wd(cadastro_agenda_dados.ano_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.dia_sair));
                                    //Realoca
                                    printf(" Datas Disponiveis \n");
                                    printf(" Deseja confirmar a reserva \n");
                                    printf(" 1 - Sim \n 2 - Nao\n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        case 1:


                                            defineDataHora(&d1, 0, 0, 0, cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano);
                                            defineDataHora(&d2, 0, 0, 0, cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair);
                                            cadastro_agenda_dados.diarias = calculaDiferencaEmDias(d1, d2);
                                            printf(" Para concluir a reserva digite o codigo do Hospede:   \n");
                                            scanf("%d", &cadastro_hospede_dados.codigo);
                                            verificar_hospede = VerificarHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                            if (verificar_hospede == 0) {
                                                printf(" Hospede Nao Cadastrado ");
                                                break;
                                            }
                                            printf(" ----- Hospede encontrado ----- \n");
                                            cadastro_agenda_dados.hospede = cadastro_hospede_dados.codigo;
                                            printf(" Para finalizar a reserva : \n");
                                            printf(" Digite um codigo para a reserva   \n");
                                            scanf("%d", &cadastro_agenda_dados.codigo_reserva);
                                            verificar_codigo_reserva = Verificar_Codigo_Reserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                            if (verificar_codigo_reserva == 1) {
                                                printf(" Codigo de reserva ja cadastrado \n");
                                                printf(" Tente novamente \n");
                                                break;
                                            }
                                            Cadastro_agenda(cadastro_agenda, &cadastro_agenda_dados, &contador_agenda);
                                            cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
                                            printf(" -----Reserva Realizada com sucesso -----\n");
                                            break;

                                        case 2:
                                            printf(" Reserva nao realizada");
                                            break;
                                        default:
                                            printf(" Opcao invalida \n");
                                            break;
                                    }
                                    break;

                                case 2:
                                    printf(" Pesquisar por Data \n");
                                    printf("Coloque a data incial no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia, &cadastro_agenda_dados.mes, &cadastro_agenda_dados.ano);
                                    data_entrada = cadastro_agenda_dados.dia + cadastro_agenda_dados.ano * 360 + cadastro_agenda_dados.mes * 30;
                                    data_saida = tm.tm_mday + (tm.tm_mon + 1) *30 + (tm.tm_year + 1900) *360;
                                    if (data_entrada < data_saida) {
                                        printf(" Data digitada ja passou \n");
                                        break;

                                    }
                                    verificar_data = valida_data(&cadastro_agenda_dados);
                                    if (verificar_data == 0) {
                                        printf("Data inicial invalida \n");
                                        break;

                                    }
                                    printf(" Coloque a data final no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia_sair, &cadastro_agenda_dados.mes_sair, &cadastro_agenda_dados.ano_sair);
                                    verificar_data_saida = valida_data_sair(&cadastro_agenda_dados);
                                    //Verifica a data saida
                                    if (verificar_data_saida == 0) {
                                        printf(" Data final Invalida");
                                        break;
                                    }
                                    diferenca_Ano = diferenca_ano(&cadastro_agenda_dados);
                                    if (diferenca_Ano == 1) {
                                        printf(" Erro segunda data e anterior a primeira tente novamente \n");
                                        break;
                                    }
                                    printf(" Chegada: %d/%02d/%02d: %s \n", cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano, wd(cadastro_agenda_dados.ano, cadastro_agenda_dados.mes, cadastro_agenda_dados.dia));
                                    printf(" Saida: %d/%02d/%02d: %s \n\n", cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair, wd(cadastro_agenda_dados.ano_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.dia_sair));
                                    verificar_Datas_pesquisa(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                    printf("Digite o codigo da Acomodacao que Deseja alugar\n");
                                    scanf("%d", &cadastro_agenda_dados.codigo);
                                    verificar_reservas = Verificar_Reserva(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (verificar_reservas == 0) {
                                        printf(" Codigo nao cadastrado \n");
                                        break;
                                    }
                                    verificar_disponibilidade = verificar_Datas(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                    if (verificar_disponibilidade == 1) {
                                        printf(" Data ja cadastrada tente novamente em outra data\n");
                                        break;
                                    }
                                    confirmar_reserva = 0;
                                    printf(" Datas Disponiveis \n");
                                    printf(" Deseja confirmar a reserva \n");
                                    printf(" 1 - Sim \n 2 - Nao\n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        case 1:


                                            defineDataHora(&d1, 0, 0, 0, cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano);
                                            defineDataHora(&d2, 0, 0, 0, cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair);
                                            cadastro_agenda_dados.diarias = calculaDiferencaEmDias(d1, d2);
                                            printf(" Para concluir a reserva digite o codigo do Hospede:   \n");
                                            scanf("%d", &cadastro_hospede_dados.codigo);
                                            verificar_hospede = VerificarHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                            if (verificar_hospede == 0) {
                                                printf(" Hospede Nao Cadastrado ");
                                                break;
                                            }
                                            printf(" ----- Hospede encontrado ----- \n");
                                            cadastro_agenda_dados.hospede = cadastro_hospede_dados.codigo;
                                            printf(" Para finalizar a reserva : \n");
                                            printf(" Digite um codigo para a reserva   \n");
                                            scanf("%d", &cadastro_agenda_dados.codigo_reserva);
                                            verificar_codigo_reserva = Verificar_Codigo_Reserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                            if (verificar_codigo_reserva == 1) {
                                                printf(" Codigo de reserva ja cadastrado \n");
                                                printf(" Tente novamente \n");
                                                break;
                                            }
                                            Cadastro_agenda(cadastro_agenda, &cadastro_agenda_dados, &contador_agenda);
                                            cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
                                            printf(" -----Reserva Realizada com sucesso -----\n");
                                            break;

                                        case 2:
                                            printf(" Reserva nao realizada");
                                            break;
                                        default:
                                            printf(" Opcao invalida \n");
                                            break;
                                    }

                                    break;



                                default:
                                    printf(" Opcao invalida \n");
                                    break;
                                case 3:
                                    // quantidade de pessoas
                                    printf(" Digite a quantidade de pessoas desejadas \n");
                                    scanf("%d", &cadastro_categoria_dados.quantidade_comportada);
                                    pesquisar_quantidade_pessoas(cadastro_categoria, &cadastro_categoria_dados, contador_categoria, &contar_ocupacao);
                                    if (contar_ocupacao == 0) {
                                        printf(" Nenhuma acomodacao cadastrada atende os criterios \n");
                                        break;
                                    }
                                    // parte nova
                                    printf("Digite o tipo desejado\n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_agenda_dados.categoria);
                                    // recebe os dados da categoria que deseja cadastrar
                                    verificar_reservas = Verificar_acomodacao_tipo(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (verificar_reservas == 0) {
                                        printf("Tipo nao Cadastrado\n");
                                        break;
                                    }
                                    mostrar_acomodacao_tipo(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                    printf("Digite o codigo da Acomodacao que Deseja alugar\n");
                                    scanf("%d", &cadastro_agenda_dados.codigo);
                                    verificar_reservas = Verificar_Reserva(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (verificar_reservas == 0) {
                                        printf(" Codigo nao cadastrado \n");
                                        break;
                                    }
                                    printf("Digite a data que deseja realizar a Reserva\n");
                                    printf("Coloque a data incial no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia, &cadastro_agenda_dados.mes, &cadastro_agenda_dados.ano);
                                    data_entrada = cadastro_agenda_dados.dia + cadastro_agenda_dados.ano * 360 + cadastro_agenda_dados.mes * 30;
                                    data_saida = tm.tm_mday + (tm.tm_mon + 1) *30 + (tm.tm_year + 1900) *360;
                                    if (data_entrada < data_saida) {
                                        printf(" Data digitada ja passou \n");
                                        break;

                                    }
                                    verificar_data = valida_data(&cadastro_agenda_dados);
                                    if (verificar_data == 0) {
                                        printf("Data inicial invalida \n");
                                        break;

                                    }
                                    printf(" Coloque a data final no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia_sair, &cadastro_agenda_dados.mes_sair, &cadastro_agenda_dados.ano_sair);
                                    verificar_data_saida = valida_data_sair(&cadastro_agenda_dados);
                                    //Verifica a data saida
                                    if (verificar_data_saida == 0) {
                                        printf(" Data de saida invalida \n");
                                        break;
                                    }
                                    diferenca_Ano = diferenca_ano(&cadastro_agenda_dados);
                                    if (diferenca_Ano == 1) {
                                        printf(" Erro segunda data e anterior a primeira tente novamente \n");
                                        break;
                                    }
                                    verificar_disponibilidade = verificar_Datas(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                    if (verificar_disponibilidade == 1) {
                                        printf(" Data ja cadastrada tente novamente em outra data\n");
                                        break;
                                    }
                                    //Mostra as datas que a pessoa digitou
                                    printf(" Chegada: %d/%02d/%02d: %s \n", cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano, wd(cadastro_agenda_dados.ano, cadastro_agenda_dados.mes, cadastro_agenda_dados.dia));
                                    printf(" Saida: %d/%02d/%02d: %s \n", cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair, wd(cadastro_agenda_dados.ano_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.dia_sair));
                                    //Realoca
                                    printf(" Datas Disponiveis \n");
                                    printf(" Deseja confirmar a reserva \n");
                                    printf(" 1 - Sim \n 2 - Nao\n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        case 1:


                                            defineDataHora(&d1, 0, 0, 0, cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano);
                                            defineDataHora(&d2, 0, 0, 0, cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair);
                                            cadastro_agenda_dados.diarias = calculaDiferencaEmDias(d1, d2);
                                            printf(" Para concluir a reserva digite o codigo do Hospede:   \n");
                                            scanf("%d", &cadastro_hospede_dados.codigo);
                                            verificar_hospede = VerificarHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                            if (verificar_hospede == 0) {
                                                printf(" Hospede Nao Cadastrado ");
                                                break;
                                            }
                                            printf(" ----- Hospede encontrado ----- \n");
                                            cadastro_agenda_dados.hospede = cadastro_hospede_dados.codigo;
                                            printf(" Para finalizar a reserva : \n");
                                            printf(" Digite um codigo para a reserva   \n");
                                            scanf("%d", &cadastro_agenda_dados.codigo_reserva);
                                            verificar_codigo_reserva = Verificar_Codigo_Reserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                            if (verificar_codigo_reserva == 1) {
                                                printf(" Codigo de reserva ja cadastrado \n");
                                                printf(" Tente novamente \n");
                                                break;
                                            }
                                            Cadastro_agenda(cadastro_agenda, &cadastro_agenda_dados, &contador_agenda);
                                            cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
                                            printf(" -----Reserva Realizada com sucesso -----\n");
                                            break;

                                        case 2:
                                            printf(" Reserva nao realizada");
                                            break;
                                        default:
                                            printf(" Opcao invalida \n");
                                            break;
                                    }
                                    break;

                                    // fim parte

                                case 4:
                                    // facilidades
                                    // comeco
                                    // realiza a pesquisa
                                    printf(" Digite as facilidades que deseja: \n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_acomodacao_dados.facilidades);
                                    pesquisar_facilidades(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao, &contar_facilidade);
                                    if (contar_facilidade == 0) {
                                        printf(" Nenhuma Facilidade cadastrada atende os criterios \n");
                                        break;
                                    }
                                    // Daqui para baixo realiza o cadastro
                                    printf("Digite o tipo desejado\n");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_agenda_dados.categoria);
                                    // recebe os dados da categoria que deseja cadastrar
                                    verificar_reservas = Verificar_acomodacao_tipo(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (verificar_reservas == 0) {
                                        printf("Tipo nao Cadastrado\n");
                                        break;
                                    }
                                    mostrar_acomodacao_tipo(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                    printf("Digite o codigo da Acomodacao que Deseja alugar\n");
                                    scanf("%d", &cadastro_agenda_dados.codigo);
                                    verificar_reservas = Verificar_Reserva(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (verificar_reservas == 0) {
                                        printf(" Codigo nao cadastrado \n");
                                        break;
                                    }
                                    printf("Digite a data que deseja realizar a Reserva\n");
                                    printf("Coloque a data incial no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia, &cadastro_agenda_dados.mes, &cadastro_agenda_dados.ano);
                                    data_entrada = cadastro_agenda_dados.dia + cadastro_agenda_dados.ano * 360 + cadastro_agenda_dados.mes * 30;
                                    data_saida = tm.tm_mday + (tm.tm_mon + 1) *30 + (tm.tm_year + 1900) *360;
                                    if (data_entrada < data_saida) {
                                        printf(" Data digitada ja passou \n");
                                        break;

                                    }
                                    verificar_data = valida_data(&cadastro_agenda_dados);
                                    if (verificar_data == 0) {
                                        printf("Data inicial invalida \n");
                                        break;

                                    }
                                    printf(" Coloque a data final no formato: dia/mes/ano\n");
                                    scanf("%d/%d/%d", &cadastro_agenda_dados.dia_sair, &cadastro_agenda_dados.mes_sair, &cadastro_agenda_dados.ano_sair);
                                    verificar_data_saida = valida_data_sair(&cadastro_agenda_dados);
                                    //Verifica a data saida
                                    if (verificar_data_saida == 0) {
                                        printf(" Data de saida invalida \n");
                                        break;
                                    }
                                    diferenca_Ano = diferenca_ano(&cadastro_agenda_dados);
                                    if (diferenca_Ano == 1) {
                                        printf(" Erro segunda data e anterior a primeira tente novamente \n");
                                        break;
                                    }
                                    verificar_disponibilidade = verificar_Datas(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                    if (verificar_disponibilidade == 1) {
                                        printf(" Data ja cadastrada tente novamente em outra data\n");
                                        break;
                                    }
                                    //Mostra as datas que a pessoa digitou
                                    printf(" Chegada: %d/%02d/%02d: %s \n", cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano, wd(cadastro_agenda_dados.ano, cadastro_agenda_dados.mes, cadastro_agenda_dados.dia));
                                    printf(" Saida: %d/%02d/%02d: %s \n", cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair, wd(cadastro_agenda_dados.ano_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.dia_sair));
                                    //Realoca
                                    printf(" Datas Disponiveis \n");
                                    printf(" Deseja confirmar a reserva \n");
                                    printf(" 1 - Sim \n 2 - Nao\n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        case 1:


                                            defineDataHora(&d1, 0, 0, 0, cadastro_agenda_dados.dia, cadastro_agenda_dados.mes, cadastro_agenda_dados.ano);
                                            defineDataHora(&d2, 0, 0, 0, cadastro_agenda_dados.dia_sair, cadastro_agenda_dados.mes_sair, cadastro_agenda_dados.ano_sair);
                                            cadastro_agenda_dados.diarias = calculaDiferencaEmDias(d1, d2);
                                            printf(" Para concluir a reserva digite o codigo do Hospede:   \n");
                                            scanf("%d", &cadastro_hospede_dados.codigo);
                                            verificar_hospede = VerificarHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                            if (verificar_hospede == 0) {
                                                printf(" Hospede Nao Cadastrado ");
                                                break;
                                            }
                                            printf(" ----- Hospede encontrado ----- \n");
                                            cadastro_agenda_dados.hospede = cadastro_hospede_dados.codigo;
                                            printf(" Para finalizar a reserva : \n");
                                            printf(" Digite um codigo para a reserva   \n");
                                            scanf("%d", &cadastro_agenda_dados.codigo_reserva);
                                            verificar_codigo_reserva = Verificar_Codigo_Reserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                            if (verificar_codigo_reserva == 1) {
                                                printf(" Codigo de reserva ja cadastrado \n");
                                                printf(" Tente novamente \n");
                                                break;
                                            }
                                            Cadastro_agenda(cadastro_agenda, &cadastro_agenda_dados, &contador_agenda);
                                            cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
                                            printf(" -----Reserva Realizada com sucesso -----\n");
                                            break;

                                        case 2:
                                            printf(" Reserva nao realizada");
                                            break;
                                        default:
                                            printf(" Opcao invalida \n");
                                            break;
                                    }


                                    //fim
                                    break;
                                case 5:
                                    printf(" ----- Retornado ----- \n");
                                    break;

                            }// fecha o switch



                            break; // fecha o case 1 principal
                    } // fecha o switch
                } // Fecha o while



                break; // Fecha o case 2 principal




            case 3:
                verificar_acesso0 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                verificar_acesso3 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                if (verificar_acesso0 == 1 & verificar_acesso3 == 1) {
                    printf(" Sem Permissao de acesso \n");
                    break;
                }
                menu_transacoes = 0;
                if (contador_hotel == 0) {
                    printf(" E necessario cadastrar um hotel primeiro \n");
                    break;
                }
                while (menu_transacoes != 8) {
                    printf(" ------------------------------------------------ \n");
                    printf(" ----- Modulo de Transacoes ----- \n");
                    printf(" 1 - Check-in \n");
                    printf(" 2 - Check-out \n");
                    printf(" 3 - Venda de Produtos \n");
                    printf(" 4 - Controle de Caixa \n");
                    printf(" 5 - Contas a Receber \n");
                    printf(" 6 - Entrada de Produtos Industrializados \n");
                    printf(" 7 - Contas a Pagar \n");
                    printf(" 8 - Sair \n");
                    printf(" ------------------------------------------------ \n");
                    printf(" Selecione uma opcao:  \n");
                    scanf("%d", &menu_transacoes);
                    switch (menu_transacoes) {
                        case 1:
                            printf(" ----- Check-in -----");
                            verificar_reserva = 0;
                            posicao_agenda = -1;
                            printf(" Check-in \n");
                            printf(" Para fazer a Confirmacao da chegada do Hospede:  \n");
                            printf(" Digite o Codigo da Reserva:    \n");
                            scanf("%d", &cadastro_agenda_dados.codigo_reserva);
                            cadastro_transacao_dados.reserva = cadastro_agenda_dados.codigo_reserva;
                            verificar_codigo_reserva = Verificar_Codigo_Reserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                            if (verificar_codigo_reserva == 0) {
                                printf(" Reserva nao cadastrada \n");
                                printf(" Tente novamente \n");
                                break;
                            }

                            verificar_reserva = Verificar_Codigo_Transacao_Reserva(cadastro_transacao, &cadastro_transacao_dados, contador_checkin);
                            if (verificar_reserva == 1) {
                                printf(" Check-in Desta reserva ja realizado \n");
                                break;

                            }

                            posicao_agenda = PosicaoReserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                            if (posicao_agenda == -1) {
                                printf(" Ocorreu um erro \n");
                                break;
                            }
                            search_hospede = Retorno_Hospede(cadastro_agenda, posicao_agenda);
                            posicao_categoria = -1;
                            cadastro_transacao_dados.codigo_hospede = search_hospede;
                            quantidade_diaria_transacao = Diaria_Hospede(cadastro_agenda, posicao_agenda);
                            strcpy(cadastro_categoria_dados.nome, (cadastro_agenda + posicao_agenda)->categoria);
                            posicao_categoria = Posicao_Categoria_Tipo(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                            cadastro_transacao_dados.deve_diaria = Diaria_Hospede_Valor(cadastro_categoria, posicao_categoria);
                            printf(" Codigo do Hospede:  %d  \n", search_hospede);
                            printf(" Deseja Realizar o pagamento agora? \n");
                            printf(" 1 - Sim \n 2 - Nao \n");
                            scanf("%d", &confirmar_pagamento);
                            switch (confirmar_pagamento) {
                                case 2:
                                    printf(" Check - in Realizado com sucesso \n");
                                    total_pagar = (quantidade_diaria_transacao * cadastro_transacao_dados.deve_diaria);
                                    cadastro_transacao_dados.deve_diaria = total_pagar;
                                    Cadastro_Transacao_Hospede(cadastro_transacao, &cadastro_transacao_dados, &contador_checkin);
                                    cadastro_transacao = realloc(cadastro_transacao, (contador_checkin + 2) * sizeof (criar_Transacao));
                                    break;

                                default:
                                    printf(" Opcao Invalida \n");
                                    break;

                                case 1:

                                    printf("Quantidade de Diaria : %d  \n", quantidade_diaria_transacao);
                                    printf("Valor da Diaria: %f \n ", cadastro_transacao_dados.deve_diaria);
                                    total_pagar = (quantidade_diaria_transacao * cadastro_transacao_dados.deve_diaria);
                                    printf("Valor Total de Diarias a Ser Pago:  %f \n", total_pagar);
                                    cadastro_transacao_dados.deve_diaria = 0;
                                    printf(" Deseja realmente realizar o pagamento? \n");
                                    printf(" 1 - Sim \n 2 - Nao \n");
                                    scanf("%d", &sub_menu_transacao);
                                    switch (sub_menu_transacao) {
                                        case 1:
                                            printf(" 1 - A vista \n 2 - a Prazo \n");
                                            scanf("%d", &verificar_pagamento);
                                            switch (verificar_pagamento) {
                                                default:
                                                    printf(" Opcao invalida \n");
                                                    break;
                                                case 1:



                                                    Cadastro_Transacao_Hospede(cadastro_transacao, &cadastro_transacao_dados, &contador_checkin);
                                                    printf(" Check-in e Pagamento Realizado com Sucesso \n");
                                                    cadastro_transacao = realloc(cadastro_transacao, (contador_checkin + 2) * sizeof (criar_Transacao));
                                                    // caixa
                                                    time_t mytime;
                                                    mytime = time(NULL);
                                                    struct tm tm = *localtime(&mytime);
                                                    cadastro_caixa_dados.caixa = total_pagar;
                                                    cadastro_caixa_dados.dia = tm.tm_mday;
                                                    cadastro_caixa_dados.mes = tm.tm_mon + 1;
                                                    cadastro_caixa_dados.ano = tm.tm_year + 1900;
                                                    cadastro_caixa_dados.entrou = total_pagar;
                                                    strcpy(cadastro_caixa_dados.tipo, "Entrada");
                                                    Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                                    cadastro_caixa = realloc(cadastro_caixa, (contador_caixa + 2) * sizeof (criar_Caixa));
                                                    printf("Total no caixa Do Hotel:  %f \n", cadastro_caixa->caixa);
                                                    // Controle
                                                    strcpy(cadastro_controle_dados.tipo, "Dinheiro");
                                                    cadastro_controle_dados.valor = total_pagar;
                                                    strcpy(cadastro_controle_dados.vendido, " Check-in Hospede");
                                                    printf(" %s \n", cadastro_controle_dados.vendido);
                                                    Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                                    cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));

                                                    // Fim Controle

                                                    break;
                                                case 2:
                                                    //Receber
                                                    printf(" Digite a data do vencimento da fatura : \n");
                                                    printf(" Dia \n");
                                                    scanf("%d", &cadastro_receber_dados.dia);
                                                    printf(" Mes \n");
                                                    scanf("%d", &cadastro_receber_dados.mes);
                                                    printf(" Ano \n");
                                                    scanf("%d", &cadastro_receber_dados.ano);
                                                    cadastro_receber_dados.valor = total_pagar;
                                                    Cadastro_Receber(cadastro_receber, &cadastro_receber_dados, &contador_receber);
                                                    cadastro_receber = realloc(cadastro_receber, (contador_receber + 2) * sizeof (criar_Receber));
                                                    // fim Receber

                                                    // Controle
                                                    strcpy(cadastro_controle_dados.tipo, "Cartao");
                                                    cadastro_controle_dados.valor = total_pagar;
                                                    strcpy(cadastro_controle_dados.vendido, " Check-in Hospede");
                                                    Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                                    cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                                    printf(" Realizado com Sucesso \n");
                                                    // Fim Controle
                                                    break;

                                            }
                                            break;

                                        case 2:
                                            printf(" Tente novamente \n");
                                            break;

                                        default:
                                            printf(" Comando Invalido \n");
                                            break;
                                    }
                                    break; // fecha o confirmar pagamento



                            }// fecha confirmar pagamento

                            break;
                        case 2:
                            // Realiza a pesquisa se antes foi feito o check-in desta reserva
                            printf(" ----- Check-out ----- \n");
                            printf(" Para realizar o check-out digite o codigo da reserva:   \n");
                            scanf("%d", &cadastro_transacao_dados.reserva);
                            verificar_hospede = PosicaoHospede_Reserva_Reserva(cadastro_transacao, &cadastro_transacao_dados, contador_checkin);
                            if (verificar_hospede == -1) {
                                printf(" Hospede Nao Cadastrado ou Check-Out ja realizado \n");
                                break;
                            }
                            // fim checkin
                            posicao_hospede = -1;
                            posicao_hospede = PosicaoHospede_Reserva_posicao(cadastro_transacao, &cadastro_transacao_dados, contador_checkin);
                            if (posicao_hospede == -1) {
                                printf(" Check-In nao realizado \n");
                                break;
                            }
                            confirmar_pagamento = 0;
                            cadastro_transacao_dados.deve_diaria = (cadastro_transacao + posicao_hospede)->deve_diaria;
                            printf(" O Hospede deve : %f \n", cadastro_transacao_dados.deve_diaria);
                            printf(" Confirmar Check-Out \n");
                            printf(" 1 - Sim \n 2 - Nao \n ");
                            scanf("%d", &confirmar_pagamento);
                            if (confirmar_pagamento > 1 || confirmar_pagamento <= 0) {
                                printf(" Pagamento Nao Realizado \n");
                                break;
                            }
                            printf(" Deseja pagar: \n 1 - A vista \n 2 - A Prazo \n");
                            scanf("%d", &verificar_pagamento);
                            if (verificar_pagamento != 1 && verificar_pagamento != 2) {
                                printf(" Opcao Invalida");
                                break;
                            }
                            if (verificar_pagamento == 1) {
                                for (deletar_acomodacao = 0; deletar_acomodacao <= contador_checkin; deletar_acomodacao++) {
                                    cadastro_transacao[posicao_hospede + deletar_acomodacao].codigo_hospede = cadastro_transacao[posicao_hospede + deletar_acomodacao + 1].codigo_hospede;
                                    cadastro_transacao[posicao_hospede + deletar_acomodacao].deve_diaria = cadastro_transacao[posicao_hospede + deletar_acomodacao + 1].deve_diaria;
                                    cadastro_transacao[posicao_hospede + deletar_acomodacao].reserva = cadastro_transacao[posicao_hospede + deletar_acomodacao + 1].reserva;

                                }
                                contador_checkin--;
                                cadastro_transacao = realloc(cadastro_transacao, (contador_checkin + 2) * sizeof (criar_Transacao));
                                FILE* arquivo_transacao = fopen("transacao.txt", "wb");
                                fwrite(cadastro_transacao, sizeof (criar_Transacao), contador_checkin, arquivo_transacao);
                                fclose(arquivo_transacao);
                                printf(" Check-Out do hospede realizado com sucesso \n;");
                                printf(" Saldo do caixa atualizado com sucesso \n");
                                time_t mytime;
                                mytime = time(NULL);
                                struct tm tm = *localtime(&mytime);
                                cadastro_caixa_dados.caixa = cadastro_transacao_dados.deve_diaria;
                                cadastro_caixa_dados.dia = tm.tm_mday;
                                cadastro_caixa_dados.mes = tm.tm_mon + 1;
                                cadastro_caixa_dados.ano = tm.tm_year + 1900;
                                cadastro_caixa_dados.entrou = cadastro_transacao_dados.deve_diaria;
                                strcpy(cadastro_caixa_dados.tipo, "Entrada");
                                Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                cadastro_caixa = realloc(cadastro_caixa, (contador_caixa + 2) * sizeof (criar_Caixa));
                                Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                printf(" Saldo atual: %f \n", (cadastro_caixa)->caixa);
                                // 
                                strcpy(cadastro_controle_dados.tipo, "dinheiro");
                                cadastro_controle_dados.valor = cadastro_transacao_dados.deve_diaria;
                                strcpy(cadastro_controle_dados.vendido, " Check-out Hospede");
                                Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                printf(" Realizado com Sucesso \n");
                            }

                            if (verificar_pagamento == 2) {
                                for (deletar_acomodacao = 0; deletar_acomodacao <= contador_checkin; deletar_acomodacao++) {
                                    cadastro_transacao[posicao_hospede + deletar_acomodacao].codigo_hospede = cadastro_transacao[posicao_hospede + deletar_acomodacao + 1].codigo_hospede;
                                    cadastro_transacao[posicao_hospede + deletar_acomodacao].deve_diaria = cadastro_transacao[posicao_hospede + deletar_acomodacao + 1].deve_diaria;
                                    cadastro_transacao[posicao_hospede + deletar_acomodacao].reserva = cadastro_transacao[posicao_hospede + deletar_acomodacao + 1].reserva;

                                }
                                contador_checkin--;
                                cadastro_transacao = realloc(cadastro_transacao, (contador_checkin + 2) * sizeof (criar_Transacao));
                                FILE* arquivo_transacao = fopen("transacao.txt", "wb");
                                fwrite(cadastro_transacao, sizeof (criar_Transacao), contador_checkin, arquivo_transacao);
                                fclose(arquivo_transacao);
                                printf(" Digite a data do vencimento da fatura : \n");
                                printf(" DD/MM/AA \n");
                                scanf("%d/%d/%d", &cadastro_receber_dados.dia, &cadastro_receber_dados.mes, &cadastro_receber_dados.ano);
                                cadastro_receber_dados.valor = cadastro_transacao_dados.deve_diaria;
                                Cadastro_Receber(cadastro_receber, &cadastro_receber_dados, &contador_receber);
                                cadastro_receber = realloc(cadastro_receber, (contador_receber + 2) * sizeof (criar_Receber));

                                // 
                                strcpy(cadastro_controle_dados.tipo, "cartao");
                                cadastro_controle_dados.valor = cadastro_transacao_dados.deve_diaria;
                                strcpy(cadastro_controle_dados.vendido, " Check-out Hospede");
                                Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                printf(" Realizado com Sucesso \n");
                            }


                            break;
                        case 3:
                            printf(" ----- Venda de Produtos ----- \n");
                            total_pagar = 0;
                            printf(" ----- Venda de Produtos ----- \n");
                            printf(" Para realizar a compra de produtos digite o codigo do Hospede:   \n");
                            scanf("%d", &cadastro_hospede_dados.codigo);
                            verificar_hospede = VerificarHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                            if (verificar_hospede == 0) {
                                printf(" Hospede Nao Cadastrado ");
                                break;
                            }
                            printf(" Produtos:  \n");
                            verProduto_nome(cadastro_produto, contador_produto);
                            printf(" Digite o codigo do produto que deseja comprar: \n");
                            scanf("%d%", &cadastro_produto_dados.codigo);
                            verificar_produto = VerificarProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                            if (verificar_produto == 0) {
                                printf(" Codigo Invalido Produto Nao Cadastrado \n");
                                break;
                            }
                            posicao_produto = PosicaoProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                            if (posicao_produto == -1) {

                                printf(" Ocorreu um erro \n");
                                break;
                            }
                            printf(" Digite a Quantidade de Produtos que Deseja: \n");
                            scanf("%d", &cadastro_produto_dados.estoque);
                            verificar_disponibilidade = Verificar_Disponibilidade_Produto(cadastro_produto, &cadastro_produto_dados, contador_produto, posicao_produto);
                            if (verificar_disponibilidade == 1) {
                                printf(" Quantidade de Produtos nao disponivel \n");
                                break;
                            }
                            confirmar_pagamento = 0;
                            total_pagar = (cadastro_produto_dados.estoque * (cadastro_produto + posicao_produto)->preco_venda);
                            printf(" Total a pagar : %f", total_pagar);
                            printf(" Deseja Pagar : \n");
                            printf(" 1 - A Vista : \n");
                            printf(" 2 - Anotar na Conta: \n");
                            scanf("%d", &confirmar_pagamento);
                            switch (confirmar_pagamento) {
                                default:
                                    printf(" Opcao invalida \n ");
                                    break;

                                case 1:
                                    printf(" ----- Pagamento a Vista: -----\n");
                                    printf(" Deseja Realmente realizar o pagamento ? \n");
                                    printf(" 1 - Sim \n 2 - Nao \n");
                                    scanf("%d", &verificar_pagamento);
                                    if (verificar_pagamento >= 2 || verificar_pagamento <= 0) {
                                        printf(" Pagamento nao Realizado \n");
                                        break;
                                    }
                                    time_t mytime;
                                    mytime = time(NULL);
                                    struct tm tm = *localtime(&mytime);
                                    cadastro_caixa_dados.caixa = total_pagar;
                                    cadastro_caixa_dados.dia = tm.tm_mday;
                                    cadastro_caixa_dados.mes = tm.tm_mon + 1;
                                    cadastro_caixa_dados.ano = tm.tm_year + 1900;
                                    cadastro_caixa_dados.entrou = total_pagar;
                                    strcpy(cadastro_caixa_dados.tipo, "Entrada");
                                    Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                    cadastro_caixa = realloc(cadastro_caixa, (contador_caixa + 2) * sizeof (criar_Caixa));
                                    Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                    cadastro_produto_dados.estoque = (cadastro_produto_dados.estoque - (cadastro_produto + posicao_produto)->estoque);
                                    atualizaProduto_Venda(cadastro_produto, &cadastro_produto_dados, contador_produto, posicao_produto);

                                    strcpy(cadastro_controle_dados.tipo, "dinheiro");
                                    cadastro_controle_dados.valor = total_pagar;
                                    strcpy(cadastro_controle_dados.vendido, " Venda de Produto");
                                    printf(" %s \n", cadastro_controle_dados.vendido);
                                    Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                    cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                    printf("Total no caixa Do Hotel:  %f \n", cadastro_caixa->caixa);
                                    printf(" Pagamento Realizado com Sucesso \n");
                                    break;

                                case 2:
                                    printf(" ----- Pagamento a Prazo ----- \n");

                                    printf(" Deseja Realmente realizar o pagamento ? \n");
                                    printf(" 1 - Sim \n 2 - Nao \n");
                                    scanf("%d", &verificar_pagamento);
                                    if (verificar_pagamento >= 2 || verificar_pagamento <= 0) {
                                        printf(" Pagamento nao Realizado \n");
                                        break;
                                    }
                                    posicao_hospede = -1;
                                    cadastro_transacao_dados.codigo_hospede = cadastro_hospede_dados.codigo;
                                    posicao_hospede = PosicaoHospede_Reserva(cadastro_transacao, &cadastro_transacao_dados, contador_checkin);
                                    if (posicao_hospede == -1) {
                                        printf(" Ocorreu um erro \n");
                                        break;
                                    }
                                    cadastro_transacao_dados.deve_diaria = total_pagar;
                                    atualizaTransacao(cadastro_transacao, &cadastro_transacao_dados, contador_checkin, posicao_hospede);
                                    cadastro_produto_dados.estoque = (cadastro_produto_dados.estoque - (cadastro_produto + posicao_produto)->estoque);
                                    atualizaProduto_Venda(cadastro_produto, &cadastro_produto_dados, contador_produto, posicao_produto);
                                    printf(" Pagamento Realizado com Sucesso \n");
                                    printf(" Hospede deve : %f \n", cadastro_transacao[posicao_hospede].deve_diaria);
                                    FILE *gerar_nota; // cria variável ponteiro para o arquivo
                                    posicao_hospede = PosicaoHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                    if (posicao_hospede == -1) {
                                        printf(" Hospede nao cadastrado \n");
                                        break;
                                    }
                                    //abrindo o arquivo com tipo de abertura w
                                    gerar_nota = fopen("Nota_Hospede.txt", "w");

                                    //testando se o arquivo foi realmente criado
                                    if (gerar_nota == NULL) {
                                        printf("Erro na abertura do arquivo!");
                                        return 1;
                                    }
                                    //usando fprintf para armazenar a string no arquivo
                                    fprintf(gerar_nota, "%s" "%s" "%f" "%s" "%f" "%s" "%f" "%s" "%s" "%s" "%s" "%s" "%f" "%s" "%s", texto, texto1, total_pagar, texto2, (cadastro_hospede + posicao_hospede)->cpf, texto3, total_pagar, texto4, texto5, texto6, (cadastro_hospede + posicao_hospede)->nome_social, texto7, (cadastro_hospede + posicao_hospede)->cpf, texto8, texto9);

                                    //usando fclose para fechar o arquivo
                                    fclose(gerar_nota);
                                    printf(" Nota fiscal Gerada com Sucesso \n");
                                    printf(" Nota disponibilizada para IMPRESSAO \n");
                                    strcpy(cadastro_controle_dados.tipo, "Venda");
                                    cadastro_controle_dados.valor = total_pagar;
                                    strcpy(cadastro_controle_dados.vendido, " Produto Vendido");
                                    printf(" %s \n", cadastro_controle_dados.vendido);
                                    Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                    cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                    break;
                                    // acabou confirmar pagamento


                            }// fecha o confirmar pagamento


                            break;

                        case 4:
                            printf(" ----- Controle de Caixa ----- \n");
                            verControle(cadastro_controle, contador_controle);
                            break;

                        case 5:
                            printf(" ----- Contas a Receber ----- \n");

                            verReceber(cadastro_receber, contador_receber);
                            break;

                        case 6:
                            printf(" 6 - Entrada de Produtos Industrializados \n");
                            mostrar_fornecedor = 0;
                            setbuf(stdin, NULL);
                            printf(" ----- Entrada de Produtos Industrializados -----\n");
                            printf(" Digite o nome do Fornecedor \n");
                            scanf("%[^\n]s", &cadastro_fornecedorl_dados.nome_social);
                            verificar_fornecedor = VerificarFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor);
                            if (verificar_fornecedor == 0) {
                                printf(" Fornecedor Nao Cadastrado \n");
                                break;
                            }
                            posicao_fornecedor = PosicaoFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, contador_fornecedor);
                            if (posicao_fornecedor == -1) {
                                printf("----- Fornecedor nao encontrado -----\n");
                                break;
                            }
                            printf(" Deseja Realizar Entrada de produtos? \n");
                            printf(" 1 - Sim \n 2 - Nao\n");
                            scanf("%d", &mostrar_fornecedor);
                            switch (mostrar_fornecedor) {

                                default:
                                    printf(" Opcao Invalida \n");
                                    break;
                                case 2:
                                    printf(" ----- Retornado ----- \n");
                                    break;

                                case 1:

                                    printf(" Digite o Codigo do Produto \n");
                                    scanf("%d%", &cadastro_produto_dados.codigo);
                                    verificar_produto = VerificarProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                                    if (verificar_produto == 0) {
                                        printf(" Produto nao Cadastrado \n");
                                        break;
                                    }
                                    posicao_produto = PosicaoProduto(cadastro_produto, &cadastro_produto_dados, contador_produto);
                                    if (posicao_produto == -1) {
                                        printf("----- Codigo nao encontrado -----\n");
                                        break;
                                    }
                                    cadastro_produto_dados.estoque = 0;
                                    cadastro_produto_dados.preco_custo = 0;
                                    strcpy(cadastro_conta_dados.compra, (cadastro_produto + posicao_produto)->nome);
                                    printf(" Digite a Quantidade Comprada: \n");
                                    scanf("%d", &cadastro_produto_dados.estoque);
                                    printf(" Digite o preco custo: \n");
                                    scanf("%d", &cadastro_produto_dados.preco_custo);
                                    printf(" Digite o valor do frete por unidade: \n");
                                    scanf("%f", &cadastro_fornecedorl_dados.frete);
                                    printf(" Digite o valor do imposto por unidade: \n");
                                    scanf("%f", &cadastro_fornecedorl_dados.imposto);
                                    cadastro_fornecedorl_dados.frete = cadastro_fornecedorl_dados.frete / cadastro_produto_dados.estoque;
                                    cadastro_fornecedorl_dados.imposto = cadastro_fornecedorl_dados.imposto / cadastro_produto_dados.estoque;
                                    cadastro_fornecedorl_dados.lucro = (cadastro_hotel + 1)->lucro_produtos_vendidos;
                                    cadastro_fornecedorl_dados.lucro = (cadastro_fornecedorl_dados.lucro) / 100 * (cadastro_produto_dados.preco_custo + cadastro_fornecedorl_dados.frete + cadastro_fornecedorl_dados.imposto);
                                    cadastro_produto_dados.preco_venda = (cadastro_produto_dados.preco_custo + cadastro_fornecedorl_dados.frete + cadastro_fornecedorl_dados.imposto) + cadastro_fornecedorl_dados.lucro;
                                    atualizaProduto_Compra(cadastro_produto, &cadastro_produto_dados, contador_produto, posicao_produto);
                                    printf(" Produto Atualizado com sucesso! \n");
                                    deletar_busca_fornecedor = 0;
                                    printf(" Deseja pagar: \n 1 - A vista \n 2 - A prazo \n");
                                    scanf("%d", &deletar_busca_fornecedor);

                                    switch (deletar_busca_fornecedor) {
                                        case 2:
                                            verificar_hospede = 0;
                                            printf(" Pagamento a Prazo \n");
                                            printf(" Digite um codigo para a compra \n");
                                            scanf("%d", &cadastro_conta_dados.codigo);
                                            verificar_hospede = VerificarConta(cadastro_conta, &cadastro_conta_dados, contador_conta);
                                            if (verificar_hospede == 1) {
                                                printf(" Ja Cadastrado \n");
                                                break;
                                            }
                                            printf(" Digite a data de Vencimento DD/MM/AA");
                                            scanf("%d/%d/%d", &cadastro_conta_dados.dia, &cadastro_conta_dados.mes, &cadastro_conta_dados.ano);
                                            strcpy(cadastro_conta_dados.fornecedor, cadastro_fornecedorl_dados.nome_social);
                                            setbuf(stdin, NULL);
                                            printf(" Digite uma descricao: \n");
                                            scanf("%[^\n]s", &cadastro_conta_dados.descricao);
                                            strcpy(cadastro_conta_dados.compra, cadastro_produto[posicao_produto].nome);
                                            cadastro_conta_dados.deve = ((cadastro_produto_dados.preco_custo * cadastro_produto_dados.estoque) - cadastro_fornecedorl_dados.lucro);
                                            Cadastro_Conta(cadastro_conta, &cadastro_conta_dados, &contador_conta);
                                            cadastro_conta = realloc(cadastro_conta, (contador_conta + 2) * sizeof (criar_Conta));
                                            strcpy(cadastro_controle_dados.tipo, "Prazo");
                                            cadastro_controle_dados.valor = cadastro_produto_dados.preco_custo;
                                            strcpy(cadastro_controle_dados.vendido, " Compra de Produtos Industrializados");

                                            Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                            cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                            printf(" ----- Realizado com Sucesso ----- \n");
                                            break;

                                        default:
                                            printf(" Opcao Invalida \n");
                                            break;

                                        case 1:
                                            cadastro_caixa_dados.caixa = (cadastro_fornecedorl_dados.frete + cadastro_fornecedorl_dados.imposto + (cadastro_produto_dados.preco_custo * cadastro_produto_dados.estoque));
                                            if ((cadastro_caixa)->caixa < cadastro_caixa_dados.caixa) {
                                                printf(" Saldo Insuficiente \n");
                                                break;
                                            }
                                            cadastro_caixa_dados.caixa = -(cadastro_fornecedorl_dados.frete + cadastro_fornecedorl_dados.imposto + (cadastro_produto_dados.preco_custo * cadastro_produto_dados.estoque));
                                            mytime = time(NULL);
                                            struct tm tm = *localtime(&mytime);
                                            cadastro_caixa_dados.dia = tm.tm_mday;
                                            cadastro_caixa_dados.mes = tm.tm_mon + 1;
                                            cadastro_caixa_dados.ano = tm.tm_year + 1900;
                                            cadastro_caixa_dados.entrou = (cadastro_fornecedorl_dados.frete + cadastro_fornecedorl_dados.imposto + (cadastro_produto_dados.preco_custo * cadastro_produto_dados.estoque));
                                            strcpy(cadastro_caixa_dados.tipo, "Saida");
                                            Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                            cadastro_caixa = realloc(cadastro_caixa, (contador_caixa + 2) * sizeof (criar_Caixa));

                                            break;
                                            cadastro_caixa_dados.caixa = (cadastro_fornecedorl_dados.frete + cadastro_fornecedorl_dados.imposto + (cadastro_produto_dados.preco_custo * cadastro_produto_dados.estoque));
                                            printf(" Pagamento a Vista realizado com sucesso \n");
                                            strcpy(cadastro_controle_dados.tipo, "Retirada Dinheiro");
                                            cadastro_controle_dados.valor = cadastro_caixa_dados.caixa;
                                            strcpy(cadastro_controle_dados.vendido, " Pagamento compra Produto");
                                            Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                            cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                            strcpy(cadastro_controle_dados.tipo, "Retirada do Caixa");
                                            cadastro_controle_dados.valor = cadastro_produto_dados.preco_custo;
                                            strcpy(cadastro_controle_dados.vendido, " Compra a Vista");

                                            Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                            cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                            printf(" Realizado com Sucesso \n");

                                    }
                                    break; // fecha o switch
                            }
                            break;

                        case 7:
                            printf(" ----- Contas a Pagar ----- \n");
                            if (contador_conta == 0) {
                                printf(" Nenhuma conta a ser paga \n");
                                break;

                            }
                            verificar_pagamento = 0;
                            confirmar_pagamento = 0;
                            verContas(cadastro_conta, contador_conta);
                            printf(" Deseja Pagar alguma conta ? \n");
                            printf(" 1 - Sim \n 2 - Nao \n");
                            scanf("%d", &verificar_pagamento);
                            switch (verificar_pagamento) {
                                default:
                                    printf(" Opcao Invalida \n");
                                    break;
                                case 2:
                                    printf(" ----- Retornado ----- \n");
                                    break;

                                case 1:

                                    printf(" Digite o Codigo da conta para realizar o pagamento \n");
                                    scanf("%d", &cadastro_conta_dados.codigo);
                                    PosicaoConta(cadastro_conta, &cadastro_conta_dados, contador_conta);
                                    verificar_hospede = VerificarConta(cadastro_conta, &cadastro_conta_dados, contador_conta);
                                    if (verificar_hospede == 0) {
                                        printf(" Codigo Nao Cadastrado \n");
                                        break;
                                    }
                                    posicao_hospede = PosicaoConta(cadastro_conta, &cadastro_conta_dados, contador_conta);
                                    if (posicao_hospede == -1) {
                                        printf(" Ocorreu um erro \n");
                                        break;
                                    }
                                    printf(" Deseja pagar o Valor de : %f  \n", (cadastro_conta + posicao_hospede)->deve);
                                    printf(" 1 - Sim \n 2 - Nao \n");
                                    scanf("%d", &confirmar_pagamento);
                                    switch (confirmar_pagamento) {
                                        default:
                                            printf(" Opcao Invalida \n");
                                            break;
                                        case 2:
                                            printf(" ---- Retornado ----- \n");

                                        case 1:
                                            cadastro_caixa_dados.caixa = -(cadastro_conta + posicao_hospede)->deve;
                                            mytime = time(NULL);
                                            struct tm tm = *localtime(&mytime);
                                            cadastro_caixa_dados.dia = tm.tm_mday;
                                            cadastro_caixa_dados.mes = tm.tm_mon + 1;
                                            cadastro_caixa_dados.ano = tm.tm_year + 1900;
                                            cadastro_caixa_dados.entrou = (cadastro_conta + posicao_hospede)->deve;
                                            strcpy(cadastro_caixa_dados.tipo, "Saida");
                                            Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                            cadastro_caixa = realloc(cadastro_caixa, (contador_caixa + 2) * sizeof (criar_Caixa));



                                            for (deletar_acomodacao = 0; deletar_acomodacao <= contador_conta; deletar_acomodacao++) {
                                                cadastro_conta[posicao_hospede + deletar_acomodacao].codigo = cadastro_conta[posicao_hospede + deletar_acomodacao + 1].codigo;
                                                cadastro_conta[posicao_hospede + deletar_acomodacao].dia = cadastro_conta[posicao_hospede + deletar_acomodacao + 1].dia;
                                                cadastro_conta[posicao_hospede + deletar_acomodacao].mes = cadastro_conta[posicao_hospede + deletar_acomodacao + 1].mes;
                                                cadastro_conta[posicao_hospede + deletar_acomodacao].ano = cadastro_conta[posicao_hospede + deletar_acomodacao + 1].ano;
                                                cadastro_conta[posicao_hospede + deletar_acomodacao].deve = cadastro_conta[posicao_hospede + deletar_acomodacao + 1].deve;
                                                strcpy(cadastro_conta[posicao_hospede + deletar_acomodacao].descricao, cadastro_conta[posicao_hospede + deletar_acomodacao + 1].descricao);
                                                strcpy(cadastro_conta[posicao_hospede + deletar_acomodacao].compra, cadastro_conta[posicao_hospede + deletar_acomodacao + 1].compra);
                                                strcpy(cadastro_conta[posicao_hospede + deletar_acomodacao].fornecedor, cadastro_conta[posicao_hospede + deletar_acomodacao + 1].fornecedor);
                                            }
                                            contador_conta--;
                                            cadastro_conta = realloc(cadastro_conta, (contador_conta + 2) * sizeof (criar_Conta));
                                            FILE* arquivo_conta = fopen("conta.txt", "wb");
                                            fwrite(cadastro_conta, sizeof (criar_Conta), contador_conta, arquivo_conta);
                                            fclose(arquivo_conta);
                                            // Contador do Hotel
                                            FILE* contadores_conta = fopen("contador_conta.txt", "wb");
                                            fwrite(&contador_conta, sizeof (int), 1, contadores_conta);
                                            fclose(contadores_conta);
                                            printf(" ----- Conta Deletada -----\n");
                                            break;


                                    }//fecha switch



                                    break;

                            }

                            break;

                        case 8:
                            printf(" ----- Retornado ----- \n");
                            break;

                        default:
                            printf(" Opcao Invalida \n");

                    }//fecha o switch do menu de transacoes

                } // fecha o while do menu das transacoes




                break; // fecha o case 3 do modulo de transacao



            case 4:
                menu_feedback = 0;
                verificar_acesso0 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                verificar_acesso4 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                if (verificar_acesso0 == 1 & verificar_acesso1 == 1) {
                    printf(" Sem Permissao de acesso \n");
                    break;
                }
                if (contador_hotel == 0) {
                    printf(" E necessario cadastrar um hotel primeiro \n");
                    break;
                }
                while (menu_feedback != 10) {
                    printf(" ----- Modulo de Feedback ----- \n");
                    printf(" Deseja qual Feedback: \n");
                    printf(" 1 - Listagem Hospede \n");
                    printf(" 2 - Listagem Acomodacoes \n");
                    printf(" 3 - Listagem Reservas \n");
                    printf(" 4 - Movimentacoes de Acomodacoes \n");
                    printf(" 5 - Listagem de Produtos de Consumos \n");
                    printf(" 6 - Vendas \n");
                    printf(" 7 - Contas a Receber \n");
                    printf(" 8 - Contas a Pagar \n");
                    printf(" 9 - Movimentacao do Caixa \n");
                    printf(" 10 - Sair \n");
                    scanf("%d", &menu_feedback);
                    switch (menu_feedback) {
                        case 1:
                            remove("imprimir_hospede.csv");
                            printf(" ----- Listagem Hospede ----- \n");
                            printf(" 1 - Todos Campos \n 2 - Filtros \n");
                            scanf("%d", &confirmar_feedback);
                            switch (confirmar_feedback) {
                                default:
                                    printf(" Comando Invalido \n");
                                    break;




                                case 2:
                                    printf(" 1 - Codigo \n 2 - Sexo \n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        default:
                                            printf(" Opcao errado \n");
                                            break;

                                        case 1:
                                            printf(" Digite o codigo do inicio \n");
                                            scanf("%d", &codigo_inicio);
                                            printf(" Digite o codigo do fim \n");
                                            scanf("%d", &codigo_fim);

                                            for (codigo_posicao = codigo_inicio; codigo_posicao <= codigo_fim; codigo_posicao++) {
                                                posicao_hospede = -1;
                                                cadastro_hospede_dados.codigo = 0;
                                                cadastro_hospede_dados.codigo = codigo_posicao;
                                                posicao_hospede = PosicaoHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);

                                                FILE* imprimir_hospede = fopen("imprimir_hospede.csv", "a");
                                                fprintf(imprimir_hospede, "Codigo: %d \n", (cadastro_hospede + posicao_hospede)->codigo);
                                                fprintf(imprimir_hospede, "Nome:  %s ", (cadastro_hospede + posicao_hospede)->nome_social);
                                                fprintf(imprimir_hospede, "Sexo:  %s ", (cadastro_hospede + posicao_hospede)->sexo);
                                                fprintf(imprimir_hospede, "Estado Civil: %s ", (cadastro_hospede + posicao_hospede)->estado_civil);
                                                fprintf(imprimir_hospede, "Endereco: %s ", (cadastro_hospede + posicao_hospede)->endereco);
                                                fprintf(imprimir_hospede, "Email: %s ", (cadastro_hospede + posicao_hospede)->email);
                                                fprintf(imprimir_hospede, "Telefone: %f \n", (cadastro_hospede + posicao_hospede)->telefone);
                                                fprintf(imprimir_hospede, "CPF: %f \n", (cadastro_hospede + posicao_hospede)->cpf);
                                                fprintf(imprimir_hospede, "Data de Nascimento: %d/%d/%d \n", (cadastro_hospede + posicao_hospede)->dia, (cadastro_hospede + posicao_hospede)->mes, (cadastro_hospede + posicao_hospede)->ano);
                                                fprintf(imprimir_hospede, "\n: \n");
                                                fclose(imprimir_hospede);

                                            }
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_hospede.csv \n");
                                            break;

                                        case 2:
                                            setbuf(stdin, NULL);
                                            printf(" Digite o Sexo: \n");
                                            scanf("%[^\n]s", &cadastro_hospede_dados.sexo);
                                            posicao_hospede = PosicaoHospede_Nome(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                            if (posicao_hospede == -1) {
                                                printf(" Nao cadastrado \n");
                                                break;

                                            }
                                            posicao_hospede = -1;
                                            // ira ter a quantidade de hospedes com aquele sexo
                                            posicao_hospede = PosicaoHospede_Sexo(cadastro_hospede, &cadastro_hospede_dados, contador_hospede, posicao_hospede);
                                            // aloca uma struct para pegar as posicoes
                                            posicao = malloc(sizeof (posicoes));
                                            // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                            posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                            // iguala uma variavel igual a quantidade que tem
                                            mostrar_arquivo = posicao_hospede;
                                            // funcao que salva na struct todas as posicoes que tem aquele sexo
                                            PosicaoHospede_Teste(cadastro_hospede, &cadastro_hospede_dados, contador_hospede, posicao);
                                            posicao_hospede = 0;
                                            for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                                FILE* imprimir_hospede = fopen("imprimir_hospede.csv", "a");
                                                fprintf(imprimir_hospede, "Codigo: %d \n", cadastro_hospede[(posicao[posicao_hospede].posicaol)].codigo);
                                                fprintf(imprimir_hospede, "Nome:  %s ", cadastro_hospede[(posicao[posicao_hospede].posicaol)].nome_social);
                                                fprintf(imprimir_hospede, "Sexo:  %s ", cadastro_hospede[(posicao[posicao_hospede].posicaol)].sexo);
                                                fprintf(imprimir_hospede, "Estado Civil: %s ", cadastro_hospede[(posicao[posicao_hospede].posicaol)].estado_civil);
                                                fprintf(imprimir_hospede, "Endereco: %s ", cadastro_hospede[(posicao[posicao_hospede].posicaol)].endereco);
                                                fprintf(imprimir_hospede, "Email: %s ", cadastro_hospede[(posicao[posicao_hospede].posicaol)].email);
                                                fprintf(imprimir_hospede, "Telefone: %f \n", cadastro_hospede[(posicao[posicao_hospede].posicaol)].telefone);
                                                fprintf(imprimir_hospede, "CPF: %f \n", cadastro_hospede[(posicao[posicao_hospede].posicaol)].cpf);
                                                fprintf(imprimir_hospede, "Data de Nascimento: %d/%d/%d \n", cadastro_hospede[(posicao[posicao_hospede].posicaol)].dia, cadastro_hospede[(posicao[posicao_hospede].posicaol)].mes, cadastro_hospede[(posicao[posicao_hospede].posicaol)].ano);
                                                fprintf(imprimir_hospede, "\n: \n");
                                                fclose(imprimir_hospede);
                                            }
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_hospede.csv \n");
                                            posicao = malloc(sizeof (posicoes));
                                            free(posicao);
                                            break;

                                    }// confirmar reserva por filtro

                                    break;

                                case 1:
                                    confirmar_reserva = 0;
                                    printf(" 1 - Ver na Tela \n 2 - Imprimir \n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        default:
                                            printf(" Opcao Invalida \n");
                                            break;

                                        case 2:
                                            printf(" ----- Imprimir ----- \n");
                                            FILE* imprimir_hospede = fopen("imprimir_hospede.csv", "w");
                                            for (mostrar_arquivo = 0; mostrar_arquivo < contador_hospede; mostrar_arquivo++) {
                                                fprintf(imprimir_hospede, "Codigo: %d \n", (cadastro_hospede + mostrar_arquivo)->codigo);
                                                fprintf(imprimir_hospede, "Nome:  %s ", (cadastro_hospede + mostrar_arquivo)->nome_social);
                                                fprintf(imprimir_hospede, "Sexo:  %s ", (cadastro_hospede + mostrar_arquivo)->sexo);
                                                fprintf(imprimir_hospede, "Estado Civil: %s ", (cadastro_hospede + mostrar_arquivo)->estado_civil);
                                                fprintf(imprimir_hospede, "Endereco: %s ", (cadastro_hospede + mostrar_arquivo)->endereco);
                                                fprintf(imprimir_hospede, "Email: %s ", (cadastro_hospede + mostrar_arquivo)->email);
                                                fprintf(imprimir_hospede, "Telefone: %f \n", (cadastro_hospede + mostrar_arquivo)->telefone);
                                                fprintf(imprimir_hospede, "CPF: %f \n", (cadastro_hospede + mostrar_arquivo)->cpf);
                                                fprintf(imprimir_hospede, "Data de Nascimento: %d/%d/%d \n", (cadastro_hospede + mostrar_arquivo)->dia, (cadastro_hospede + mostrar_arquivo)->mes, (cadastro_hospede + mostrar_arquivo)->ano);
                                                fprintf(imprimir_hospede, "\n: \n");

                                            }
                                            fclose(imprimir_hospede);
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_hospede.csv \n");
                                            break;

                                        case 1:
                                            verHospede(cadastro_hospede, contador_hospede);
                                            break;



                                    }//fecha ver na tela ou imprimir




                                    break;

                            } // fecha o switch do tipo do feedback

                            break;

                        case 2:
                            remove("imprimir_acomodacoes.csv");
                            printf(" ----- Listagem Acomodacoes ----- \n");
                            printf(" 1 - Todos Campos \n 2 - Filtros \n");
                            scanf("%d", &confirmar_feedback);
                            switch (confirmar_feedback) {
                                default:
                                    printf(" Comando Invalido \n");
                                    break;




                                case 2:
                                    printf(" 1 - Codigo \n 2 - Categoria \n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        default:
                                            printf(" Opcao errado \n");
                                            break;

                                        case 1:
                                            printf(" Digite o codigo do inicio \n");
                                            scanf("%d", &codigo_inicio);
                                            printf(" Digite o codigo do fim \n");
                                            scanf("%d", &codigo_fim);

                                            for (codigo_posicao = codigo_inicio; codigo_posicao <= codigo_fim; codigo_posicao++) {
                                                posicao_hospede = -1;
                                                cadastro_hospede_dados.codigo = 0;
                                                cadastro_hospede_dados.codigo = codigo_posicao;
                                                posicao_hospede = Posicao_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);

                                                FILE* imprimir_acomodacoes = fopen("imprimir_acomodacoes.csv", "a");
                                                fprintf(imprimir_acomodacoes, "Codigo: %d \n", (cadastro_acomodacao + posicao_hospede)->codigo);
                                                fprintf(imprimir_acomodacoes, "Categoria:  %s \n", (cadastro_acomodacao + posicao_hospede)->categoria);
                                                fprintf(imprimir_acomodacoes, "Descricao:  %s \n", (cadastro_acomodacao + posicao_hospede)->descricao);
                                                fprintf(imprimir_acomodacoes, "Facilidades: %s \n", (cadastro_acomodacao + posicao_hospede)->facilidades);
                                                fprintf(imprimir_acomodacoes, "\n: \n");
                                                fclose(imprimir_acomodacoes);

                                            }
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_acomodacoes.csv \n");
                                            break;

                                        case 2:
                                            setbuf(stdin, NULL);
                                            printf(" Digite a Categoria: \n");
                                            scanf("%[^\n]s", &cadastro_acomodacao_dados.categoria);
                                            posicao_hospede = Verificar_acomodacao_Categoria(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                            if (posicao_hospede == -1) {
                                                printf(" Nao cadastrado \n");
                                                break;

                                            }
                                            posicao_hospede = -1;
                                            // ira ter a quantidade de acomodacao com aquela categoria
                                            posicao_hospede = Verificar_acomodacao_Categoria_Quantidade(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                            // aloca uma struct para pegar as posicoes
                                            posicao = malloc(sizeof (posicoes));
                                            // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                            posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                            // iguala uma variavel igual a quantidade que tem
                                            mostrar_arquivo = posicao_hospede;
                                            // funcao que salva na struct todas as posicoes que tem aquele sexo
                                            PosicaoAcomodacao_Teste(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao, posicao);
                                            posicao_hospede = 0;
                                            for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                                FILE* imprimir_acomodacoes = fopen("imprimir_acomodacoes.csv", "a");
                                                fprintf(imprimir_acomodacoes, "Codigo: %d \n", cadastro_acomodacao[(posicao[posicao_hospede].posicaol)].codigo);
                                                fprintf(imprimir_acomodacoes, "Categoria:  %s \n", cadastro_acomodacao[(posicao[posicao_hospede].posicaol)].categoria);
                                                fprintf(imprimir_acomodacoes, "Facilidades:  %s \n", cadastro_acomodacao[(posicao[posicao_hospede].posicaol)].facilidades);
                                                fprintf(imprimir_acomodacoes, "Descricao: %s \n", cadastro_acomodacao[(posicao[posicao_hospede].posicaol)].descricao);
                                                fprintf(imprimir_acomodacoes, "\n: \n");
                                                fclose(imprimir_acomodacoes);
                                            }
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_acomodacoes.csv \n");
                                            posicao = malloc(sizeof (posicoes));
                                            free(posicao);
                                            break;

                                    }// confirmar reserva por filtro

                                    break;

                                case 1:
                                    confirmar_reserva = 0;
                                    printf(" 1 - Ver na Tela \n 2 - Imprimir \n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        default:
                                            printf(" Opcao Invalida \n");
                                            break;

                                        case 2:
                                            printf(" ----- Imprimir ----- \n");
                                            FILE* imprimir_acomodacoes = fopen("imprimir_acomodacoes.csv", "w");
                                            for (mostrar_arquivo = 0; mostrar_arquivo < contador_hospede; mostrar_arquivo++) {
                                                fprintf(imprimir_acomodacoes, "Codigo: %d \n", (cadastro_acomodacao + mostrar_arquivo)->codigo);
                                                fprintf(imprimir_acomodacoes, "Categoria:  %s \n ", (cadastro_acomodacao + mostrar_arquivo)->categoria);
                                                fprintf(imprimir_acomodacoes, "Facilidades:  %s \n", (cadastro_acomodacao + mostrar_arquivo)->facilidades);
                                                fprintf(imprimir_acomodacoes, "Descricao: %s \n", (cadastro_acomodacao + mostrar_arquivo)->descricao);
                                                fprintf(imprimir_acomodacoes, "\n: \n");

                                            }
                                            fclose(imprimir_acomodacoes);
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_acomodacoes.csv \n");
                                            break;

                                        case 1:
                                            ver_acomodacao(cadastro_acomodacao, contador_acomodacao);
                                            break;



                                    }//fecha ver na tela ou imprimir




                                    break;

                            } // fecha o switch do tipo do feedback

                            break;

                        case 3:
                            remove("imprimir_agenda.csv");
                            printf(" ----- Listagem Reservas ----- \n");
                            printf(" 1 - Todos Campos \n 2 - Filtros \n");
                            scanf("%d", &confirmar_feedback);
                            switch (confirmar_feedback) {
                                default:
                                    printf(" Comando Invalido \n");
                                    break;




                                case 2:
                                    printf(" 1 - Por Codigos da Reserva \n 2 - Codigo Hospede \n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        default:
                                            printf(" Opcao errado \n");
                                            break;

                                        case 1:
                                            printf(" Digite o codigo do inicio \n");
                                            scanf("%d", &codigo_inicio);
                                            printf(" Digite o codigo do fim \n");
                                            scanf("%d", &codigo_fim);

                                            for (codigo_posicao = codigo_inicio; codigo_posicao <= codigo_fim; codigo_posicao++) {
                                                posicao_hospede = -1;
                                                cadastro_agenda_dados.codigo_reserva = 0;
                                                cadastro_agenda_dados.codigo_reserva = codigo_posicao;
                                                posicao_hospede = PosicaoReserva(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);

                                                FILE* imprimir_agenda = fopen("imprimir_agenda.csv", "a");
                                                fprintf(imprimir_agenda, " Chegada: %d/%d/%d \n", (cadastro_agenda + posicao_hospede)->dia, (cadastro_agenda + posicao_hospede)->mes, (cadastro_agenda + posicao_hospede)->ano);
                                                fprintf(imprimir_agenda, " Saida: %d/%d/%d \n", (cadastro_agenda + posicao_hospede)->dia_sair, (cadastro_agenda + posicao_hospede)->mes_sair, (cadastro_agenda + posicao_hospede)->ano_sair);
                                                fprintf(imprimir_agenda, " Quantidade de diarias : %d\n", (cadastro_agenda + posicao_hospede)->diarias);
                                                fprintf(imprimir_agenda, " Categoria: %s \n", (cadastro_agenda + posicao_hospede)->categoria);
                                                fprintf(imprimir_agenda, " Codigo da Acomodacao: %d \n", (cadastro_agenda + posicao_hospede)->codigo);
                                                fprintf(imprimir_agenda, " Codigo do Hospede: %d  \n", (cadastro_agenda + posicao_hospede)->hospede);
                                                fprintf(imprimir_agenda, " Codigo da Reserva: %d  \n\n", (cadastro_agenda + posicao_hospede)->codigo_reserva);
                                                fprintf(imprimir_agenda, "\n: \n");
                                                fclose(imprimir_agenda);

                                            }
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_agenda.csv \n");
                                            break;

                                        case 2:
                                            setbuf(stdin, NULL);
                                            printf(" Digite o Codigo do Hospede: \n");
                                            scanf("%d", &cadastro_hospede_dados.codigo);
                                            posicao_hospede = VerificarHospede(cadastro_hospede, &cadastro_hospede_dados, contador_hospede);
                                            if (posicao_hospede == -1) {
                                                printf(" Nao cadastrado \n");
                                                break;

                                            }
                                            cadastro_agenda_dados.hospede = cadastro_hospede_dados.codigo;
                                            posicao_hospede = -1;
                                            // ira ter a quantidade com aquela categoria
                                            posicao_hospede = Verificar_Agenda_Quantidade(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                            // aloca uma struct para pegar as posicoes
                                            posicao = malloc(sizeof (posicoes));
                                            // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                            posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                            // iguala uma variavel igual a quantidade que tem
                                            mostrar_arquivo = posicao_hospede;
                                            // funcao que salva na struct todas as posicoes que tem aquele sexo
                                            PosicaoAgenda_Teste(cadastro_agenda, &cadastro_agenda_dados, contador_agenda, posicao);
                                            posicao_hospede = 0;
                                            for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                                FILE* imprimir_agenda = fopen("imprimir_agenda.csv", "a");
                                                fprintf(imprimir_agenda, " Chegada: %d/%d/%d \n", cadastro_agenda[(posicao[posicao_hospede].posicaol)].dia, cadastro_agenda[(posicao[posicao_hospede].posicaol)].mes, cadastro_agenda[(posicao[posicao_hospede].posicaol)].ano);
                                                fprintf(imprimir_agenda, " Saida: %d/%d/%d \n", cadastro_agenda[(posicao[posicao_hospede].posicaol)].dia_sair, cadastro_agenda[(posicao[posicao_hospede].posicaol)].mes_sair, cadastro_agenda[(posicao[posicao_hospede].posicaol)].ano_sair);
                                                fprintf(imprimir_agenda, " Quantidade de diarias : %d \n", cadastro_agenda[(posicao[posicao_hospede].posicaol)].diarias);
                                                fprintf(imprimir_agenda, " Categoria: %s \n", cadastro_agenda[(posicao[posicao_hospede].posicaol)].categoria);
                                                fprintf(imprimir_agenda, " Codigo da Acomodacao: %d \n", cadastro_agenda[(posicao[posicao_hospede].posicaol)].codigo);
                                                fprintf(imprimir_agenda, " Codigo do Hospede: %d  \n", cadastro_agenda[(posicao[posicao_hospede].posicaol)].hospede);
                                                fprintf(imprimir_agenda, " Codigo da Reserva: %d  \n\n", cadastro_agenda[(posicao[posicao_hospede].posicaol)].codigo_reserva);
                                                fprintf(imprimir_agenda, "\n: \n");
                                                fclose(imprimir_agenda);
                                            }
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_agenda.csv \n");

                                            break;

                                    }// confirmar reserva por filtro

                                    break;

                                case 1:
                                    confirmar_reserva = 0;
                                    printf(" 1 - Ver na Tela \n 2 - Imprimir \n");
                                    scanf("%d", &confirmar_reserva);
                                    switch (confirmar_reserva) {
                                        default:
                                            printf(" Opcao Invalida \n");
                                            break;

                                        case 2:
                                            printf(" ----- Imprimir ----- \n");
                                            FILE* imprimir_agenda = fopen("imprimir_agenda.csv", "w");
                                            for (mostrar_arquivo = 0; mostrar_arquivo < contador_hospede; mostrar_arquivo++) {
                                                fprintf(imprimir_agenda, " Chegada: %d/%d/%d \n", (cadastro_agenda + mostrar_arquivo)->dia, (cadastro_agenda + mostrar_arquivo)->mes, (cadastro_agenda + mostrar_arquivo)->ano);
                                                fprintf(imprimir_agenda, " Saida: %d/%d/%d \n", (cadastro_agenda + mostrar_arquivo)->dia_sair, (cadastro_agenda + mostrar_arquivo)->mes_sair, (cadastro_agenda + mostrar_arquivo)->ano_sair);
                                                fprintf(imprimir_agenda, " Quantidade de diarias : %d\n", (cadastro_agenda + mostrar_arquivo)->diarias);
                                                fprintf(imprimir_agenda, " Categoria: %s \n", (cadastro_agenda + mostrar_arquivo)->categoria);
                                                fprintf(imprimir_agenda, " Codigo da Acomodacao: %d \n", (cadastro_agenda + mostrar_arquivo)->codigo);
                                                fprintf(imprimir_agenda, " Codigo do Hospede: %d  \n", (cadastro_agenda + mostrar_arquivo)->hospede);
                                                fprintf(imprimir_agenda, " Codigo da Reserva: %d  \n\n", (cadastro_agenda + mostrar_arquivo)->codigo_reserva);
                                                fprintf(imprimir_agenda, "\n: \n");

                                            }
                                            fclose(imprimir_agenda);
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_agenda.csv \n");
                                            break;

                                        case 1:
                                            imprimirReserva(cadastro_agenda, contador_agenda);
                                            break;



                                    }//fecha ver na tela ou imprimir




                                    break;

                            } // fecha o switch do tipo do feedback
                            break;

                        case 4:
                            remove("imprimir_movimentacao_acomodacao.csv");
                            printf(" ----- Movimentacoes de Acomodacoes -----\n");



                            printf(" ----- Campos ----- \n");
                            printf(" 1 - Dados da acomodacao \n 2 - Quantas diarias estiveram ocupadas \n 3 - Quanto rendeu em Hospedagem \n");
                            scanf("%d", &confirmar_reserva);
                            switch (confirmar_reserva) {
                                default:
                                    printf(" Comando Invalido \n ");
                                    break;

                                case 1:
                                    printf(" ----- Dados da acomodacao ----- \n");
                                    printf(" Digite o codigo da acomodacao: \n");
                                    scanf("%d", &cadastro_acomodacao_dados.codigo);
                                    posicao_categoria = Posicao_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
                                    if (posicao_categoria == -1) {
                                        printf(" Codigo da acomodacao nao cadastrado \n");
                                        break;
                                    }
                                    printf(" Deseja ver em: \n 1 - Tela \n 2 - Gerar Arquivo \n");
                                    scanf("%d", &verificar_acomodacao);

                                    if (verificar_acomodacao != 1 && verificar_acomodacao != 2) {
                                        printf(" Opcao Invalida");
                                        break;
                                    }

                                    if (verificar_acomodacao == 1) {
                                        printf("Codigo: %d \n", (cadastro_acomodacao + posicao_categoria)->codigo);
                                        printf("Descricao: %s \n", (cadastro_acomodacao + posicao_categoria)->descricao);
                                        printf("Categoria: %s \n", (cadastro_acomodacao + posicao_categoria)->categoria);
                                        printf("Facilidades: %s \n", (cadastro_acomodacao + posicao_categoria)->facilidades);

                                    }
                                    if (verificar_acomodacao == 2) {
                                        FILE* imprimir_movimentacao_acomodacao = fopen("imprimir_movimentacao_acomodacao.csv", "w");
                                        fprintf(imprimir_movimentacao_acomodacao, "Codigo: %d \n", cadastro_acomodacao[posicao_categoria].codigo);
                                        fprintf(imprimir_movimentacao_acomodacao, "Descricao: %s \n", cadastro_acomodacao[posicao_categoria].descricao);
                                        fprintf(imprimir_movimentacao_acomodacao, "Categoria: %s \n", cadastro_acomodacao[posicao_categoria].categoria);
                                        fprintf(imprimir_movimentacao_acomodacao, "Facilidades: %s \n", cadastro_acomodacao[posicao_categoria].facilidades);
                                        fclose(imprimir_movimentacao_acomodacao);
                                        printf(" Arquivo gerado com sucesso em : imprimir_acomodacao.csv \n");

                                    }
                                    break; // fecha o case 1
                                case 2:
                                    printf(" ----- Quantidade de Diarias ----- \n");
                                    printf(" Digite o codigo da acomodacao \n");
                                    scanf("%d", &cadastro_agenda_dados.codigo);
                                    posicao_hospede = Verificar_Diaria_Quantidade(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                    if (posicao_hospede == -1) {
                                        printf(" Codigo invalido \n");
                                        break;
                                    }

                                    posicao_hospede = PosicaoDiaria_Teste(cadastro_agenda, &cadastro_agenda_dados, contador_agenda, posicao);

                                    printf(" Deseja ver por: \n 1 - Tela \n 2 - Arquivo \n");
                                    scanf("%d", &verificar_acomodacao);
                                    if (verificar_acomodacao != 1 && verificar_acomodacao != 2) {
                                        printf(" Comando invalido \n");
                                        break;

                                    }
                                    if (verificar_acomodacao == 2) {

                                        FILE* imprimir_movimentacao_acomodacao = fopen("imprimir_movimentacao_acomodacao.csv", "w");
                                        fprintf(imprimir_movimentacao_acomodacao, "Codigo da acomodacao: %d \n", cadastro_agenda_dados.codigo);
                                        fprintf(imprimir_movimentacao_acomodacao, "Diarias: %d \n", posicao_hospede);
                                        fprintf(imprimir_movimentacao_acomodacao, "\n: \n");
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_movimentacao_acomodacao \n");
                                        fclose(imprimir_movimentacao_acomodacao);
                                    }
                                    if (verificar_acomodacao == 1) {

                                        printf("Codigo da acomodacao: %d \n", cadastro_agenda_dados.codigo);
                                        printf("Diarias: %d \n", posicao_hospede);
                                        printf("\n: \n");
                                    }



                                    break; // fecha o case 2

                                case 3:
                                    printf(" ----- Quanto Rendeu em Hospedagem ----- \n");
                                    printf(" Digite o codigo da acomodacao \n");
                                    scanf("%d", &cadastro_agenda_dados.codigo);
                                    posicao_hospede = Verificar_Reserva(cadastro_acomodacao, &cadastro_agenda_dados, contador_acomodacao);
                                    if (posicao_hospede == -1) {
                                        printf(" Codigo invalido \n");
                                        break;
                                    }
                                    quantidade_diaria_transacao = PosicaoDiaria_Teste(cadastro_agenda, &cadastro_agenda_dados, contador_agenda, posicao);
                                    posicao_agenda = PosicaoReserva_codigo(cadastro_agenda, &cadastro_agenda_dados, contador_agenda);
                                    strcpy(cadastro_categoria_dados.nome, (cadastro_agenda + posicao_agenda)->categoria);
                                    posicao_categoria = Posicao_Categoria_Tipo(cadastro_categoria, &cadastro_categoria_dados, contador_categoria);
                                    cadastro_transacao_dados.deve_diaria = Diaria_Hospede_Valor(cadastro_categoria, posicao_categoria);
                                    total_pagar = cadastro_transacao_dados.deve_diaria *quantidade_diaria_transacao;
                                    if (posicao_agenda == -1) {
                                        printf(" Ocorreu um erro \n");
                                        break;
                                    }
                                    printf(" Deseja ver por: \n 1 - Tela \n 2 - Arquivo \n");
                                    scanf("%d", &verificar_acomodacao);
                                    if (verificar_acomodacao != 1 && verificar_acomodacao != 2) {
                                        printf(" Comando invalido \n");
                                        break;

                                    }
                                    if (verificar_acomodacao == 2) {

                                        FILE* imprimir_movimentacao_acomodacao = fopen("imprimir_movimentacao_acomodacao.csv", "w");
                                        fprintf(imprimir_movimentacao_acomodacao, "Codigo da acomodacao: %d \n", cadastro_agenda_dados.codigo);
                                        fprintf(imprimir_movimentacao_acomodacao, "Total: %f \n", total_pagar);
                                        fprintf(imprimir_movimentacao_acomodacao, "\n: \n");
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_movimentacao_acomodacao \n");
                                        fclose(imprimir_movimentacao_acomodacao);
                                    }
                                    if (verificar_acomodacao == 1) {

                                        printf("Codigo da acomodacao: %d \n", cadastro_agenda_dados.codigo);
                                        printf("Total: %f \n", total_pagar);
                                        printf("\n: \n");
                                    }


                                    break; // fecha o case 3

                            }// fecha o confirmar reserva



                            break;

                        case 5:
                            remove("imprimir_produto.csv");
                            verificar_reserva = 0;
                            printf(" ----- Listagem de Produtos de Consumos ----- \n");
                            printf(" 1 - Deseja Listar Todos os campos \n");
                            printf(" 2 - Filtros \n");
                            scanf("%d", &confirmar_reserva);
                            switch (confirmar_reserva) {
                                case 1:
                                    printf(" 1 - Deseja por arquivo?\n 2 - Por Tela \n");
                                    scanf("%d", &verificar_reserva);
                                    if (verificar_reserva != 1 && verificar_reserva != 2) {
                                        printf(" Comando Invalido");
                                        break;
                                    }
                                    if (verificar_reserva == 1) {
                                        printf(" ----- Arquivo ----- \n");
                                        FILE* imprimir_produto = fopen("imprimir_produto.csv", "w");
                                        for (mostrar_arquivo = 0; mostrar_arquivo < contador_produto; mostrar_arquivo++) {
                                            fprintf(imprimir_produto, "Codigo: %d - %d \n", mostrar_arquivo + 1, (cadastro_produto + mostrar_arquivo)->codigo);
                                            fprintf(imprimir_produto, "Estoque: %d \n", (cadastro_produto + mostrar_arquivo)->estoque);
                                            fprintf(imprimir_produto, "Estoque Minimo: %d \n", (cadastro_produto + mostrar_arquivo)->estoque_minimo);
                                            fprintf(imprimir_produto, "Preco Custo: %d \n", (cadastro_produto + mostrar_arquivo)->preco_custo);
                                            fprintf(imprimir_produto, "Preco Venda: %d \n", (cadastro_produto + mostrar_arquivo)->preco_venda);
                                            fprintf(imprimir_produto, "Nome: %s \n", (cadastro_produto + mostrar_arquivo)->nome);
                                            fprintf(imprimir_produto, "Descricao: %s \n\n", (cadastro_produto + mostrar_arquivo)->descricao);
                                            fprintf(imprimir_produto, "\n: \n");
                                        }
                                        fclose(imprimir_produto);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_produto.csv \n");

                                    }
                                    if (verificar_reserva == 2) {
                                        printf(" ----- Imprimir na Tela ----- \n");
                                        verProduto(cadastro_produto, contador_produto);
                                    }


                                    break;
                                case 2:
                                    verificar_reserva = 0;
                                    printf(" 1 - Listagem Por Codigo \n 2 - Listagem Por Estoque Minimo \n");
                                    scanf("%d", &verificar_reserva);
                                    if (verificar_reserva != 1 && verificar_reserva != 2) {
                                        printf(" Comando Invalida \n");
                                        break;
                                    }
                                    if (verificar_reserva == 1) {
                                        printf(" Digite o codigo do inicio \n");
                                        scanf("%d", &codigo_inicio);
                                        printf(" Digite o codigo do fim \n");
                                        scanf("%d", &codigo_fim);
                                        listar_produtos = 0;
                                        printf(" Deseja ver em: \n 1 - Tela \n 2 - Arquivo \n");
                                        scanf("%d", &listar_produtos);
                                        if (listar_produtos != 1 && listar_produtos != 2) {
                                            printf(" Comando Invalido \n");
                                            break;
                                        }
                                        if (listar_produtos == 2) {
                                            FILE* imprimir_produto = fopen("imprimir_produto.csv", "w");
                                            for (mostrar_arquivo = codigo_inicio; mostrar_arquivo <= codigo_fim; mostrar_arquivo++) {
                                                fprintf(imprimir_produto, "Codigo: %d - %d \n", mostrar_arquivo + 1, (cadastro_produto + mostrar_arquivo)->codigo);
                                                fprintf(imprimir_produto, "Estoque: %d \n", (cadastro_produto + mostrar_arquivo)->estoque);
                                                fprintf(imprimir_produto, "Estoque Minimo: %d \n", (cadastro_produto + mostrar_arquivo)->estoque_minimo);
                                                fprintf(imprimir_produto, "Preco Custo: %d \n", (cadastro_produto + mostrar_arquivo)->preco_custo);
                                                fprintf(imprimir_produto, "Preco Venda: %d \n", (cadastro_produto + mostrar_arquivo)->preco_venda);
                                                fprintf(imprimir_produto, "Nome: %s \n", (cadastro_produto + mostrar_arquivo)->nome);
                                                fprintf(imprimir_produto, "Descricao: %s \n\n", (cadastro_produto + mostrar_arquivo)->descricao);
                                                fprintf(imprimir_produto, "\n: \n");
                                            }
                                            fclose(imprimir_produto);
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_produto.csv \n");
                                        }
                                        if (listar_produtos == 1) {
                                            for (mostrar_arquivo = codigo_inicio; mostrar_arquivo <= codigo_fim; mostrar_arquivo++) {
                                                printf("Codigo: %d - %d \n", mostrar_arquivo + 1, (cadastro_produto + mostrar_arquivo)->codigo);
                                                printf("Estoque: %d \n", (cadastro_produto + mostrar_arquivo)->estoque);
                                                printf("Estoque Minimo: %d \n", (cadastro_produto + mostrar_arquivo)->estoque_minimo);
                                                printf("Preco Custo: %d \n", (cadastro_produto + mostrar_arquivo)->preco_custo);
                                                printf("Preco Venda: %d \n", (cadastro_produto + mostrar_arquivo)->preco_venda);
                                                printf("Nome: %s \n", (cadastro_produto + mostrar_arquivo)->nome);
                                                printf("Descricao: %s \n\n", (cadastro_produto + mostrar_arquivo)->descricao);

                                            }

                                        }


                                    }
                                    if (verificar_reserva == 2) {
                                        printf(" ----- Listagem por Estoque Minimo ----- \n");
                                        printf(" Digite a quantidade de estoque minimos que deseja procurar \n");
                                        scanf("%d", &cadastro_produto_dados.estoque_minimo);
                                        posicao_hospede = VerificarProduto_Quantidade(cadastro_produto, &cadastro_produto_dados, contador_produto);
                                        if (posicao_hospede < 1) {
                                            printf(" Nenhum produto encontrado \n");
                                            break;
                                        }
                                        // aloca uma struct para pegar as posicoes
                                        posicao = malloc(sizeof (posicoes));
                                        // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                        posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                        // iguala uma variavel igual a quantidade que tem
                                        mostrar_arquivo = posicao_hospede;
                                        // funcao que salva na struct todas as posicoes que tem aquele sexo
                                        PosicaoProduto_Quantidade(cadastro_produto, &cadastro_produto_dados, contador_produto, posicao);
                                        posicao_hospede = 0;
                                        printf(" Deseja ver em: \n 1 - Tela \n 2 - Arquivo \n");
                                        scanf("%d", &listar_produtos);
                                        if (listar_produtos != 1 && listar_produtos != 2) {
                                            printf(" Comando Invalido \n");
                                            break;

                                        }
                                        if (listar_produtos == 1) {
                                            for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                                printf("Codigo: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].codigo);
                                                printf("Estoque: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].estoque);
                                                printf("Estoque Minimo: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].estoque_minimo);
                                                printf("Preco Custo: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].preco_custo);
                                                printf("Preco Venda: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].preco_venda);
                                                printf("Nome: %s \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].nome);
                                                printf("Descricao: %s \n\n", cadastro_produto[(posicao[posicao_hospede].posicaol)].descricao);


                                            }


                                        }
                                        if (listar_produtos == 2) {
                                            FILE* imprimir_produto = fopen("imprimir_produto.csv", "w");
                                            for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                                fprintf(imprimir_produto, "Codigo: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].codigo);
                                                fprintf(imprimir_produto, "Estoque: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].estoque);
                                                fprintf(imprimir_produto, "Estoque Minimo: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].estoque_minimo);
                                                fprintf(imprimir_produto, "Preco Custo: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].preco_custo);
                                                fprintf(imprimir_produto, "Preco Venda: %d \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].preco_venda);
                                                fprintf(imprimir_produto, "Nome: %s \n", cadastro_produto[(posicao[posicao_hospede].posicaol)].nome);
                                                fprintf(imprimir_produto, "Descricao: %s \n\n", cadastro_produto[(posicao[posicao_hospede].posicaol)].descricao);
                                                fprintf(imprimir_produto, "\n: \n");

                                            }
                                            fclose(imprimir_produto);
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_produto.csv \n");
                                            posicao = malloc(sizeof (posicoes));
                                            free(posicao);
                                        }
                                    }

                                    break;
                                default:
                                    printf(" Comando invalido \n");
                                    break;


                            }
                            break;

                        case 6:
                            remove("imprimir_venda.csv");
                            printf(" ----- Vendas ----- \n");
                            printf(" Deseja ver: \n 1 - Todas Vendas \n 2 - Filtrar \n");
                            scanf("%d", &confirmar_reserva);
                            switch (confirmar_reserva) {
                                case 1:
                                    printf(" ----- Todas as Vendas ----- \n");
                                    printf(" 1 - Em Tela \n 2 - Em Arquivo \n");
                                    scanf("%d", &verificar_reserva);
                                    if (verificar_reserva != 1 && verificar_reserva != 2) {
                                        printf(" Comando Invalido \n");
                                        break;
                                    }
                                    if (verificar_reserva == 1) {
                                        verControle(cadastro_controle, contador_controle);
                                    }
                                    if (verificar_reserva == 2) {
                                        FILE* imprimir_venda = fopen("imprimir_venda.csv", "w");
                                        for (mostrar_arquivo = 0; mostrar_arquivo < contador_controle; mostrar_arquivo++) {
                                            fprintf(imprimir_venda, "Valor: %f \n", (cadastro_controle + mostrar_arquivo)->valor);
                                            fprintf(imprimir_venda, "Motivo: %s \n", (cadastro_controle + mostrar_arquivo)->vendido);
                                            fprintf(imprimir_venda, "Tipo: %s \n\n", (cadastro_controle + mostrar_arquivo)->tipo);
                                            fprintf(imprimir_venda, "\n: \n");
                                        }
                                        fclose(imprimir_venda);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_venda.csv \n");
                                    }

                                    break; // fecha o case 1
                                case 2:
                                    printf(" ----- Filtros ----- \n ");
                                    printf(" Dinheiro ou Cartao \n");
                                    printf(" Digite qual deseja pesquisar \n ");
                                    setbuf(stdin, NULL);
                                    scanf("%[^\n]s", &cadastro_controle_dados.tipo);
                                    posicao_hospede = VerificarControle(cadastro_controle, &cadastro_controle_dados, contador_controle);
                                    printf(" %d", posicao_hospede);
                                    if (posicao_hospede == 0) {
                                        printf(" Tipo Invalido \n");
                                        break;
                                    }
                                    printf(" 1 - Em Tela \n 2 - Arquivo \n");
                                    scanf("%d", &confirmar_reserva);
                                    if (confirmar_reserva != 1 && confirmar_reserva != 2) {
                                        printf(" Comando Invalido \n");
                                        break;
                                    }

                                    // aloca uma struct para pegar as posicoes
                                    posicao = malloc(sizeof (posicoes));
                                    // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                    posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                    // iguala uma variavel igual a quantidade que tem
                                    mostrar_arquivo = posicao_hospede;
                                    // funcao que salva na struct todas as posicoes que tem aquele sexo
                                    PosicaoControle_Quantidade(cadastro_controle, &cadastro_controle_dados, contador_controle, posicao);
                                    posicao_hospede = 0;
                                    if (confirmar_reserva == 1) {
                                        for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                            printf("Valor: %f \n", cadastro_controle[(posicao[posicao_hospede].posicaol)].valor);
                                            printf("Motivo: %s \n", cadastro_controle[(posicao[posicao_hospede].posicaol)].vendido);
                                            printf("Tipo: %s \n\n", cadastro_controle[(posicao[posicao_hospede].posicaol)].tipo);
                                        }
                                    }
                                    if (confirmar_reserva == 2) {
                                        FILE* imprimir_venda = fopen("imprimir_venda.csv", "w");
                                        for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                            fprintf(imprimir_venda, "Valor: %f \n", cadastro_controle[(posicao[posicao_hospede].posicaol)].valor);
                                            fprintf(imprimir_venda, "Motivo: %s \n", cadastro_controle[(posicao[posicao_hospede].posicaol)].vendido);
                                            fprintf(imprimir_venda, "Tipo: %s \n\n", cadastro_controle[(posicao[posicao_hospede].posicaol)].tipo);
                                        }
                                        fclose(imprimir_venda);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_venda.csv \n");
                                        posicao = malloc(sizeof (posicoes));
                                        free(posicao);
                                    }


                                    break;
                                default:
                                    printf(" Comando Invalido \n");
                                    break;
                            }// switch
                            break;
                        case 7:
                            remove("imprimir_receber.csv");
                            printf(" ----- Contas a Receber ----- \n");
                            printf(" 1 - Ver Todos Campos \n 2 - Filtros \n");
                            scanf("%d", &confirmar_reserva);
                            switch (confirmar_reserva) {
                                case 1:
                                    printf(" ----- Todos Campos ----- \n");
                                    printf(" 1 - Tela \n 2 - Arquivos \n");
                                    scanf("%d", &verificar_reserva);

                                    if (verificar_reserva != 1 && verificar_reserva != 2) {
                                        printf(" Opcao Invalida \n");
                                    }
                                    if (verificar_reserva == 1) {
                                        verReceber(cadastro_receber, contador_receber);
                                    }


                                    if (verificar_reserva == 2) {
                                        printf(" ----- Arquivos ----- \n");
                                        FILE* imprimir_receber = fopen("imprimir_receber.csv", "w");
                                        for (mostrar_arquivo = 0; mostrar_arquivo < contador_receber; mostrar_arquivo++) {
                                            fprintf(imprimir_receber, "Valor: %f \n", (cadastro_receber + mostrar_arquivo)->valor);
                                            fprintf(imprimir_receber, " Data: %d/%d/%d \n\n", (cadastro_receber + mostrar_arquivo)->dia, (cadastro_receber + mostrar_arquivo)->mes, (cadastro_receber + mostrar_arquivo)->ano);
                                            fprintf(imprimir_receber, "\n: \n");
                                        }
                                        fclose(imprimir_receber);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_receber.csv \n");

                                    }
                                    break;
                                case 2:
                                    printf(" ----- Filtros ----- \n");
                                    printf(" 1 - Faixa de Codigos \n 2 - Data de Recebimento \n");
                                    scanf("%d", &verificar_reserva);
                                    if (verificar_reserva != 1 && verificar_reserva != 2) {
                                        printf(" Opcao Invalida \n");
                                    }
                                    printf(" Digite o codigo do inicio \n");
                                    scanf("%d", &codigo_inicio);
                                    printf(" Digite o codigo do fim \n");
                                    scanf("%d", &codigo_fim);
                                    listar_produtos = 0;
                                    printf(" Deseja ver em: \n 1 - Tela \n 2 - Arquivo \n");
                                    scanf("%d", &listar_produtos);
                                    if (listar_produtos != 1 && listar_produtos != 2) {
                                        printf(" Comando Invalido \n");
                                        break;
                                    }
                                    if (listar_produtos == 2) {
                                        FILE* imprimir_receber = fopen("imprimir_receber.csv", "w");
                                        for (mostrar_arquivo = codigo_inicio; mostrar_arquivo <= codigo_fim; mostrar_arquivo++) {
                                            fprintf(imprimir_receber, "Valor: %f \n", (cadastro_receber + mostrar_arquivo)->valor);
                                            fprintf(imprimir_receber, " Data: %d/%d/%d \n\n", (cadastro_receber + mostrar_arquivo)->dia, (cadastro_receber + mostrar_arquivo)->mes, (cadastro_receber + mostrar_arquivo)->ano);
                                            fprintf(imprimir_receber, "\n: \n");
                                        }
                                        fclose(imprimir_receber);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_receber.csv \n");
                                    }
                                    if (listar_produtos == 1) {
                                        for (mostrar_arquivo = codigo_inicio; mostrar_arquivo <= codigo_fim; mostrar_arquivo++) {
                                            printf("Valor: %f \n", (cadastro_receber + mostrar_arquivo)->valor);
                                            printf(" Data: %d/%d/%d \n\n", (cadastro_receber + mostrar_arquivo)->dia, (cadastro_receber + mostrar_arquivo)->mes, (cadastro_receber + mostrar_arquivo)->ano);
                                        }

                                    }
                                    if (verificar_reserva == 2) {
                                        printf(" ----- Data de Recebimento ----- \n");
                                        printf(" Digite o DD/MM/AA \n");
                                        scanf("%d/%d/%d", &cadastro_receber_dados.dia, &cadastro_receber_dados.mes, &cadastro_receber_dados.ano);
                                        posicao_hospede = VerificarReceber(cadastro_receber, &cadastro_receber_dados, contador_receber);
                                        if (posicao_hospede == 0) {
                                            printf(" Data nao bate com nenhuma do sistema \n");
                                        }
                                        posicao = malloc(sizeof (posicoes));
                                        // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                        posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                        // iguala uma variavel igual a quantidade que tem
                                        mostrar_arquivo = posicao_hospede;
                                        // funcao que salva na struct todas as posicoes que tem aquele sexo
                                        PosicaoReceber_Quantidade(cadastro_receber, &cadastro_receber_dados, contador_receber, posicao);
                                        posicao_hospede = 0;
                                        printf(" Deseja ver em: \n 1 - Tela \n 2 - Arquivo \n");
                                        scanf("%d", &verificar_recebimento);
                                        if (verificar_recebimento != 1 && verificar_recebimento != 2) {
                                            printf(" Comando Invalido \n");
                                        }

                                        if (verificar_recebimento == 1) {
                                            for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                                printf("Valor: %f \n", cadastro_receber[(posicao[posicao_hospede].posicaol)].valor);
                                                printf(" Data: %d/%d/%d \n\n", cadastro_receber[(posicao[posicao_hospede].posicaol)].dia, cadastro_receber[(posicao[posicao_hospede].posicaol)].mes, cadastro_receber[(posicao[posicao_hospede].posicaol)].ano);
                                            }


                                        }
                                        if (verificar_recebimento == 2) {
                                            FILE* imprimir_receber = fopen("imprimir_receber.csv", "w");
                                            for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                                fprintf(imprimir_receber, "Valor: %f \n", cadastro_receber[(posicao[posicao_hospede].posicaol)].valor);
                                                fprintf(imprimir_receber, " Data: %d/%d/%d \n\n", cadastro_receber[(posicao[posicao_hospede].posicaol)].dia, cadastro_receber[(posicao[posicao_hospede].posicaol)].mes, cadastro_receber[(posicao[posicao_hospede].posicaol)].ano);
                                                fprintf(imprimir_receber, "\n: \n");
                                            }
                                            fclose(imprimir_receber);
                                            printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_receber.csv \n");
                                            posicao = malloc(sizeof (posicoes));
                                            free(posicao);

                                        }




                                    }
                                    break;


                                default:
                                    printf(" Comando Invalido \n");
                                    break;

                            }
                            break;

                        case 8:
                            remove("imprimir_pagar.csv");
                            printf(" ----- Contas a Pagar ----- \n");
                            printf(" Deseja ver: \n 1 - Todos Campos \n 2 - Filtros \n");
                            scanf("%d", &confirmar_reserva);
                            switch (confirmar_reserva) {
                                case 1:
                                    printf(" ----- Todos Campos ----- \n");
                                    printf(" Deseja Ver em: \n 1 - Tela \n 2 - Arquivo \n");
                                    scanf("%d", &verificar_reserva);
                                    if (verificar_reserva != 1 && verificar_reserva != 2) {
                                        printf(" Opcao Invalida \n");
                                        break;
                                    }
                                    if (verificar_reserva == 1) {
                                        printf(" ----- Tela ----- \n");
                                        verContas(cadastro_conta, contador_conta);
                                    }

                                    if (verificar_reserva == 2) {
                                        printf(" ----- Arquivo ----- \n");
                                        FILE* imprimir_pagar = fopen("imprimir_pagar.csv", "w");
                                        for (mostrar_arquivo = 0; mostrar_arquivo < contador_conta; mostrar_arquivo++) {
                                            fprintf(imprimir_pagar, "Codigo: %d - %d \n", mostrar_arquivo + 1, (cadastro_conta + mostrar_arquivo)->codigo);
                                            fprintf(imprimir_pagar, "Valor: %f \n", (cadastro_conta + mostrar_arquivo)->deve);
                                            fprintf(imprimir_pagar, "Nome: %s \n", (cadastro_conta + mostrar_arquivo)->compra);
                                            fprintf(imprimir_pagar, "Fornecedor: %s \n", (cadastro_conta + mostrar_arquivo)->fornecedor);
                                            fprintf(imprimir_pagar, "Descricao: %s \n\n", (cadastro_conta + mostrar_arquivo)->descricao);
                                            fprintf(imprimir_pagar, "\n: \n");
                                        }
                                        fclose(imprimir_pagar);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_pagar.csv \n");
                                    }
                                    break;

                                case 2:
                                    printf(" ----- Filtros ----- \n");
                                    printf(" ----- Data Pagamento ----- \n");
                                    printf(" Digite a data inicial: DD/MM/AA\n");
                                    scanf("%d/%d/%d", &cadastro_conta_dados.dia, &cadastro_conta_dados.mes, &cadastro_conta_dados.ano);
                                    printf(" Digite a data final: DD/MM/AA\n");
                                    scanf("%d/%d/%d", &cadastro_conta_dados.dia_fim, &cadastro_conta_dados.mes_fim, &cadastro_conta_dados.ano_fim);
                                    posicao_hospede = VerificarContaz(cadastro_conta, &cadastro_conta_dados, contador_conta);
                                    if (posicao_hospede == 0) {
                                        printf(" Data nao bate com nenhuma do sistema \n");
                                        break;
                                    }
                                    posicao = malloc(sizeof (posicoes));
                                    // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                    posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                    // iguala uma variavel igual a quantidade que tem
                                    mostrar_arquivo = posicao_hospede;
                                    // funcao que salva na struct todas as posicoes que tem aquele sexo
                                    PosicaoConta_QuantidadeVerificarConta(cadastro_conta, &cadastro_conta_dados, contador_conta, posicao);
                                    posicao_hospede = 0;
                                    printf(" Deseja ver em: \n 1 - Tela \n 2 - Arquivo \n");
                                    scanf("%d", &verificar_recebimento);
                                    if (verificar_recebimento != 1 && verificar_recebimento != 2) {
                                        printf(" Comando Invalido \n");
                                        break;
                                    }

                                    if (verificar_recebimento == 1) {
                                        for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                            printf("Codigo: %d \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].codigo);
                                            printf("Valor: %f \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].deve);
                                            printf("Nome: %s \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].compra);
                                            printf("Fornecedor: %s \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].fornecedor);
                                            printf("Descricao: %s \n\n", cadastro_conta[(posicao[posicao_hospede].posicaol)].descricao);
                                        }
                                    }
                                    if (verificar_recebimento == 2) {
                                        FILE* imprimir_conta = fopen("imprimir_conta.csv", "w");
                                        for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                            fprintf(imprimir_conta, "Codigo: %d \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].codigo);
                                            fprintf(imprimir_conta, "Valor: %f \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].deve);
                                            fprintf(imprimir_conta, "Nome: %s \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].compra);
                                            fprintf(imprimir_conta, "Fornecedor: %s \n", cadastro_conta[(posicao[posicao_hospede].posicaol)].fornecedor);
                                            fprintf(imprimir_conta, "Descricao: %s \n\n", cadastro_conta[(posicao[posicao_hospede].posicaol)].descricao);
                                            fprintf(imprimir_conta, "\n: \n");
                                        }
                                        fclose(imprimir_conta);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_imprimir_conta.csv \n");
                                        posicao = malloc(sizeof (posicoes));
                                        free(posicao);

                                    }
                                    break;

                                default:
                                    printf(" Opcao Invalida \n");
                                    break;



                            }//fecha o switch
                            break; // fecha o case 8

                        case 9:
                            remove("imprimir_movimento.csv");
                            printf(" ----- Movimentacao do Caixa ----- \n");
                            printf(" Deseja ver por : \n 1 - Todos Campos \n 2 - Filtros \n");
                            scanf("%d", &confirmar_reserva);
                            switch (confirmar_reserva) {
                                case 1:
                                    printf(" ----- Todas as Movimentacoes ----- \n");
                                    printf(" 1 - Em Tela \n 2 - Em Arquivo \n");
                                    scanf("%d", &verificar_reserva);
                                    if (verificar_reserva != 1 && verificar_reserva != 2) {
                                        printf(" Comando Invalido \n");
                                        break;
                                    }
                                    if (verificar_reserva == 1) {
                                        Exibir_Caixa(cadastro_caixa, &cadastro_caixa_dados, contador_caixa);
                                    }
                                    if (verificar_reserva == 2) {
                                        FILE* imprimir_caixa = fopen("imprimir_caixa.csv", "w");
                                        for (mostrar_arquivo = 0; mostrar_arquivo < contador_caixa; mostrar_arquivo++) {
                                            fprintf(imprimir_caixa, " Valor em Caixa: %f \n", (cadastro_caixa + mostrar_arquivo)->caixa);
                                            fprintf(imprimir_caixa, " Valor alterado: %f \n", (cadastro_caixa + mostrar_arquivo)->entrou);
                                            fprintf(imprimir_caixa, " Tipo: %s \n", (cadastro_caixa + mostrar_arquivo)->tipo);
                                            fprintf(imprimir_caixa, " Data: %d/%d/%d \n\n", (cadastro_caixa + mostrar_arquivo)->dia, (cadastro_caixa + mostrar_arquivo)->mes, (cadastro_caixa + mostrar_arquivo)->ano);
                                            fprintf(imprimir_caixa, "\n: \n");
                                        }
                                        fclose(imprimir_caixa);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_caixa.csv \n");
                                    }


                                    break;

                                case 2:
                                    printf(" ----- Filtros ----- \n");
                                    printf(" ----- Datas ----- \n");
                                    printf(" Digite a data inicial: DD/MM/AAAA \n");
                                    scanf("%d/%d/%d", &cadastro_caixa_dados.dia, &cadastro_caixa_dados.mes, &cadastro_caixa_dados.ano);
                                    printf(" Digite a data final: DD/MM/AAAA \n");
                                    scanf("%d/%d/%d", &cadastro_caixa_dados.dia_fim, &cadastro_caixa_dados.mes_fim, &cadastro_caixa_dados.ano_fim);
                                    posicao_hospede = VerificarCaixas(cadastro_caixa, &cadastro_caixa_dados, contador_caixa);
                                    if (posicao_hospede == 0) {
                                        printf(" Data nao bate com nenhuma do sistema \n");
                                        break;
                                    }
                                    posicao = malloc(sizeof (posicoes));
                                    // realoca ela do tamanho da posicao que recebeu de hospedes que tem
                                    posicao = realloc(posicao, (posicao_hospede + 2) * sizeof (posicoes));
                                    // iguala uma variavel igual a quantidade que tem
                                    mostrar_arquivo = posicao_hospede;
                                    // funcao que salva na struct todas as posicoes que tem aquele sexo
                                    PosicaoCaixa_QuantidadeVerificarConta(cadastro_caixa, &cadastro_caixa_dados, contador_caixa, posicao);
                                    posicao_hospede = 0;
                                    printf(" Deseja ver em: \n 1 - Tela \n 2 - Arquivo \n");
                                    scanf("%d", &verificar_recebimento);
                                    if (verificar_recebimento != 1 && verificar_recebimento != 2) {
                                        printf(" Comando Invalido \n");
                                        break;
                                    }

                                    if (verificar_recebimento == 1) {
                                        for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                            printf(" Valor em Caixa: %f \n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].caixa);
                                            printf(" Valor alterado: %f \n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].entrou);
                                            printf(" Tipo: %s \n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].tipo);
                                            printf(" Data: %d/%d/%d \n\n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].dia, cadastro_caixa[(posicao[posicao_hospede].posicaol)].mes, cadastro_caixa[(posicao[posicao_hospede].posicaol)].ano);
                                        }
                                    }
                                    if (verificar_recebimento == 2) {
                                        FILE* imprimir_caixa = fopen("imprimir_caixa.csv", "w");
                                        for (posicao_hospede = 0; posicao_hospede < mostrar_arquivo; posicao_hospede++) {
                                            fprintf(imprimir_caixa, " Valor em Caixa: %f \n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].caixa);
                                            fprintf(imprimir_caixa, " Valor alterado: %f \n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].entrou);
                                            fprintf(imprimir_caixa, " Tipo: %s \n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].tipo);
                                            fprintf(imprimir_caixa, " Data: %d/%d/%d \n\n", cadastro_caixa[(posicao[posicao_hospede].posicaol)].dia, cadastro_caixa[(posicao[posicao_hospede].posicaol)].mes, cadastro_caixa[(posicao[posicao_hospede].posicaol)].ano);
                                            fprintf(imprimir_caixa, "\n: \n");
                                        }
                                        fclose(imprimir_caixa);
                                        printf(" Enviado Para Visualizacao Com Sucesso Arquivo:  imprimir_caixa.csv \n");
                                        posicao = malloc(sizeof (posicoes));
                                        free(posicao);

                                    }
                                    break;
                                default:
                                    printf(" Comando Invalido \n");
                                    break;
                            }//fecha o switch
                            break; // fecha o case 9
                        case 10:
                            printf(" ----- Retornado ----- \n");
                            break;

                        default:
                            printf(" ----- Opcao INVALIDA ----- \n");
                            break;


                    }// fecha o switch feedback

                } // fecha menu feedback
                break; // fecha case 4


            case 5:
                verificar_acesso0 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                verificar_acesso5 = verificar_acessos(cadastro_operadores, verificar_Posicao_login);
                if (verificar_acesso0 == 1 & verificar_acesso1 == 1) {
                    printf(" Sem Permissao de acesso \n");
                    break;
                }
                printf(" ----- Modulo de Importacao/Exportacao ----- \n");
                printf(" 1 - Importar \n 2 - Exportar \n");
                scanf("%d", &verificar_reserva);
                switch (verificar_reserva) {
                    case 1:
                        printf(" ----- Importar ----- \n");
                        printf(" 1 - Hotel \n");
                        printf(" 2 - Hospede \n");
                        printf(" 3 - Produtos \n");
                        printf(" 4 - Categoria \n");
                        printf(" 5 - Acomodacoes \n");
                        printf(" 6 - Fornecedores \n");
                        printf(" 7 - Operador \n");
                        printf(" 8 - Transacoes \n");
                        printf(" 9 - Controle Caixa \n");
                        printf(" 10 - Receber Contas \n");
                        printf(" 11 - Caixa \n");
                        printf(" 12 - Conta \n");
                        printf(" 13 - Reservas \n");
                        scanf("%d", &confirmar_reserva);
                        switch (confirmar_reserva) {
                            case 1:
                                printf(" ----- Hotel ----- \n");
                                contador_hotel = 0;
                                nlinhas = 0;

                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hotel_dados.cnpj = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hotel_dados.nome_social, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hotel_dados.email, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hotel_dados.inscricao_estadual, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hotel_dados.razao_social, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 6) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hotel_dados.horario_chegar = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 7) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hotel_dados.horario_sair = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 8) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hotel_dados.telefone = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 9) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hotel_dados.telefone_dono = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 10) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hotel_dados.lucro_produtos_vendidos = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 11) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hotel_dados.endereco, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 12) {
                                        contadorinicial = 0;
                                        CadastroHotel(cadastro_hotel, &cadastro_hotel_dados, &contador_hotel);
                                        //realocação de memoria
                                        cadastro_hotel = realloc(cadastro_hotel, (contador_hotel + 2) * sizeof (criar_Hotel));
                                        if (cadastro_hotel == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");

                                break;

                            case 2:
                                contador_hospede = 0;
                                printf(" ----- Hospede ----- \n");
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hospede_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hospede_dados.nome_social, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hospede_dados.email, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hospede_dados.sexo, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hospede_dados.estado_civil, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 6) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        variavel_auxiliar_2 = strtok(NULL, "/");
                                        cadastro_hospede_dados.mes = atoi(variavel_auxiliar_2);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_hospede_dados.dia = atoi(variavel_auxiliar_2);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_hospede_dados.ano = atoi(variavel_auxiliar_2);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 7) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hospede_dados.cpf = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 8) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_hospede_dados.telefone = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 9) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_hospede_dados.endereco, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 10) {
                                        contadorinicial = 0;
                                        CadastroHospede(cadastro_hospede, &cadastro_hospede_dados, &contador_hospede);
                                        //realocação de memoria
                                        cadastro_hospede = realloc(cadastro_hospede, (contador_hospede + 2) * sizeof (criar_Hospede));
                                        if (cadastro_hospede == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");
                                break;
                            case 3:
                                printf(" ----- Produtos ----- \n");
                                contador_produto = 0;
                                nlinhas = 0;

                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_produto_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_produto_dados.nome, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_produto_dados.descricao, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_produto_dados.estoque = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_produto_dados.estoque_minimo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 6) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_produto_dados.preco_custo = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 7) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_produto_dados.preco_venda = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 8) {
                                        contadorinicial = 0;
                                        CadastroProduto(cadastro_produto, &cadastro_produto_dados, &contador_produto);
                                        //realocação de memoria
                                        cadastro_produto = realloc(cadastro_produto, (contador_produto + 2) * sizeof (cadastro_Prod));
                                        if (cadastro_produto == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");
                                break;
                            case 4:
                                printf(" ----- Categoria ----- \n");
                                contador_categoria = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_categoria_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_categoria_dados.nome, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_categoria_dados.descricao, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_categoria_dados.facilidades, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_categoria_dados.quantidade_comportada = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 6) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_categoria_dados.valor = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 7) {
                                        contadorinicial = 0;
                                        Cadastro_Categoria(cadastro_categoria, &cadastro_categoria_dados, &contador_categoria);
                                        //realocação de memoria
                                        cadastro_categoria = realloc(cadastro_categoria, (contador_categoria + 2) * sizeof (cadastro_categoria_acomodacao));
                                        if (cadastro_categoria == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");

                                break;

                            case 5:
                                printf(" ----- Acomodacao ----- \n");
                                contador_acomodacao = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_acomodacao_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_acomodacao_dados.categoria, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_acomodacao_dados.descricao, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_acomodacao_dados.facilidades, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        contadorinicial = 0;
                                        Cadastro_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, &contador_acomodacao);
                                        //realocação de memoria
                                        cadastro_acomodacao = realloc(cadastro_acomodacao, (contador_acomodacao + 2) * sizeof (criar_Acomodacao));
                                        if (cadastro_acomodacao == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");


                                break;

                            case 6:
                                printf(" ----- Fornecedor ----- \n");
                                contador_acomodacao = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_fornecedorl_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_fornecedorl_dados.nome_social, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_fornecedorl_dados.email, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_fornecedorl_dados.inscricao_estadual, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_fornecedorl_dados.razao_social, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 6) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_fornecedorl_dados.cnpj = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 7) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_fornecedorl_dados.endereco, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 8) {
                                        contadorinicial = 0;
                                        CadastroFornecedor(cadastro_fornecedor, &cadastro_fornecedorl_dados, &contador_fornecedor);
                                        //realocação de memoria
                                        cadastro_fornecedor = realloc(cadastro_fornecedor, (contador_fornecedor + 2) * sizeof (criar_Fornecedor));
                                        if (cadastro_fornecedor == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");


                                break;

                            case 7:
                                printf(" ----- Operador ----- \n");
                                contador_operador = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_operadores_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_operadores_dados.nome, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_operadores_dados.usuario, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_operadores_dados.senha = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        contadorinicial = 0;
                                        Cadastro_Operador(cadastro_operadores, &cadastro_operadores_dados, &contador_operador);
                                        //realocação de memoria
                                        cadastro_acomodacao = realloc(cadastro_operadores, (contador_operador + 2) * sizeof (cadastro_Operadores));
                                        if (cadastro_operadores == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }
                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");
                                break;
                            case 8:
                                printf(" ----- Transacoes ----- \n");
                                contador_checkin = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_transacao_dados.codigo_hospede = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_transacao_dados.deve_diaria = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_transacao_dados.reserva = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        contadorinicial = 0;
                                        Cadastro_Transacao_Hospede(cadastro_transacao, &cadastro_transacao_dados, &contador_checkin);
                                        //realocação de memoria
                                        cadastro_transacao = realloc(cadastro_transacao, (contador_checkin + 2) * sizeof (criar_Transacao));
                                        if (cadastro_transacao == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");



                                break;

                            case 9:
                                printf(" ----- Controle Caixa ----- \n");
                                contador_controle = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "</>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_controle_dados.tipo, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_controle_dados.valor = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_controle_dados.vendido, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        contadorinicial = 0;
                                        Cadastro_Controle(cadastro_controle, &cadastro_controle_dados, &contador_controle);
                                        //realocação de memoria
                                        cadastro_controle = realloc(cadastro_controle, (contador_controle + 2) * sizeof (criar_Controle));
                                        if (cadastro_controle == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");

                                break;

                            case 10:
                                printf(" ----- Contas a Receber -----");
                                contador_receber = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_receber_dados.dia = atoi(variavel_auxiliar);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_receber_dados.mes = atoi(variavel_auxiliar_2);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_receber_dados.ano = atoi(variavel_auxiliar_2);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_receber_dados.valor = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        contadorinicial = 0;
                                        Cadastro_Receber(cadastro_receber, &cadastro_receber_dados, &contador_receber);
                                        //realocação de memoria
                                        cadastro_receber = realloc(cadastro_receber, (contador_receber + 2) * sizeof (criar_Receber));
                                        if (cadastro_receber == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");


                                break;

                            case 11:
                                printf(" ----- Caixa ----- \n");
                                contador_receber = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_caixa_dados.caixa = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_caixa_dados.dia = atoi(variavel_auxiliar);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_caixa_dados.mes = atoi(variavel_auxiliar_2);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_caixa_dados.ano = atoi(variavel_auxiliar_2);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_caixa_dados.tipo, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_caixa_dados.entrou = atof(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        contadorinicial = 0;
                                        Cadastro_Caixa(cadastro_caixa, &cadastro_caixa_dados, &contador_caixa);
                                        //realocação de memoria
                                        cadastro_caixa = realloc(cadastro_caixa, (contador_caixa + 2) * sizeof (criar_Caixa));
                                        if (cadastro_caixa == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");


                                break;

                            case 12:
                                printf(" ----- Contas ----- \n");
                                contador_conta = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_conta_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_conta_dados.dia = atoi(variavel_auxiliar);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_conta_dados.mes = atoi(variavel_auxiliar_2);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_conta_dados.ano = atoi(variavel_auxiliar_2);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_conta_dados.descricao, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_conta_dados.compra, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_conta_dados.fornecedor, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 6) {
                                        contadorinicial = 0;
                                        Cadastro_Conta(cadastro_conta, &cadastro_conta_dados, &contador_conta);
                                        //realocação de memoria
                                        cadastro_conta = realloc(cadastro_conta, (contador_conta + 2) * sizeof (criar_Conta));
                                        if (cadastro_conta == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");


                                break;

                            case 13:
                                printf(" ----- Reservas ----- \n");
                                contador_agenda = 0;
                                nlinhas = 0;
                                printf(" Existe um Pasta junto com Os Programas chamada: Importar \n Coloque o Arquivo dentro dela que deseja Importar\n");
                                printf(" Digite o nome EX: importar_hospede\n");
                                printf("Digite o nome do arquivo: ");
                                scanf("%s", receber_nome);
                                sprintf(nome_secundario, ".\\importar\\%s.xml", receber_nome);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                if (arquivo_exportacao == NULL) {
                                    printf(" Nome invalido \n");
                                    break;
                                }
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {
                                    nlinhas++;

                                }
                                fclose(arquivo_exportacao);

                                arquivo_exportacao = fopen(nome_secundario, "r");
                                for (i = 0; i < 2; i++) {
                                    fgets(linha, 100, arquivo_exportacao);
                                }
                                contadorinicial = 0;
                                while (fgets(linha, 100, arquivo_exportacao) != NULL) {

                                    if (contadorsecundario == (nlinhas - 4)) {
                                        break;
                                    }
                                    if (contadorinicial == 0) {
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 1) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_agenda_dados.codigo = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 2) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_agenda_dados.dia = atoi(variavel_auxiliar);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_agenda_dados.mes = atoi(variavel_auxiliar_2);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_agenda_dados.ano = atoi(variavel_auxiliar_2);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 3) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_agenda_dados.dia_sair = atoi(variavel_auxiliar);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_agenda_dados.mes_sair = atoi(variavel_auxiliar_2);
                                        variavel_auxiliar_2 = strtok(variavel_auxiliar, "/");
                                        cadastro_agenda_dados.ano_sair = atoi(variavel_auxiliar_2);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 4) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        strcpy(cadastro_agenda_dados.categoria, variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 5) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_agenda_dados.codigo_reserva = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 6) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_agenda_dados.diarias = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 7) {
                                        variavel_auxiliar = strtok(linha, "\t\t\t<>");
                                        variavel_auxiliar = strtok(NULL, "<>");
                                        variavel_auxiliar[strlen(variavel_auxiliar)] = '\0';
                                        cadastro_agenda_dados.hospede = atoi(variavel_auxiliar);
                                        contadorinicial++;
                                        contadorsecundario++;
                                    } else if (contadorinicial == 8) {
                                        contadorinicial = 0;
                                        Cadastro_agenda(cadastro_agenda, &cadastro_agenda_dados, &contador_agenda);
                                        //realocação de memoria
                                        cadastro_agenda = realloc(cadastro_agenda, (contador_agenda + 2) * sizeof (criar_Agenda));
                                        if (cadastro_agenda == NULL) {
                                            printf("Ocorreu Um Erro \n");
                                            break;
                                        }

                                        contadorsecundario++;
                                    }
                                }
                                fflush(arquivo_exportacao);
                                fclose(arquivo_exportacao);
                                printf("Dados importados com sucesso!!\n");

                                break;


                        }// confirma a reserva
                        break;

                    case 2:
                        printf(" ----- Exportar ----- \n");
                        printf(" Deseja exportar: \n");
                        printf(" 1 - Hotel \n");
                        printf(" 2 - Hospede \n");
                        printf(" 3 - Produtos \n");
                        printf(" 4 - Categoria \n");
                        printf(" 5 - Acomodacoes \n");
                        printf(" 6 - Fornecedores \n");
                        printf(" 7 - Login \n");
                        printf(" 8 - Transacoes \n");
                        printf(" 9 - Controle Caixa \n");
                        printf(" 10 - Receber Contas \n");
                        printf(" 11 - Caixa \n");
                        printf(" 12 - Conta \n");
                        printf(" 13 - Reservas \n");
                        scanf("%d", &confirmar_reserva);
                        switch (confirmar_reserva) {
                            case 1:
                                if (contador_hotel == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                remove("exportar_hotel.xml");
                                FILE* exportar_hotel;
                                exportar_hotel = fopen("exportar_hotel.xml", "w+");
                                fprintf(exportar_hotel, "<dados>\n"
                                        "\t<tabela=hotel>\n");
                                fflush(exportar_hotel);
                                fclose(exportar_hotel);
                                exportar_hotel = fopen("exportar_hotel.xml", "a");
                                mostrar_arquivo = 0;
                                fprintf(exportar_hotel,
                                        "\t\t<registro>\n"
                                        "\t\t\t<cnpj>%f</cnpj>\n"
                                        "\t\t\t<nome>%s</nome>\n"
                                        "\t\t\t<email>%s</email>\n"
                                        "\t\t\t<Inscricao_Estadual>%s</Inscricao_Estadual>\n"
                                        "\t\t\t<Razao_Social>%s</Razao_Social>\n"
                                        "\t\t\t<Check_in>%f</Check_in>\n"
                                        "\t\t\t<Check_out>%f</Check_out>\n"
                                        "\t\t\t<telefone>%f</telefone>\n"
                                        "\t\t\t<telefone_hotel>%f</telefone_hotel>\n"
                                        "\t\t\t<Lucro>%f</Lucro>\n"
                                        "\t\t\t<endereco>%s</endereco>\n"
                                        "\t\t</registro>\n", cadastro_hotel[mostrar_arquivo].cnpj,
                                        (cadastro_hotel + mostrar_arquivo)->nome_social,
                                        (cadastro_hotel + mostrar_arquivo)->email,
                                        (cadastro_hotel + mostrar_arquivo)->inscricao_estadual,
                                        (cadastro_hotel + mostrar_arquivo)->razao_social,
                                        (cadastro_hotel + mostrar_arquivo)->horario_chegar,
                                        (cadastro_hotel + mostrar_arquivo)->horario_sair,
                                        (cadastro_hotel + mostrar_arquivo)->telefone,
                                        (cadastro_hotel + mostrar_arquivo)->telefone_dono,
                                        (cadastro_hotel + mostrar_arquivo)->lucro_produtos_vendidos,
                                        (cadastro_hotel + mostrar_arquivo)->endereco);
                                // FECHA O FOr"<dados>\n"
                                fprintf(exportar_hotel, "\t</tabela=hotel>\n"
                                        "</dados>");
                                fflush(exportar_hotel);
                                fclose(exportar_hotel);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_hotel.xml \n");
                                break;


                            case 2:
                                if (contador_hospede == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                remove("exportar_hospede.xml");
                                exportar_hospede = fopen("exportar_hospede.xml", "w+");
                                fprintf(exportar_hospede, "<dados>\n"
                                        "\t<tabela=hospede>\n");
                                fflush(exportar_hospede);
                                fclose(exportar_hospede);
                                exportar_hospede = fopen("exportar_hospede.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_hospede; mostrar_arquivo++) {
                                    fprintf(exportar_hospede,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<nome>%s</nome>\n"
                                            "\t\t\t<email>%s</email>\n"
                                            "\t\t\t<sexo>%s</sexo>\n"
                                            "\t\t\t<Estado_Civil>%s</Estado_Civil>\n"
                                            "\t\t\t<Data_Nascimento>%d/%d/%d</Data_Nascimento>\n"
                                            "\t\t\t<cpf>%f</cpf>\n"
                                            "\t\t\t<telefone>%f</telefone>\n"
                                            "\t\t\t<endereco>%s</endereco>\n"
                                            "\t\t</registro>\n", cadastro_hospede[mostrar_arquivo].codigo,
                                            (cadastro_hospede + mostrar_arquivo)->nome_social,
                                            (cadastro_hospede + mostrar_arquivo)->email,
                                            (cadastro_hospede + mostrar_arquivo)->sexo,
                                            (cadastro_hospede + mostrar_arquivo)->estado_civil,
                                            (cadastro_hospede + mostrar_arquivo)->dia,
                                            (cadastro_hospede + mostrar_arquivo)->mes,
                                            (cadastro_hospede + mostrar_arquivo)->ano,
                                            (cadastro_hospede + mostrar_arquivo)->cpf,
                                            (cadastro_hospede + mostrar_arquivo)->telefone,
                                            (cadastro_hospede + mostrar_arquivo)->endereco);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_hospede, "\t</tabela=hospede>\n"
                                        "</dados>");
                                fflush(exportar_hospede);
                                fclose(exportar_hospede);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_hospede.xml \n");
                                break; // fecha o case 2



                            case 3:
                                if (contador_produto == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Produtos ----- \n");
                                remove("exportar_produto.xml");
                                FILE* exportar_produto = fopen("exportar_produto.xml", "w+");
                                fprintf(exportar_produto, "<dados>\n"
                                        "\t<tabela=produto>\n");
                                fflush(exportar_produto);
                                fclose(exportar_produto);
                                exportar_hospede = fopen("exportar_produto.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_produto; mostrar_arquivo++) {
                                    fprintf(exportar_produto,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<nome>%s</nome>\n"
                                            "\t\t\t<descricao>%s</descricao>\n"
                                            "\t\t\t<estoque>%d</estoque>\n"
                                            "\t\t\t<estoque_minimo>%d</estoque_minimo>\n"
                                            "\t\t\t<preco_custo>%d</preco_custo>\n"
                                            "\t\t\t<preco_venda>%d</preco_venda>\n"
                                            "\t\t</registro>\n", cadastro_produto[mostrar_arquivo].codigo,
                                            (cadastro_produto + mostrar_arquivo)->nome,
                                            (cadastro_produto + mostrar_arquivo)->descricao,
                                            (cadastro_produto + mostrar_arquivo)->estoque,
                                            (cadastro_produto + mostrar_arquivo)->estoque_minimo,
                                            (cadastro_produto + mostrar_arquivo)->preco_venda,
                                            (cadastro_produto + mostrar_arquivo)->preco_custo);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_produto, "\t</tabela=produto>\n"
                                        "</dados>");
                                fflush(exportar_produto);
                                fclose(exportar_produto);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_produto.xml \n");
                                break;

                            case 4:
                                if (contador_categoria == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Categoria ----- \n");
                                remove("exportar_categoria.xml");
                                FILE* exportar_categoria = fopen("exportar_categoria.xml", "w+");
                                fprintf(exportar_categoria, "<dados>\n"
                                        "\t<tabela=categoria>\n");
                                fflush(exportar_categoria);
                                fclose(exportar_categoria);
                                exportar_categoria = fopen("exportar_categoria.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_categoria; mostrar_arquivo++) {
                                    fprintf(exportar_categoria,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<nome>%s</nome>\n"
                                            "\t\t\t<descricao>%s</descricao>\n"
                                            "\t\t\t<facilidades>%s</facilidades>\n"
                                            "\t\t\t<quantidade_comprada>%d</quantidade_comprada>\n"
                                            "\t\t\t<valor>%f</valor>\n"
                                            "\t\t</registro>\n", cadastro_categoria[mostrar_arquivo].codigo,
                                            (cadastro_categoria + mostrar_arquivo)->nome,
                                            (cadastro_categoria + mostrar_arquivo)->descricao,
                                            (cadastro_categoria + mostrar_arquivo)->facilidades,
                                            (cadastro_categoria + mostrar_arquivo)->quantidade_comportada,
                                            (cadastro_categoria + mostrar_arquivo)->valor);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_categoria, "\t</tabela=categoria>\n"
                                        "</dados>");
                                fflush(exportar_categoria);
                                fclose(exportar_categoria);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_categoria.xml \n");

                                break;

                            case 5:
                                if (contador_acomodacao == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Acomodacoes ----- \n");
                                remove("exportar_acomodacao.xml");
                                FILE* exportar_acomodacao = fopen("exportar_acomodacao.xml", "w+");
                                fprintf(exportar_acomodacao, "<dados>\n"
                                        "\t<tabela=acomodacao>\n");
                                fflush(exportar_acomodacao);
                                fclose(exportar_acomodacao);
                                exportar_acomodacao = fopen("exportar_acomodacao.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_acomodacao; mostrar_arquivo++) {
                                    fprintf(exportar_acomodacao,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<categoria>%s</categoria>\n"
                                            "\t\t\t<descricao>%s</descricao>\n"
                                            "\t\t\t<facilidades>%s</facilidades>\n"
                                            "\t\t</registro>\n", cadastro_acomodacao[mostrar_arquivo].codigo,
                                            (cadastro_acomodacao + mostrar_arquivo)->categoria,
                                            (cadastro_acomodacao + mostrar_arquivo)->descricao,
                                            (cadastro_acomodacao + mostrar_arquivo)->facilidades);

                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_acomodacao, "\t</tabela=acomodacao>\n"
                                        "</dados>");
                                fflush(exportar_acomodacao);
                                fclose(exportar_acomodacao);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_acomodacao.xml \n");
                                break;
                            case 6:
                                if (contador_fornecedor == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Fornecedor ----- \n");
                                remove("exportar_fornecedor.xml");
                                FILE* exportar_fornecedor = fopen("exportar_fornecedor.xml", "w+");
                                fprintf(exportar_fornecedor, "<dados>\n"
                                        "\t<tabela=fornecedor>\n");
                                fflush(exportar_fornecedor);
                                fclose(exportar_fornecedor);
                                exportar_fornecedor = fopen("exportar_fornecedor.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_fornecedor; mostrar_arquivo++) {
                                    fprintf(exportar_fornecedor,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<nome>%s</nome>\n"
                                            "\t\t\t<email>%s</email>\n"
                                            "\t\t\t<inscricao_estadual>%s</inscricao_estadual>\n"
                                            "\t\t\t<razao_social>%s</razao_social>\n"
                                            "\t\t\t<cnpj>%f</cnpj>\n"
                                            "\t\t\t<telefone>%f</telefone>\n"
                                            "\t\t\t<endereco>%s</endereco>\n"
                                            "\t\t</registro>\n", cadastro_fornecedor[mostrar_arquivo].codigo,
                                            (cadastro_fornecedor + mostrar_arquivo)->nome_social,
                                            (cadastro_fornecedor + mostrar_arquivo)->email,
                                            (cadastro_fornecedor + mostrar_arquivo)->inscricao_estadual,
                                            (cadastro_fornecedor + mostrar_arquivo)->razao_social,
                                            (cadastro_fornecedor + mostrar_arquivo)->cnpj,
                                            (cadastro_fornecedor + mostrar_arquivo)->telefone,
                                            (cadastro_fornecedor + mostrar_arquivo)->endereco);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_fornecedor, "\t</tabela=fornecedor>\n"
                                        "</dados>");
                                fflush(exportar_fornecedor);
                                fclose(exportar_fornecedor);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_fornecedor.xml \n");
                                break;
                            case 7:
                                if (contador_operador == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Login ----- \n");
                                remove("exportar_operador.xml");
                                FILE* exportar_operador = fopen("exportar_operador.xml", "w+");
                                fprintf(exportar_operador, "<dados>\n"
                                        "\t<tabela=operador>\n");
                                fflush(exportar_operador);
                                fclose(exportar_operador);
                                exportar_operador = fopen("exportar_operador.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_operador; mostrar_arquivo++) {
                                    fprintf(exportar_operador,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<nome>%s</nome>\n"
                                            "\t\t\t<usuario>%s</usuario>\n"
                                            "\t\t\t<senha>%d</senha>\n"
                                            "\t\t</registro>\n", cadastro_operadores[mostrar_arquivo].codigo,
                                            (cadastro_operadores + mostrar_arquivo)->nome,
                                            (cadastro_operadores + mostrar_arquivo)->usuario,
                                            (cadastro_operadores + mostrar_arquivo)->senha);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_operador, "\t</tabela=operador>\n"
                                        "</dados>");
                                fflush(exportar_operador);
                                fclose(exportar_operador);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_operador.xml \n");
                                break;

                            case 8:
                                if (contador_checkin == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Transacoes ----- \n");
                                remove("exportar_transacao.xml");
                                FILE* exportar_transacao = fopen("exportar_transacao.xml", "w+");
                                fprintf(exportar_transacao, "<dados>\n"
                                        "\t<tabela=transacao>\n");
                                fflush(exportar_transacao);
                                fclose(exportar_transacao);
                                exportar_transacao = fopen("exportar_transacao.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_checkin; mostrar_arquivo++) {
                                    fprintf(exportar_transacao,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<deve_diaria>%f</deve_diaria>\n"
                                            "\t\t\t<reserva>%d</reserva>\n"
                                            "\t\t</registro>\n", cadastro_transacao[mostrar_arquivo].codigo_hospede,
                                            (cadastro_transacao + mostrar_arquivo)->deve_diaria,
                                            (cadastro_transacao + mostrar_arquivo)->reserva);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_transacao, "\t</tabela=transacao>\n"
                                        "</dados>");
                                fflush(exportar_transacao);
                                fclose(exportar_transacao);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_transacao.xml \n");

                                break;
                            case 9:
                                if (contador_controle == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Controle Caixa ----- \n");
                                remove("exportar_controle.xml");
                                FILE* exportar_controle = fopen("exportar_controle.xml", "w+");
                                fprintf(exportar_controle, "<dados>\n"
                                        "\t<tabela=controle>\n");
                                fflush(exportar_controle);
                                fclose(exportar_controle);
                                exportar_controle = fopen("exportar_controle.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_controle; mostrar_arquivo++) {
                                    fprintf(exportar_controle,
                                            "\t\t<registro>\n"
                                            "\t\t\t<Tipo>%d</Tipo>\n"
                                            "\t\t\t<Valor>%f</Valor>\n"
                                            "\t\t\t<Vendido>%s</Vendido>\n"
                                            "\t\t</registro>\n", cadastro_controle[mostrar_arquivo].tipo,
                                            (cadastro_controle + mostrar_arquivo)->valor,
                                            (cadastro_controle + mostrar_arquivo)->vendido);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_controle, "\t</tabela=controle>\n"
                                        "</dados>");
                                fflush(exportar_controle);
                                fclose(exportar_controle);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_controle.xml \n");

                                break;

                            case 10:
                                if (contador_receber == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Contas a Receber ----- \n");
                                remove("exportar_receber.xml");
                                FILE* exportar_receber = fopen("exportar_receber.xml", "w+");
                                fprintf(exportar_receber, "<dados>\n"
                                        "\t<tabela=receber>\n");
                                fflush(exportar_receber);
                                fclose(exportar_receber);
                                exportar_receber = fopen("exportar_receber.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_receber; mostrar_arquivo++) {
                                    fprintf(exportar_receber,
                                            "\t\t<registro>\n"
                                            "\t\t\t<Data>%d/%d/%d</Tipo>\n"
                                            "\t\t\t<Valor>%f</Valor>\n"
                                            "\t\t</registro>\n", cadastro_receber[mostrar_arquivo].dia,
                                            cadastro_receber[mostrar_arquivo].mes,
                                            cadastro_receber[mostrar_arquivo].ano,
                                            (cadastro_receber + mostrar_arquivo)->valor);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_receber, "\t</tabela=receber>\n"
                                        "</dados>");
                                fflush(exportar_receber);
                                fclose(exportar_receber);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_receber.xml \n");

                                break;

                            case 11:
                                if (contador_caixa == 0) {
                                    printf(" Nenhum caixa cadastrado impossivel exportar \n");
                                    break;
                                }
                                printf(" ----- Caixa ----- \n");
                                remove("exportar_caixa.xml");
                                FILE* exportar_caixa = fopen("exportar_caixa.xml", "w+");
                                fprintf(exportar_caixa, "<dados>\n"
                                        "\t<tabela=caixa>\n");
                                fflush(exportar_caixa);
                                fclose(exportar_caixa);
                                exportar_caixa = fopen("exportar_caixa.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < 5; mostrar_arquivo++) {
                                    fprintf(exportar_caixa,
                                            "\t\t<registro>\n"
                                            "\t\t\t<Caixa>%f</Caixa>\n"
                                            "\t\t\t<Data>%d/%d/%d/</Data>\n"
                                            "\t\t\t<Tipo>%s</Tipo>\n"
                                            "\t\t\t<entrada>%f</entrada>\n"
                                            "\t\t</registro>\n", cadastro_caixa[mostrar_arquivo].caixa,
                                            (cadastro_caixa + mostrar_arquivo)->dia,
                                            (cadastro_caixa + mostrar_arquivo)->mes,
                                            (cadastro_caixa + mostrar_arquivo)->ano,
                                            (cadastro_caixa + mostrar_arquivo)->tipo,
                                            (cadastro_caixa + mostrar_arquivo)->entrou);
                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_caixa, "\t</tabela=caixa>\n"
                                        "</dados>");
                                fflush(exportar_caixa);
                                fclose(exportar_caixa);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_caixa.xml \n");

                                break;

                            case 12:
                                if (contador_conta == 0) {
                                    printf(" Nenhuma conta cadastrada \n");
                                    break;
                                }
                                printf(" ----- Conta ----- \n");
                                remove("exportar_conta.xml");
                                FILE* exportar_conta = fopen("exportar_conta.xml", "w+");
                                fprintf(exportar_conta, "<dados>\n"
                                        "\t<tabela=conta>\n");
                                fflush(exportar_conta);
                                fclose(exportar_conta);
                                exportar_conta = fopen("exportar_conta.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_conta; mostrar_arquivo++) {
                                    fprintf(exportar_conta,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<Data>%d/%d/%d/</Data>\n"
                                            "\t\t\t<descricao>%s</descricao>\n"
                                            "\t\t\t<deve>%f</deve>\n"
                                            "\t\t\t<compra>%s</compra>\n"
                                            "\t\t\t<fornecedor>%s</fornecedor>\n"
                                            "\t\t</registro>\n", cadastro_conta[mostrar_arquivo].codigo,
                                            (cadastro_conta + mostrar_arquivo)->dia,
                                            (cadastro_conta + mostrar_arquivo)->mes,
                                            (cadastro_conta + mostrar_arquivo)->ano,
                                            (cadastro_conta + mostrar_arquivo)->descricao,
                                            (cadastro_conta + mostrar_arquivo)->deve,
                                            (cadastro_conta + mostrar_arquivo)->compra,
                                            (cadastro_conta + mostrar_arquivo)->fornecedor);

                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_conta, "\t</tabela=conta>\n"
                                        "</dados>");
                                fflush(exportar_conta);
                                fclose(exportar_conta);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_conta.xml \n");

                                break;

                            case 13:
                                if (contador_conta == 0) {
                                    printf(" Nenhuma conta cadastrada \n");
                                    break;
                                }
                                printf(" ----- Reservas ----- \n");
                                remove("exportar_agenda.xml");
                                FILE* exportar_agenda = fopen("exportar_agenda.xml", "w+");
                                fprintf(exportar_agenda, "<dados>\n"
                                        "\t<tabela=genda>\n");
                                fflush(exportar_agenda);
                                fclose(exportar_agenda);
                                exportar_agenda = fopen("exportar_agenda.xml", "a");
                                for (mostrar_arquivo = 0; mostrar_arquivo < contador_agenda; mostrar_arquivo++) {
                                    fprintf(exportar_agenda,
                                            "\t\t<registro>\n"
                                            "\t\t\t<codigo>%d</codigo>\n"
                                            "\t\t\t<Data>%d/%d/%d/</Data>\n"
                                            "\t\t\t<Data_Saida>%d/%d/%d/</Data_Saida>\n"
                                            "\t\t\t<categoria>%s</categoria>\n"
                                            "\t\t\t<codigo_reserva>%d</codigo_reserva>\n"
                                            "\t\t\t<diarias>%d</diarias>\n"
                                            "\t\t\t<codigo_hospede>%d</codigo_hospede>\n"
                                            "\t\t</registro>\n", cadastro_agenda[mostrar_arquivo].codigo,
                                            (cadastro_agenda + mostrar_arquivo)->dia,
                                            (cadastro_agenda + mostrar_arquivo)->mes,
                                            (cadastro_agenda + mostrar_arquivo)->ano,
                                            (cadastro_agenda + mostrar_arquivo)->dia_sair,
                                            (cadastro_agenda + mostrar_arquivo)->mes_sair,
                                            (cadastro_agenda + mostrar_arquivo)->ano_sair,
                                            (cadastro_agenda + mostrar_arquivo)->categoria,
                                            (cadastro_agenda + mostrar_arquivo)->codigo_reserva,
                                            (cadastro_agenda + mostrar_arquivo)->diarias,
                                            (cadastro_agenda + mostrar_arquivo)->hospede);

                                }// FECHA O FOr"<dados>\n"
                                fprintf(exportar_agenda, "\t</tabela=genda>\n"
                                        "</dados>");
                                fflush(exportar_agenda);
                                fclose(exportar_agenda);
                                printf(" ----- Arquivo Exportado com Sucesso ----- \n");
                                printf(" Arquivo: exportar_agenda.xml \n");

                                break;

                        }//fecha o switch de  todos os hospedes
                        break;
                    default:
                        printf(" Comando Invalido \n");
                        break;

                }// fecha o switch

                break;

        }// Fecha o switch do menu principal

    }// Fecha todo o while do programa

    return (EXIT_SUCCESS);
}
