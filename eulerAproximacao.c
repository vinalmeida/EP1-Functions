#include <stdio.h>

int fatorial(int n) {
    int res = 1;
    for (int c = 1; c <= n; c++) {
        res = res * c;
    }
    return res;
}

double aproximarEuler(int k) {
    if (k > 0) {
        double sum = 0;
        double num = 1;
        int i;
        int stop = k - 1;
          
        for(i = 0; i <= stop; i++) {
            sum += num / fatorial(i);
        }

        return sum;
    }
    else {
        return -1;
    }
}

int main() {
    printf("%f", aproximarEuler(10));
    return 0;
}
