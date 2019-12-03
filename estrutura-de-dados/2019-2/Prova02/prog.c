//Feito por: Arthur José Fernandes

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define quantidade 7

typedef struct Matriz {
    int array[quantidade][quantidade];
} Matriz;

Matriz preencherMatriz(Matriz matriz) {
    printf("\nPreenchendo matriz...\n");
    srand(time(0));
    for (int x = 0; x < quantidade; x++) {
        for (int y = 0; y < quantidade; y++) {
            matriz.array[x][y] = rand() % (quantidade * quantidade);
        }
    }
    return matriz;
}

void imprimirMatriz(Matriz matriz) {
    printf("\nImprimindo matriz...\n");
    for (int x = 0; x < quantidade; x++) {
        for (int y = 0; y < quantidade; y++) {
            printf("matriz[%d][%d] = %d\t", x, y, matriz.array[x][y]);
        }
        printf("\n");
    }
}

Matriz ordernarMatriz(Matriz matriz) {
    printf("\nOrdenando matriz...\n");
    for (int i = 1; i < (quantidade * quantidade); i++) {
        for (int x = 0; x < quantidade; x++) {
            for (int y = 0; y < quantidade; y++) {
                if (matriz.array[x][y] > matriz.array[x][y + 1]) {
                    int aux = matriz.array[x][y];
                    matriz.array[x][y] = matriz.array[x][y + 1];
                    matriz.array[x][y + 1] = aux;
                }
            }
        }
    }
    return matriz;
}

void imprimirArvoreBinaria(Matriz matriz) {
    printf("\nImprimindo árvore binária...\n");
    FILE *arquivoDot = fopen("arvore.dot", "w");
    fprintf(arquivoDot, "%s", "digraph G {\n");
    for (int i = 0; i < quantidade; i++) {
        char s[20];
        if (i < quantidade - 1) {
            sprintf(s, "%d->%d;\n", matriz.array[i][i], matriz.array[i + 1][i + 1]);
        } else {
            sprintf(s, "%d;\n", matriz.array[i][i]);
        }
        fprintf(arquivoDot, "%s", s);
    }
    fprintf(arquivoDot, "%s", "}");
    fclose(arquivoDot);
    system("dot -Tpng arvore.dot -o arvore.png");
}

void main() {
    Matriz matriz;
    matriz = preencherMatriz(matriz); // Questão 1
    imprimirMatriz(matriz); // Questão 1
    matriz = ordernarMatriz(matriz); // Questão 2
    imprimirMatriz(matriz); // Questão 2
    imprimirArvoreBinaria(matriz); // Questão 3
}