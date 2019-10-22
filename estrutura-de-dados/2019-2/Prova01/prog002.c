#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMANHO 20

int pegarNumeroDoChar(char alfabeto[], char letra) {
    for (int x = 0; x < strlen(alfabeto); x++) {
        if (alfabeto[x] == letra || toupper(alfabeto[x]) == letra) {
            return x;
        }
    }
}

char pegarTextoDoNumero(char alfabeto[], int numero) {
    for (int x = 0; x < strlen(alfabeto); x++) {
        if (x == numero) {
            return alfabeto[numero];
        }
    }
}

void main() {

    char alfabeto[] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char texto[TAMANHO];

    printf("\n ~ Digite uma palavra: ");
    scanf("%s", texto);
    int tamanhoTexto = strlen(texto);

    int numero[strlen(texto)];
    for (int i = 0; i < strlen(texto); i++) {
        numero[i] = pegarNumeroDoChar(alfabeto, texto[i]);
    }

    printf("\n %s = (", texto);
    for (int i = 0; i < strlen(texto); i++) {
        printf("%d", numero[i]);
        if (i < tamanhoTexto - 1) {
            printf(",");
        }
    }

    printf(")\n\n\n * Ordenando pelo bubble sort... \n\n\n ");


    // Ordenação por bubble sort //
    int aux = 0;
    for (int i = 1; i < tamanhoTexto; i++) {
        for (int j = 0; j < tamanhoTexto - 1; j++) {
            if (numero[j] > numero[j + 1]) {
                aux = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = aux;
            }
        }
    }

    // As linhas abaixo imprimem o texto e os seus respectivos números
    for (int i = 0; i < tamanhoTexto; i++) {
        printf("%c", pegarTextoDoNumero(alfabeto, numero[i]));
    }
    printf(" = (");
    for (int i = 0; i < tamanhoTexto; i++) {
        printf("%d", numero[i]);
        if (i < tamanhoTexto - 1) {
            printf(",");
        }
    }
    printf(")\n\n");

}