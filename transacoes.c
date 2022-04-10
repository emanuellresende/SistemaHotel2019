#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hospede.h"
#include "acomodacoes.h"
#include "agenda.h"
#include "categoria.h"

typedef struct criar_Transacao {
    int codigo_hospede;
    float deve_diaria;
    int reserva;



} criar_Transacao;

typedef struct criar_Caixa {
    float caixa;
    int dia;
    int mes;
    int ano;
    int dia_fim;
    int mes_fim;
    int ano_fim;
    char tipo[100];
    float entrou;
} criar_Caixa;

typedef struct criar_Conta {
    int codigo;
    float deve;
    char descricao[100];
    char compra[100];
    char fornecedor[100];
    int dia;
    int mes;
    int ano;
    int dia_fim;
    int mes_fim;
    int ano_fim;
} criar_Conta;

typedef struct criar_Controle {
    char tipo[100];
    float valor;
    char vendido[100];

} criar_Controle;

typedef struct criar_Receber {
    int dia;
    int mes;
    int ano;
    float valor;

} criar_Receber;

int Retorno_Hospede(criar_Agenda *cadastro_agenda, int posicao) {


    return (*(cadastro_agenda + posicao)).hospede;
}

int Diaria_Hospede(criar_Agenda *cadastro_agenda, int posicao) {

    return (*(cadastro_agenda + posicao)).diarias;
}

int Diaria_Hospede_Valor(cadastro_categoria_acomodacao *cadastro_categoria, int posicao) {

    return (*(cadastro_categoria + posicao)).valor;
}

void Cadastro_Transacao_Hospede(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int *contador) {
    (*(cadastro_transacao + (*contador))).codigo_hospede = cadastro_transacao_dados->codigo_hospede;
    (*(cadastro_transacao + (*contador))).deve_diaria = cadastro_transacao_dados->deve_diaria;
    (*(cadastro_transacao + (*contador))).reserva = cadastro_transacao_dados->reserva;


    (*contador)++;
    FILE* arquivo_transacao = fopen("transacao.txt", "wb");
    fwrite(cadastro_transacao, sizeof (criar_Transacao), (*contador), arquivo_transacao);
    fflush(arquivo_transacao);
    fclose(arquivo_transacao);
    // Contador do Hotel
    FILE* contadores_transacao = fopen("contador_transacao.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_transacao);
    fflush(contadores_transacao);
    fclose(contadores_transacao);

}

void Cadastro_Caixa(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int *contador) {

    (*(cadastro_caixa)).caixa = cadastro_caixa_dados->caixa + (*(cadastro_caixa)).caixa;
    (*(cadastro_caixa + (*contador))).dia = cadastro_caixa_dados->dia;
    (*(cadastro_caixa + (*contador))).mes = cadastro_caixa_dados->mes;
    (*(cadastro_caixa + (*contador))).ano = cadastro_caixa_dados->ano;
    (*(cadastro_caixa + (*contador))).entrou = cadastro_caixa->entrou;
    strcpy((*(cadastro_caixa + (*contador))).tipo, cadastro_caixa->tipo);
    FILE* arquivo_caixa = fopen("caixa.txt", "wb");
    fwrite(cadastro_caixa, sizeof (criar_Caixa), (1), arquivo_caixa);
    fflush(arquivo_caixa);
    fclose(arquivo_caixa);

    FILE* contadores_caixa = fopen("contador_caixa.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_caixa);
    fflush(contadores_caixa);
    fclose(contadores_caixa);

}

int Verificar_Codigo_Transacao_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_transacao_dados->reserva == (*(cadastro_transacao + i)).reserva) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int PosicaoHospede_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_transacao_dados->codigo_hospede == (*(cadastro_transacao + i)).codigo_hospede) {
            posicao = i;
        }
    }

    return posicao;
}

void atualizaTransacao(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador, int posicao) {

    cadastro_transacao[posicao].deve_diaria = (cadastro_transacao_dados->deve_diaria + cadastro_transacao[posicao].deve_diaria);
    FILE* arquivo_transacao = fopen("transacao.txt", "wb");
    fwrite(cadastro_transacao, sizeof (criar_Transacao), contador, arquivo_transacao);
    fflush(arquivo_transacao);
    fclose(arquivo_transacao);
}

