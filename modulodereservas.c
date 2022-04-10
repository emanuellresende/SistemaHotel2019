
menu_reservas = 0;
while(menu_reservas != 5){
cadastro_reserva = malloc(sizeof(criar_Reserva));
printf(" ----- Modulo de Reservas ----- \n");
printf("1 - Realizar Reserva\n");
printf("2 - Listar Reserva\n");
printf("3 - Editar Reserva\n");
printf("4 - Excluir Reserva\n");
printf("5 - Sair\n");
scanf("%d", &menu_reservas);
switch(menu_reservas){
    default:
    printf("Opcao Invalida\n");
    break;
    case 5 :
    printf("Retornado\n");
    break;
    case 2: 
    printf("----- Listar Reservas\n");
    ver_reserva(cadastro_reserva, contador_reservas);
    break; // Fecha listar
    case 4:
    break;
    case 3:
    break;
    case 1:
    verificar_reservas = 0;
        printf("Digite o tipo desejado\n");
        setbuf(stdin, NULL);
        fgets(cadastro_acomodacao_dados.categoria, 100, stdin);
            verificar_reservas = Verificar_acomodacao_tipo(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
            if (verificar_reservas == 0)
            {
                printf("Tipo nao Cadastrado\n");
                break;
            }
            verificar_reservas = 0;
            mostrar_acomodacao_tipo(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);
            printf("Digite o codigo da Categoria que Deseja alugar\n");
            scanf("%d", &cadastro_acomodacao_dados.codigo);
            verificar_reservas = Verificar_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);

            if (verificar_reservas == 0)
            {
                printf("Codigo incorreto\n");
                break;
            }
            printf("Deseja realmente alugar essa acomodacao?\n");
            printf("1 - Sim\n");
            printf("2 - Nao\n");
            scanf("%d", &confirmar_reserva);
            switch(confirmar_reserva){
           	default:
                printf("Comando Invalido\n");
                break;
                case 2:
                printf("Reserva nao Realizada\n");
                break;
                 case 1:
                posicao_reserva = Posicao_acomodacao(cadastro_acomodacao, &cadastro_acomodacao_dados, contador_acomodacao);

                if (posicao_reserva == -1)
                {
                    printf("Ocorreu um erro durante a reserva\n");
                    break;
                }

                Cadastro_reserva(cadastro_acomodacao, cadastro_reserva, &contador_reservas, posicao_reserva);
                cadastro_reserva = realloc(cadastro_reserva, (contador_reservas + 2) * sizeof (criar_Reserva));
                cadastro_reserva = realloc(cadastro_reserva, (contador_reservas + 2) * sizeof (criar_Reserva));

                printf("Reserva Realizada Com Sucesso\n");

                break; // fecha o case 1 realizar reserva
            }// fecha o confirmar reserva
break; // fecha o case 1 principal
    } // fecha o switch
} // Fecha o while

