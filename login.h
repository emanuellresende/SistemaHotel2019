#ifndef login_h
#define login_h

typedef struct criar_Login {
    char usuario[100];
    int senha;

} criar_Login;
criar_Login login;
int logar;
int verificar_login_final;
int verificar_Posicao_login;
int verificar_Usuario;
int verificar_senha;
int verificar_senha_login;
int verificar_acesso0;
int verificar_acesso1;
int verificar_acesso2;
int verificar_acesso3;
int verificar_acesso4;
int verificar_acesso5;


// Realiza os processos de verificacao de login e verificacao de todos os acessos ao sistema
int verificar_Login_final(cadastro_Operadores *cadastro_operadores, criar_Login *login, int posicao);
int verificar_posicao_login(cadastro_Operadores *cadastro_operadores, criar_Login *login, int contador_operador);
int verificar_Usuariol(cadastro_Operadores *cadastro_operadores, criar_Login *login, int contador_operador);
int verificar_senhal(cadastro_Operadores *cadastro_operadores, criar_Login *login, int posicao);
int verificar_acessos(cadastro_Operadores *cadastro_operadores, int posicao);
int verificar_acessos1(cadastro_Operadores *cadastro_operadores, int posicao);
int verificar_acessos2(cadastro_Operadores *cadastro_operadores, int posicao);
int verificar_acessos3(cadastro_Operadores *cadastro_operadores, int posicao);
int verificar_acessos4(cadastro_Operadores *cadastro_operadores, int posicao);
int verificar_acessos5(cadastro_Operadores *cadastro_operadores, int posicao);




#endif