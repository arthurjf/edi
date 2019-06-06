#include <stdio.h>
#include <string.h>

//PROG02

void main() {
    char Texto[10];
    printf("\nDigite um texto: ");
    scanf("%[^\n]%*c", Texto);
    int Qtd_Letras = strlen (Texto);
    printf("\nSeu texto tem %d letra(s)\n\n", Qtd_Letras);
}