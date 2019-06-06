#include <stdio.h>

//PROG01

void main() {
    int Resultado = 0;
    printf("\n");
    for (int i = 0; i <= 20; i++) {
        if (i % 2 == 0) {
            if (i == 20) {
                printf("%d =", i);
            } else {
                printf("%d + ", i);
            }
            Resultado += i;
        }
    }
    printf(" %d\n\n", Resultado);
}