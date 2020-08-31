#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//funcao para limpar opcao
void flush_in(){ 
    int ch;
    while((ch = fgetc(stdin)) != EOF && ch != '\n'){} 
}