int VerificarHospede_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_transacao_dados->reserva == (*(cadastro_transacao + i)).reserva) {
            verificacao = 1;
        }
    }

    return verificacao;
}

int PosicaoHospede_Reserva_Reserva(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador) {
    int i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_transacao_dados->reserva == (*(cadastro_transacao + i)).reserva) {
            return 1;
        }
    }

    return 0;
}

int PosicaoHospede_Reserva_posicao(criar_Transacao *cadastro_transacao, criar_Transacao *cadastro_transacao_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_transacao_dados->reserva == (*(cadastro_transacao + i)).reserva) {
            posicao = i;
        }
    }

    return posicao;
}

void Cadastro_Conta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int *contador) {
    (*(cadastro_conta + (*contador))).dia = cadastro_conta_dados->dia;
    (*(cadastro_conta + (*contador))).mes = cadastro_conta_dados->mes;
    (*(cadastro_conta + (*contador))).ano = cadastro_conta_dados->ano;
    (*(cadastro_conta + (*contador))).codigo = cadastro_conta_dados->codigo;
    (*(cadastro_conta + (*contador))).deve = cadastro_conta_dados->deve;
    strcpy((*(cadastro_conta + (*contador))).compra, cadastro_conta_dados->compra);
    strcpy((*(cadastro_conta + (*contador))).descricao, cadastro_conta_dados->descricao);
    strcpy((*(cadastro_conta + (*contador))).fornecedor, cadastro_conta_dados->fornecedor);
    (*contador)++;
    FILE* arquivo_conta = fopen("conta.txt", "wb");
    fwrite(cadastro_conta, sizeof (criar_Conta), (*contador), arquivo_conta);
    fflush(arquivo_conta);
    fclose(arquivo_conta);

    FILE* contadores_conta = fopen("contador_conta.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_conta);
    fflush(contadores_conta);
    fclose(contadores_conta);
}

int VerificarConta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_conta_dados->codigo == (*(cadastro_conta + i)).codigo) {
            verificacao = 1;
        }
    }

    return verificacao;
}

void verContas(criar_Conta *cadastro_conta, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf("Codigo: %d - %d \n", i + 1, (cadastro_conta + i)->codigo);
        printf("Valor: %f \n", (cadastro_conta + i)->deve);
        printf("Nome: %s \n", (cadastro_conta + i)->compra);
        printf("Fornecedor: %s \n", (cadastro_conta + i)->fornecedor);
        printf("Descricao: %s \n", (cadastro_conta + i)->descricao);
        printf("Data Vencimento: %d/%d/%d \n\n", (cadastro_conta + i)->dia, (cadastro_conta + i)->mes, (cadastro_conta + i)->ano);
    }

}

int PosicaoConta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_conta_dados->codigo == (*(cadastro_conta + i)).codigo) {
            posicao = i;
        }
    }

    return posicao;
}

