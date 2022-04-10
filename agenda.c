#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "hospede.h"
#include "acomodacoes.h"

typedef struct criar_Agenda {
    int dia;
    int mes;
    int ano;
    int dia_sair;
    int mes_sair;
    int ano_sair;
    int codigo;
    char categoria[100];
    int hospede;
    int diarias;
    int codigo_reserva;

} criar_Agenda;


// vilidacao de datas

int valida_data(criar_Agenda *cadastro_agenda_dados) {
    int dia = cadastro_agenda_dados->dia;
    int mes = cadastro_agenda_dados->mes;
    int ano = cadastro_agenda_dados->ano;

    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) //verifica se os numeros sao validos
    {
        if ((dia == 29 && mes == 2) && ((ano % 4) == 0)&& ((ano % 100) != 0) || ((ano % 400) == 0)) //verifica se o ano e bissexto
        {
            return 1;
        }
        if (dia <= 28 && mes == 2) //verifica o mes de feveireiro
        {
            return 1;
        }
        if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) //verifica os meses de 30 dias
        {
            return 1;
        }
        if ((dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) //verifica os meses de 31 dias
        {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
// Sair

int valida_data_sair(criar_Agenda *cadastro_agenda_dados) {
    int dia = cadastro_agenda_dados->dia_sair;
    int mes = cadastro_agenda_dados->mes_sair;
    int ano = cadastro_agenda_dados->ano_sair;
    // Se os dias forem menores que os da entrada




    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) //verifica se os numeros sao validos
    {
        if ((dia == 29 && mes == 2) && ((ano % 4) == 0)&& ((ano % 100) != 0) || ((ano % 400) == 0)) //verifica se o ano e bissexto
        {
            return 1;
        }
        if (dia <= 28 && mes == 2) //verifica o mes de feveireiro
        {
            return 1;
        }
        if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) //verifica os meses de 30 dias
        {
            return 1;
        }
        if ((dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) //verifica os meses de 31 dias
        {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
    // verifica se a data de saida e menor que a de entrada

    //fim

}

// temppo


// fim tempo
// fim validacao
// mostrar dia

const char *wd(int year, int month, int day) {
    static const char *weekdayname[] = {
        "Segunda",
        "Terça",
        "Quarta",
        "Quinta",
        "Sexta",
        "Sábado",
        "Domingo"
    };

    size_t JND =                                                     \
          day                                                      \
        + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) \
        + (365 * (year + 4800 - ((14 - month) / 12)))              \
        + ((year + 4800 - ((14 - month) / 12)) / 4)                \
        - ((year + 4800 - ((14 - month) / 12)) / 100)              \
        + ((year + 4800 - ((14 - month) / 12)) / 400)              \
        - 32045;

    return weekdayname[JND % 7];
}

// fim dia

// verificar dispponibilidade

int verificar_Datas(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador_agenda) {
    int i;
    int j = 0;
    int d1, d2;
    int d3 = cadastro_agenda_dados->ano * 360 + cadastro_agenda_dados->mes * 30 + cadastro_agenda_dados->dia;
    int d4 = cadastro_agenda_dados->ano_sair * 360 + cadastro_agenda_dados->mes_sair * 30 + cadastro_agenda_dados->dia_sair;
    for (i = 0; i < contador_agenda; i++) {
        if (cadastro_agenda_dados->codigo == (cadastro_agenda + i)->codigo) {
            d1 = ((cadastro_agenda + i)->ano) * 360 + ((cadastro_agenda + i)->mes) * 30 + (cadastro_agenda + i)->dia;
            d2 = ((cadastro_agenda + i)->ano_sair) * 360 + ((cadastro_agenda + i)->mes_sair) * 30 + (cadastro_agenda + i)->dia_sair;
            if (d3 <= d1 && d1 <= d4 || d3 <= d2 && d2 <= d4 || d1 <= d3 && d3 <= d2 || d1 <= d4 && d4 <= d2) {
                j = 1;
            }



        }
    }
    return j;


}
// fim ver disponibilidade2

void Cadastro_agenda(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int *contador) {

    (*(cadastro_agenda + (*contador))).ano = cadastro_agenda_dados->ano;
    (*(cadastro_agenda + (*contador))).mes = cadastro_agenda_dados->mes;
    (*(cadastro_agenda + (*contador))).dia = cadastro_agenda_dados->dia;
    (*(cadastro_agenda + (*contador))).ano_sair = cadastro_agenda_dados->ano_sair;
    (*(cadastro_agenda + (*contador))).mes_sair = cadastro_agenda_dados->mes_sair;
    (*(cadastro_agenda + (*contador))).dia_sair = cadastro_agenda_dados->dia_sair;
    (*(cadastro_agenda + (*contador))).codigo = cadastro_agenda_dados->codigo;
    (*(cadastro_agenda + (*contador))).hospede = cadastro_agenda_dados->hospede;
    (*(cadastro_agenda + (*contador))).diarias = cadastro_agenda_dados->diarias;
    (*(cadastro_agenda + (*contador))).codigo_reserva = cadastro_agenda_dados->codigo_reserva;
    strcpy((*(cadastro_agenda + (*contador))).categoria, cadastro_agenda_dados->categoria);
    (*contador)++;
    FILE* arquivo_agenda = fopen("agenda.txt", "wb");
    fwrite(cadastro_agenda, sizeof (criar_Agenda), (*contador), arquivo_agenda);
    fflush(arquivo_agenda);
    fclose(arquivo_agenda);
    // Contador do Hotel
    FILE* contadores_agenda = fopen("contador_agenda.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_agenda);
    fflush(arquivo_agenda);
    fclose(contadores_agenda);

}

void imprimirReserva(criar_Agenda *cadastro_agenda, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf(" Chegada: %d/%d/%d \n", (cadastro_agenda + i)->dia, (cadastro_agenda + i)->mes, (cadastro_agenda + i)->ano);
        printf(" Saida: %d/%d/%d \n", (cadastro_agenda + i)->dia_sair, (cadastro_agenda + i)->mes_sair, (cadastro_agenda + i)->ano_sair);
        printf(" Quantidade de diarias : %d\n", (cadastro_agenda + i)->diarias);
        printf(" Categoria: %s \n", (cadastro_agenda + i)->categoria);
        printf(" Codigo da Acomodacao: %d \n", (cadastro_agenda + i)->codigo);
        printf(" Codigo do Hospede: %d  \n", (cadastro_agenda + i)->hospede);
        printf(" Codigo da Reserva: %d  \n\n", (cadastro_agenda + i)->codigo_reserva);
    }
}


// Mostra os tipos de acomodacoes cadastradas

void mostrar_acomodacao_tipo(criar_Acomodacao *cadastro_acomodacao, criar_Acomodacao *cadastro_acomodacao_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_acomodacao_dados->categoria, (*(cadastro_acomodacao + i)).categoria) == 0) {
            printf("  Codigo:%d \n", (cadastro_acomodacao + i)->codigo);
            printf("  Categoria:%s \n", (cadastro_acomodacao + i)->categoria);
            printf(" Descricao:%s \n", (cadastro_acomodacao + i)->descricao);
            printf(" Facilidades:%s \n", (cadastro_acomodacao + i)->facilidades);
        }
    }

}
// fim mostrar tipo

