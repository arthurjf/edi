#include <stdio.h>
#include <string.h>

///Feito por: Arthur Jos� Fernandes

///Quest�o07 Fazer um programa em C que leia, em um vetor, uma string, e depois, usando o for, imprima a string invertida.

void main() {
    char Text[100];
    printf("Digite um texto: ");
    scanf("%[^\n]%*c", Text);
    printf("Texto ao contr�rio: ");
    for (int i = strlen(Text); i >= 0; i--) {
        printf("%c", Text[i]);
    }
    printf("\n");
}