void Cadastro_Controle(criar_Controle *cadastro_controle, criar_Controle *cadastro_controle_dados, int *contador) {
    strcpy((*(cadastro_controle + (*contador))).tipo, cadastro_controle_dados->tipo);
    (*(cadastro_controle + (*contador))).valor = cadastro_controle_dados->valor;
    strcpy((*(cadastro_controle + (*contador))).vendido, cadastro_controle_dados->vendido);
    (*contador)++;
    FILE* arquivo_controle = fopen("controle.txt", "wb");
    fwrite(cadastro_controle, sizeof (criar_Controle), (*contador), arquivo_controle);
    fflush(arquivo_controle);
    fclose(arquivo_controle);
    // Contador do Hotel
    FILE* contadores_controle = fopen("contador_controle.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_controle);
    fflush(contadores_controle);
    fclose(contadores_controle);

}

void Cadastro_Receber(criar_Receber *cadastro_receber, criar_Receber *cadastro_receber_dados, int *contador) {
    (*(cadastro_receber + (*contador))).valor = cadastro_receber_dados->valor;
    (*(cadastro_receber + (*contador))).dia = cadastro_receber_dados->dia;
    (*(cadastro_receber + (*contador))).mes = cadastro_receber_dados->mes;
    (*(cadastro_receber + (*contador))).ano = cadastro_receber_dados->ano;
    (*contador)++;
    FILE* arquivo_receber = fopen("receber.txt", "wb");
    fwrite(cadastro_receber, sizeof (criar_Receber), (*contador), arquivo_receber);
    fflush(arquivo_receber);
    fclose(arquivo_receber);
    // Contador do Hotel
    FILE* contadores_receber = fopen("contador_receber.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_receber);
    fflush(contadores_receber);
    fclose(contadores_receber);
}

void verControle(criar_Controle *cadastro_controle, int contador) {
    int i;
    for (i = 0; i < contador; i++) {

        printf("Valor: %f \n", (cadastro_controle + i)->valor);
        printf("Motivo: %s \n", (cadastro_controle + i)->vendido);
        printf("Tipo: %s \n\n", (cadastro_controle + i)->tipo);
    }
}

void verReceber(criar_Receber *cadastro_receber, int contador) {
    int i;
    for (i = 0; i < contador; i++) {

        printf("Valor: %f \n", (cadastro_receber + i)->valor);
        printf(" Data: %d/%d/%d \n\n", (cadastro_receber + i)->dia, (cadastro_receber + i)->mes, (cadastro_receber + i)->ano);
    }

}

int PosicaoReceber(criar_Receber *cadastro_receber, int data_entrada, int contador) {
    int posicao = -1, i;
    int data_saida;
    for (i = 0; i < contador; i++) {
        data_saida = (cadastro_receber + i)->dia + (cadastro_receber + i)->mes * 30 + (cadastro_receber + i)->ano * 360;
        if (data_saida <= data_entrada) {
            posicao = i;
            return posicao;
        }
    }
    return posicao;
}

int VerificarControle(criar_Controle *cadastro_controle, criar_Controle *cadastro_controle_dados, int contador) {
    int i, j = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_controle_dados->tipo, (*(cadastro_controle + i)).tipo) == 0) {
            j = j + 1;
        }
    }
    return j;
}

void PosicaoControle_Quantidade(criar_Controle *cadastro_controle, criar_Controle *cadastro_controle_dados, int contador, posicoes *posicao) {
    int i, j = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_controle_dados->tipo, (*(cadastro_controle + i)).tipo) == 0) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }

}

int VerificarReceber(criar_Receber *cadastro_receber, criar_Receber *cadastro_receber_dados, int contador) {
    int i, j = 0;
    for (i = 0; i < contador; i++) {
        if ((cadastro_receber_dados->dia + cadastro_receber_dados->mes + cadastro_receber_dados->ano) == ((*(cadastro_receber + i)).dia + (*(cadastro_receber + i)).mes + (*(cadastro_receber + i)).ano)) {
            j = j + 1;
        }
    }
    return j;
}

void PosicaoReceber_Quantidade(criar_Receber *cadastro_receber, criar_Receber *cadastro_receber_dados, int contador, posicoes *posicao) {
    int i, j = 0;
    for (i = 0; i < contador; i++) {
        if ((cadastro_receber_dados->dia + cadastro_receber_dados->mes * 30 + cadastro_receber_dados->ano * 360) == ((*(cadastro_receber + i)).dia + (*(cadastro_receber + i)).mes * 30 + (*(cadastro_receber + i)).ano * 360)) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }
}

int VerificarContaz(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador) {
    int i, j = 0;
    int d1, d2;
    int d3 = (cadastro_conta_dados->dia + cadastro_conta_dados->mes * 30 + cadastro_conta_dados->ano * 360);
    int d4 = (cadastro_conta_dados->dia_fim + cadastro_conta_dados->mes_fim * 30 + cadastro_conta_dados->ano_fim * 360);
    for (i = 0; i < contador; i++) {
        d1 = ((cadastro_conta + i)->ano) * 360 + ((cadastro_conta + i)->mes) * 30 + (cadastro_conta + i)->dia;
        d2 = ((cadastro_conta + i)->ano_fim) * 360 + ((cadastro_conta + i)->mes_fim) * 30 + (cadastro_conta + i)->dia_fim;
        if (d3 <= d1 && d1 <= d4 || d3 <= d2 && d2 <= d4 || d1 <= d3 && d3 <= d2 || d1 <= d4 && d4 <= d2) {
            j++;
        }
    }
    return j;
}