int Verificar_Reserva(criar_Acomodacao *cadastro_acomodacao, criar_Agenda *cadastro_agenda_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_agenda_dados->codigo == (*(cadastro_acomodacao + i)).codigo) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int Verificar_acomodacao_tipo(criar_Acomodacao *cadastro_acomodacao, criar_Agenda *cadastro_agenda_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_agenda_dados->categoria, (*(cadastro_acomodacao + i)).categoria) == 0) {
            verificacao = 1;
        }
    }
    return verificacao;
}

int diferenca_ano(criar_Agenda *cadastro_agenda_dados) {
    int ano = cadastro_agenda_dados->ano_sair;
    int mes = cadastro_agenda_dados->mes_sair;
    int dia = cadastro_agenda_dados->dia_sair;
    if (ano < cadastro_agenda_dados->ano || cadastro_agenda_dados->ano == ano && dia < cadastro_agenda_dados->dia && mes == cadastro_agenda_dados->mes || ano == cadastro_agenda_dados->ano
            && mes < cadastro_agenda_dados->mes) {
        return 1;
    } else {
        return 0;
    }

}

// Mostrar a diferenca de dias entre datas
// comeca outra parte

typedef struct _MinhaDataHora {
    int hora;
    int minuto;
    int segundo;
    int dia;
    int mes;
    int ano;
} MinhaDataHora;

