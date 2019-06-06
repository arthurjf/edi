#include <stdio.h>

void main() {
    printf("Digite um número inteiro: ");
    int Number;
    scanf("%d", &Number);
    if (Number % 2 == 0) {
        printf("Seu número é par!");
    } else {
        printf("Seu número é ímpar!");
    }
}