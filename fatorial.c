#include <stdio.h>

double fatorial(int n) {
    double sum = 0;
    for (int c = 1; c <= n; c++) {
        sum = sum * c;
    }
    return sum;
}

int main() {
    printf("%f", fatorial(20));
    return 0;
}
