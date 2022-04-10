#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct criar_Fornecedor {
    // declara todas as variaveis do cadastro dos dados do hotel //
    char nome_social[100];
    char razao_social[100];
    char inscricao_estadual[100];
    float cnpj;
    char endereco[100];
    float telefone;
    char email[100];
    int codigo;
    float frete;
    float imposto;
    float lucro;
    //
} criar_Fornecedor;
// Variavel de procurar o Fornecedor e buscar posicao

void CadastroFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int *contador) {
    (*(cadastro_fornecedor + (*contador))).cnpj = cadastro_fornecedor_dados->cnpj;
    (*(cadastro_fornecedor + (*contador))).codigo = cadastro_fornecedor_dados->codigo;
    (*(cadastro_fornecedor + (*contador))).telefone = cadastro_fornecedor_dados->telefone;
    strcpy((*(cadastro_fornecedor + (*contador))).nome_social, cadastro_fornecedor_dados->nome_social);
    strcpy((*(cadastro_fornecedor + (*contador))).razao_social, cadastro_fornecedor_dados->razao_social);
    strcpy((*(cadastro_fornecedor + (*contador))).inscricao_estadual, cadastro_fornecedor_dados->inscricao_estadual);
    strcpy((*(cadastro_fornecedor + (*contador))).endereco, cadastro_fornecedor_dados->endereco);
    strcpy((*(cadastro_fornecedor + (*contador))).email, cadastro_fornecedor_dados->email);
    (*contador)++;
    FILE* arquivo_fornecedor = fopen("fornecedor.txt", "wb");
    fwrite(cadastro_fornecedor, sizeof (criar_Fornecedor), (*contador), arquivo_fornecedor);
    fflush(arquivo_fornecedor);
    fclose(arquivo_fornecedor);
    // Contador do Hotel
    FILE* contadores_fornecedor = fopen("contador_fornecedor.txt", "wb");
    fwrite(contador, sizeof (int), 1, contadores_fornecedor);
    fflush(contadores_fornecedor);
    fclose(contadores_fornecedor);

}

int VerificarFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador) {
    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (strcmp(cadastro_fornecedor_dados->nome_social, (*(cadastro_fornecedor + i)).nome_social) == 0)
            verificacao = 1;
    }

    return verificacao;
}

int PosicaoFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador) {
    int posicao = -1, i;
    for (i = 0; i <= contador; i++) {
        if (strcmp(cadastro_fornecedor_dados->nome_social, (*(cadastro_fornecedor + i)).nome_social) == 0)
            posicao = i;
    }

    return posicao;
}

void atualizaFornecedor(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador, int posicao) {
    cadastro_fornecedor[posicao].cnpj = cadastro_fornecedor_dados->cnpj;
    cadastro_fornecedor[posicao].telefone = cadastro_fornecedor_dados->telefone;
    cadastro_fornecedor[posicao].codigo = cadastro_fornecedor_dados->codigo;
    strcpy(cadastro_fornecedor[posicao].nome_social, cadastro_fornecedor_dados->nome_social);
    strcpy(cadastro_fornecedor[posicao].razao_social, cadastro_fornecedor_dados->razao_social);
    strcpy(cadastro_fornecedor[posicao].email, cadastro_fornecedor_dados->email);
    strcpy(cadastro_fornecedor[posicao].endereco, cadastro_fornecedor_dados->endereco);
    strcpy(cadastro_fornecedor[posicao].inscricao_estadual, cadastro_fornecedor_dados->inscricao_estadual);

    FILE* arquivo_fornecedor = fopen("fornecedor.txt", "wb");
    fwrite(cadastro_fornecedor, sizeof (criar_Fornecedor), contador, arquivo_fornecedor);
    fclose(arquivo_fornecedor);

}

void verFornecedor(criar_Fornecedor *cadastro_fornecedor, int contador) {
    int i;
    for (i = 0; i < contador; i++) {
        printf("Nome Social:  %s \n", (cadastro_fornecedor + i)->nome_social);
        printf("Razao Social: %s \n", (cadastro_fornecedor + i)->razao_social);
        printf("Inscricao Estadual: %s \n", (cadastro_fornecedor + i)->inscricao_estadual);
        printf("CNPJ: %f \n", (cadastro_fornecedor + i)->cnpj);
        printf("Endereco: %s \n", (cadastro_fornecedor + i)->endereco);
        printf("E-mail: %s \n", (cadastro_fornecedor + i)->email);
        printf("Codigo: %d \n", (cadastro_fornecedor + i)->codigo);
        printf("Endereco: %s \n\n", (cadastro_fornecedor + i)->endereco);
    }
}

int Verificar_Fornecedor_Codigo(criar_Fornecedor *cadastro_fornecedor, criar_Fornecedor *cadastro_fornecedor_dados, int contador) {

    int i, verificacao = 0;
    for (i = 0; i < contador; i++) {
        if (cadastro_fornecedor_dados->codigo == (*(cadastro_fornecedor + i)).codigo) {
            verificacao = 1;
        }
    }
    return verificacao;
}