/* Função auxiliar para definir os valores da estrutura DataHora */
void defineDataHora(MinhaDataHora *pd, int hora, int minuto, int segundo, int dia, int mes, int ano) {
    pd->hora = hora;
    pd->minuto = minuto;
    pd->segundo = segundo;
    pd->dia = dia;
    pd->mes = mes;
    pd->ano = ano;
}

/* Função auxiliar para imprimir os valores da estrutura DataHora formatados */
void imprimeDataHora(MinhaDataHora d) {
    printf("%02d:%02d:%02d %02d/%02d/%04d", d.hora, d.minuto, d.segundo, d.dia, d.mes, d.ano);
}

/* Função para verificação se um ano é bissexto */
int ehBissexto(int ano) {
    /*
      Um ano só é bissexto se ele for divisível por 4 e NÃO FOR divisível por 100
      (a não ser que ele seja divisível por 100 E TAMBÉM divisível por 400).
     */
    return (ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0);
}

/* Função para contar quantos anos bissextos tem entre o ano 1/1/1 e o ano dado */
int contaBissextos(int ano) {
    return (ano / 4) - (ano / 100) + (ano / 400);
}

/* Função para converter a DataHora dada para segundos */
unsigned long long dataParaSegundos(MinhaDataHora d) {
    unsigned long long total = 0LL;

    /*
     Primeiro, calcula o tempo decorrido em segundos até a data
     sem contar os anos bissextos, considerando:

     31536000 = número de segundos em um ano não bissexto (365 dias)
     86400 = número de segundos em um dia (24 horas)
     3600 = número de segundos em 1 hora (60 minutos)
     60 = número de segundos em 1 minuto (60 segundos)
     */

    total += (d.ano - 1) * 31536000LL;

    int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int mes = 1; mes < d.mes; mes++)
        total += meses[mes - 1] * 86400LL;

    total += (d.dia - 1) * 86400LL;

    total += d.hora * 3600LL;

    total += d.minuto * 60LL;

    total += d.segundo;

    /*
     Então, adiciona segundos para cada dia adicional dos anos bissextos
     */

    /* Número de dias adicionais, para os anos bissextos anteriores ao ano atual */
    int diasExtras = contaBissextos(d.ano - 1);
    total += diasExtras * 86400LL;

    /* Se o mês da data já passou de fereveiro e o ano atual é bissexto, adiciona mais um dia */
    if (ehBissexto(d.ano) && (d.mes - 1) >= 2)
        total += 86400LL;

    return total;
}

/* Função para o cálculo da diferença em segundos entre duas datas */
unsigned long long calculaDiferencaEmSegundos(MinhaDataHora d1, MinhaDataHora d2) {
    unsigned long long segundosd1 = dataParaSegundos(d1);
    unsigned long long segundosd2 = dataParaSegundos(d2);

    if (segundosd1 > segundosd2)
        return segundosd1 - segundosd2;
    else
        return segundosd2 - segundosd1;
}

/* Função para o cálculo da diferença em dias entre duas datas */
unsigned long long calculaDiferencaEmDias(MinhaDataHora d1, MinhaDataHora d2) {
    unsigned long long segundos = calculaDiferencaEmSegundos(d1, d2);
    return segundos / 86400LL;
}


//fim


// fim diferenca de dias

// verificar codigo da reserva

int Verificar_Codigo_Reserva(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_agenda_dados->codigo_reserva == (*(cadastro_agenda + i)).codigo_reserva) {
            verificacao = 1;
        }
    }
    return verificacao;
}


// fim verificar codigo

// buscar posicao da reserva

int PosicaoReserva(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_agenda_dados->codigo_reserva == (*(cadastro_agenda + i)).codigo_reserva)
            posicao = i;
    }

    return posicao;
}


// fim posicao reserva

int PosicaoReserva_codigo(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (cadastro_agenda_dados->codigo == (*(cadastro_agenda + i)).codigo) {
            posicao = i;
        }
    }
    return posicao;
}

// pesquisar por data

