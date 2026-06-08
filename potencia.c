#include <stdio.h>

int potencia(int x, int y) {
    int res = 1;
    if ((x == 0 && y == 0) || y == 0) return -1;
    for (int c = y; c > 0; c--) {
        res = res * x;
    }
    return res;
}

int main() {
    printf("%i", potencia(0, 0));
    return 0;
}