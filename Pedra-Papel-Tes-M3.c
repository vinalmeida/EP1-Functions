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

int melhorDeTres(int j1_r1,  int j2_r1, int j1_r2,  int j2_r2, int j1_r3,  int j2_r3) {

    int vit1 = 0;
    int vit2 = 0;
    
    switch (verificarVitoriaRodada(j1_r1, j2_r1)) {
        case 0: break;
        case 1: vit1++; break;
        case 2: vit2++; break; 
    }

    switch (verificarVitoriaRodada(j1_r2, j2_r2)) {
        case 0: break;
        case 1: vit1++; break;
        case 2: vit2++; break; 
    }

    switch (verificarVitoriaRodada(j1_r3, j2_r3)) {
        case 0: break;
        case 1: vit1++; break;
        case 2: vit2++; break; 
    }

    if (vit1 == vit2)   return 0;
    else if (vit1 > vit2) return 1;
    else if (vit1 < vit2) return 2;
}  

int main() {
    printf("%i", melhorDeTres(2,1,2,1,2,1));
    return 0;
}