#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "./EmbaralhaPecas.cpp"
#include "./MostraPecas.cpp"
#include "./FlushIn.cpp"


int main()
{
    char option; // OPÇÃO
    bool fim = false;    
    do
    {
      
        printf("Domino The Game\n");
        printf("===============\n");
        // MENU //
        printf("(1) - Iniciar novo jogo\n");
        printf("(2) - Continuar a jogar\n");
        printf("(3) - Salvar jogo\n");
        printf("(4) - Carregar jogo\n");
        printf("(5) - Regras do jogo\n");
        printf("(6) - Sair\n\n");

        printf("Opcao selecionada: \n");
        option = getchar();
        flush_in();
        switch(option)
        {
            case '1': // 
            printf("Voce escolheu iniciar um novo jogo!!\n\n");
            printf("Deseja embaralhar as pecas ou mostra-las sem embaralhar?\n");
            printf("(E para embaralhar/ M para mostrar)\n\n");

            char em;
            em = getchar();
            flush_in(); // LIMPA OPCAO

            printf("\n");
            if (toupper(em) == 'E')
            {
                embaralhaPecas();

                printf("Deseja desembaralhar as pecas? (S/N)");
                char sn;
                sn = getchar();
                flush_in(); // LIMPA OPCAO

                printf("\n");
                if (toupper(sn) == 'S')
                {
                    mostraPecas();
                }else {}
            }
            else if (toupper(em) == 'M')
            {
                mostraPecas();
            }
            break;


            case '2': // 
            printf("Voce escolheu a opcao %c\n", option);
            break;


            case '3': // 
            printf("Voce escolheu a opcao %c\n", option);
            break;


            case '4': // 
            printf("Voce escolheu a opcao %c\n", option);
            break;


            case '5': // 
            printf("Voce escolheu a opcao %c\n", option);
            break;


            case '6': // SAIR
            fim = true;
            break;
        }   
    }while(!fim);
}