void PosicaoConta_QuantidadeVerificarConta(criar_Conta *cadastro_conta, criar_Conta *cadastro_conta_dados, int contador, posicoes *posicao) {
    int i, j = 0;
    int d1, d2;
    int d3 = (cadastro_conta_dados->dia + cadastro_conta_dados->mes * 30 + cadastro_conta_dados->ano * 360);
    int d4 = (cadastro_conta_dados->dia_fim + cadastro_conta_dados->mes_fim * 30 + cadastro_conta_dados->ano_fim * 360);
    for (i = 0; i < contador; i++) {
        d1 = ((cadastro_conta + i)->ano) * 360 + ((cadastro_conta + i)->mes) * 30 + (cadastro_conta + i)->dia;
        d2 = ((cadastro_conta + i)->ano_fim) * 360 + ((cadastro_conta + i)->mes_fim) * 30 + (cadastro_conta + i)->dia_fim;
        if (d3 <= d1 && d1 <= d4 || d3 <= d2 && d2 <= d4 || d1 <= d3 && d3 <= d2 || d1 <= d4 && d4 <= d2) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }

}

void Exibir_Caixa(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int contador) {
    int i, j;

    for (i = 0; i < contador; i++) {
        printf(" Valor em Caixa: %f \n", (cadastro_caixa)->caixa);
        printf(" Valor alterado: %f \n", (cadastro_caixa + i)->entrou);
        printf(" Tipo: %s ", (cadastro_caixa + i)->tipo);
        printf(" Data: %d/%d/%d \n\n", (cadastro_caixa + i)->dia, (cadastro_caixa + i)->mes, (cadastro_caixa + i)->ano);
    }
}

int VerificarCaixas(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int contador) {
    int i, j = 0;
    int d1, d2;
    int d3 = (cadastro_caixa_dados->dia + cadastro_caixa_dados->mes * 30 + cadastro_caixa_dados->ano * 360);
    int d4 = (cadastro_caixa_dados->dia_fim + cadastro_caixa_dados->mes_fim * 30 + cadastro_caixa_dados->ano_fim * 360);
    for (i = 0; i < contador; i++) {
        d1 = ((cadastro_caixa + i)->ano) * 360 + ((cadastro_caixa + i)->mes) * 30 + (cadastro_caixa + i)->dia;
        d2 = ((cadastro_caixa + i)->ano_fim) * 360 + ((cadastro_caixa + i)->mes_fim) * 30 + (cadastro_caixa + i)->dia_fim;
        if (d3 <= d1 && d1 <= d4 || d3 <= d2 && d2 <= d4 || d1 <= d3 && d3 <= d2 || d1 <= d4 && d4 <= d2) {
            j++;
        }
    }
    return j;
}

void PosicaoCaixa_QuantidadeVerificarConta(criar_Caixa *cadastro_caixa, criar_Caixa *cadastro_caixa_dados, int contador, posicoes *posicao) {
    int i, j = 0;
    int d1, d2;
    int d3 = (cadastro_caixa_dados->dia + cadastro_caixa_dados->mes * 30 + cadastro_caixa_dados->ano * 360);
    int d4 = (cadastro_caixa_dados->dia_fim + cadastro_caixa_dados->mes_fim * 30 + cadastro_caixa_dados->ano_fim * 360);
    for (i = 0; i < contador; i++) {
        d1 = ((cadastro_caixa + i)->ano) * 360 + ((cadastro_caixa + i)->mes) * 30 + (cadastro_caixa + i)->dia;
        d2 = ((cadastro_caixa + i)->ano_fim) * 360 + ((cadastro_caixa + i)->mes_fim) * 30 + (cadastro_caixa + i)->dia_fim;
        if (d3 <= d1 && d1 <= d4 || d3 <= d2 && d2 <= d4 || d1 <= d3 && d3 <= d2 || d1 <= d4 && d4 <= d2) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }

}