void verificar_Datas_pesquisa(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador_agenda) {
    int i;
    int j = 0;
    int d1, d2;
    int d3 = cadastro_agenda_dados->ano * 360 + cadastro_agenda_dados->mes * 30 + cadastro_agenda_dados->dia;
    int d4 = cadastro_agenda_dados->ano_sair * 360 + cadastro_agenda_dados->mes_sair * 30 + cadastro_agenda_dados->dia_sair;
    for (i = 0; i < contador_agenda; i++) {
        d1 = ((cadastro_agenda + i)->ano) * 360 + ((cadastro_agenda + i)->mes) * 30 + (cadastro_agenda + i)->dia;
        d2 = ((cadastro_agenda + i)->ano_sair) * 360 + ((cadastro_agenda + i)->mes_sair) * 30 + (cadastro_agenda + i)->dia_sair;
        if (d3 <= d1 && d1 <= d4 || d3 <= d2 && d2 <= d4 || d1 <= d3 && d3 <= d2 || d1 <= d4 && d4 <= d2) {
            printf(" Ocupadas \n");
            printf(" Chegada: %d/%d/%d \n", (cadastro_agenda + i)->dia, (cadastro_agenda + i)->mes, (cadastro_agenda + i)->ano);
            printf(" Saida: %d/%d/%d \n", (cadastro_agenda + i)->dia_sair, (cadastro_agenda + i)->mes_sair, (cadastro_agenda + i)->ano_sair);
            printf(" Quantidade de diarias : %d\n", (cadastro_agenda + i)->diarias);
            printf(" Categoria: %s \n", (cadastro_agenda + i)->categoria);
            printf(" Codigo da Acomodacao: %d \n", (cadastro_agenda + i)->codigo);
            printf(" Codigo do Hospede: %d  \n", (cadastro_agenda + i)->hospede);
            printf(" Codigo da Reserva: %d  \n\n", (cadastro_agenda + i)->codigo_reserva);

        } else {
            printf(" Disponiveis \n");
            printf(" Chegada: %d/%d/%d \n", (cadastro_agenda + i)->dia, (cadastro_agenda + i)->mes, (cadastro_agenda + i)->ano);
            printf(" Saida: %d/%d/%d \n", (cadastro_agenda + i)->dia_sair, (cadastro_agenda + i)->mes_sair, (cadastro_agenda + i)->ano_sair);
            printf(" Quantidade de diarias : %d\n", (cadastro_agenda + i)->diarias);
            printf(" Categoria: %s \n", (cadastro_agenda + i)->categoria);
            printf(" Codigo da Acomodacao: %d \n", (cadastro_agenda + i)->codigo);
            printf(" Codigo do Hospede: %d  \n", (cadastro_agenda + i)->hospede);
            printf(" Codigo da Reserva: %d  \n\n", (cadastro_agenda + i)->codigo_reserva);

        }



    }


}




// fim da pesquisa por data

// Retonar a posicao da data que ja passou

int PosicaoEncerrarReserva(criar_Agenda *cadastro_agenda, int data_entrada, int contador) {
    int posicao = -1, i;
    int data_saida;
    for (i = 0; i < contador; i++) {
        data_saida = (cadastro_agenda + i)->dia_sair + (cadastro_agenda + i)->mes_sair * 30 + (cadastro_agenda + i)->ano_sair * 360;
        if (data_saida < data_entrada) {
            posicao = i;
            return posicao;
        }
    }

    return posicao;
}
// pesquisar por quantidade de pessoas

int Verificar_Agenda_Quantidade(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_agenda_dados->hospede == (*(cadastro_agenda + i)).hospede) {
            verificacao++;
        }
    }
    return verificacao;
}

void PosicaoAgenda_Teste(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador, posicoes *posicao) {
    int i, j = 0;
    for (i = 0; i <= contador; i++) {
        if (cadastro_agenda_dados->hospede == (*(cadastro_agenda + i)).hospede) {
            (*(posicao + (j))).posicaol = i;
            j++;
        }
    }

}

int Verificar_Diaria_Quantidade(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador) {

    int i, verificacao = -1;
    for (i = 0; i < contador; i++) {
        if (cadastro_agenda_dados->codigo == (*(cadastro_agenda + i)).codigo) {
            verificacao++;
        }
    }
    return verificacao;
}

int PosicaoDiaria_Teste(criar_Agenda *cadastro_agenda, criar_Agenda *cadastro_agenda_dados, int contador, posicoes *posicao) {
    int i, j = 0;
    for (i = 0; i <= contador; i++) {
        if (cadastro_agenda_dados->codigo == (*(cadastro_agenda + i)).codigo) {
            j = j + (*(cadastro_agenda + i)).diarias;
        }
    }
    return j;
}
