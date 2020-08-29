#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

void embaralhaPecas(){

    char arrayPecas[28][6]= {
        "[0|0]",
        "[0|1]",
        "[0|2]",
        "[0|3]",
        "[0|4]",
        "[0|5]",
        "[0|6]",
        "[1|1]",
        "[1|2]",
        "[1|3]",
        "[1|4]",
        "[1|5]",
        "[1|6]",
        "[2|2]",
        "[2|3]",
        "[2|4]",
        "[2|5]",
        "[2|6]",
        "[3|3]",
        "[3|4]",
        "[3|5]",
        "[3|6]",
        "[4|4]",
        "[4|5]",
        "[4|6]",
        "[5|5]",
        "[5|6]",
        "[6|6]",
    };
    
    int randomEmbaralha[28];
    srand(time(NULL));
    for (int i = 0; i < 28; i++)
    {
        randomEmbaralha[i] = i;
    }

    for (int i = 0; i < 28; i++)
    {
        int j = randomEmbaralha[i];
        int posicao_rand = rand()%27;
        randomEmbaralha[i] = randomEmbaralha[posicao_rand];
        randomEmbaralha[posicao_rand] = j;
    }

    printf("Pecas embaralhadas: \n");
    for (int i = 0; i < 28; i++)
    {
        printf(arrayPecas[randomEmbaralha[i]]);
        printf(" ");
        if (i%7 == 0 && i != 0)
        {
            printf("\n");
        }
    }    
    printf("\n\n");

}