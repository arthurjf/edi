#include <stdio.h>

//PROG04

void TrocarLetras(char* caractere) {
    if (*caractere == 'a' || *caractere == 'A') {
        *caractere = 'z';
    }
}

void main() {
    char Vetor[10];
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("Informe o caractere do Vetor[%d]: ", i);
        scanf("%[^\n]%*c", &Vetor[i]);
    }
    printf("\nTexto antes: %s\n", Vetor);
    for (int i = 0; i < 10; i++) {
        TrocarLetras(&Vetor[i]);
    }
    printf("\nTexto depois: %s\n\n", Vetor);
}