#include <stdio.h>
#include <math.h>

///Feito por: Arthur José Fernandes         Windows 10

///Questão05 Fazer um programa em C que gere, usando uma estrutura de repetição, as taboadas de 1 a 9.

void main() {
    printf("______________________________\n\n");
    for (int i = 1; i <= 9; i++) {
        for (int x = 1; x <= 10; x++) {
            printf("%d x %d = %d\n", i, x, i * x);
        }
        printf("\n______________________________\n\n");
    }
}