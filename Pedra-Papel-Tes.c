#include <stdio.h>

#define PEDRA 0
#define PAPEL 1
#define TESOURA 2

int verificarVitoriaRodada(int j1, int j2) {
    if      (j1 == j2)                          return 0;
    else if (j1 == PEDRA    && j2 == PAPEL)     return 2;
    else if (j1 == PEDRA    && j2 == TESOURA)   return 1;
    else if (j1 == PAPEL    && j2 == PEDRA)     return 1;
    else if (j1 == PAPEL    && j2 == TESOURA)   return 2;
    else if (j1 == TESOURA  && j2 == PEDRA)     return 2;
    else if (j1 == TESOURA  && j2 == PAPEL)     return 1;
}


int main() {
    printf("%i", verificarVitoriaRodada(PEDRA, PAPEL));
    return 0;
}