#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operadores.h"

typedef struct criar_Login {
    char usuario[100];
    int senha;

} criar_Login;

int verificar_Login_final(cadastro_Operadores *cadastro_operadores, criar_Login *login, int posicao) {
    int i = 0;
    if (strcmp((cadastro_operadores + posicao)->usuario, login->usuario) == 0 && (cadastro_operadores + posicao)->senha == login->senha) {
        i = 1;
    }

    return i;
}

int verificar_posicao_login(cadastro_Operadores *cadastro_operadores, criar_Login *login, int contador_operador) {
    int i;
    int j;
    for (int i = 0; i < contador_operador; ++i) {
        if (strcmp((cadastro_operadores + i)->usuario, login->usuario) == 0) {
            j = i;
        }
    }
    return j;

}

int verificar_Usuariol(cadastro_Operadores *cadastro_operadores, criar_Login *login, int contador_operador) {
    int v = 0;
    for (int i = 0; i < contador_operador; ++i) {
        if (strcmp((cadastro_operadores + i)->usuario, login->usuario) == 0) {
            v = 1;
        }
    }
    return v;

}

int verificar_senhal(cadastro_Operadores *cadastro_operadores, criar_Login *login, int posicao) {
    int i = 0;
    if ((cadastro_operadores + posicao)->senha == login->senha) {
        i = 1;

    }

    return i;
}

int verificar_acessos(cadastro_Operadores *cadastro_operadores, int posicao) {
    int i = 0;

    if ((cadastro_operadores + posicao)->permissao[0] == 1) {
        i = 1;
    }
    return i;

}

int verificar_acessos1(cadastro_Operadores *cadastro_operadores, int posicao) {
    int i = 0;

    if ((cadastro_operadores + posicao)->permissao[1] == 1) {
        i = 1;
    }
    return i;

}

int verificar_acessos2(cadastro_Operadores *cadastro_operadores, int posicao) {
    int i = 0;

    if ((cadastro_operadores + posicao)->permissao[2] == 1) {
        i = 1;
    }
    return i;

}

int verificar_acessos3(cadastro_Operadores *cadastro_operadores, int posicao) {
    int i = 0;

    if ((cadastro_operadores + posicao)->permissao[3] == 1) {
        i = 1;
    }
    return i;

}

int verificar_acessos4(cadastro_Operadores *cadastro_operadores, int posicao) {
    int i = 0;

    if ((cadastro_operadores + posicao)->permissao[4] == 1) {
        i = 1;
    }
    return i;

}

int verificar_acessos5(cadastro_Operadores *cadastro_operadores, int posicao) {
    int i = 0;

    if ((cadastro_operadores + posicao)->permissao[5] == 1) {
        i = 1;
    }
    return i;

}
