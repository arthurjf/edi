#include <stdio.h>

void main() {
    printf("Digite um n�mero inteiro: ");
    int Number;
    scanf("%d", &Number);
    if (Number % 2 == 0) {
        printf("Seu n�mero � par!");
    } else {
        printf("Seu n�mero � �mpar!");
    }
}