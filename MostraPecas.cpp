#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void mostraPecas()
{
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
    printf("Pecas do jogo: \n");
    for (int i = 0; i < 28; i++)
    {
        printf(arrayPecas[i]);
        printf(" ");
    }    
    printf("\n\n");

}