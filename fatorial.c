#include <stdio.h>

double fatorial(int n) {
    if (n > 0) {
        double sum = 1;
        for (int c = 1; c <= n; c++) {
            sum = sum * c;
        } 
        return sum;
    } else {
        return -1;
    }
   
}

int main() {
    printf("%.0f", fatorial(20));
    return 0;
}
