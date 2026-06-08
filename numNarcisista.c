#include <stdio.h>

int potencia(int x, int y) {
    int res = 1;
    for (int c = y; c > 0; c--) {
        res = res * x;
    }
    return res;
}

int expoenteNarcisista(int k) {
    int expoente = 1;
        while (k > 9) {
        k = k / 10;
        expoente += 1;
    }
    return expoente;
}

int ehNarcisista(int n) {
    int original = n;
    int resto = 0;
    int exp = expoenteNarcisista(n);
    int soma = 0;

    while (n > 9) {
        resto = n % 10;
        soma += potencia(resto, exp);
        n = n / 10;
    }
    soma += potencia(n, exp);
    
    if (soma == original) {
        return 1;
    } else {
        return 0;
    }
}


int main () {
    printf("%i\n", ehNarcisista(407));
    return 0;
}