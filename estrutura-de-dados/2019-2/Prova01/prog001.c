#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct No {
    char caractere;
    struct No* prox;
} No;

No* ponteiroFinal = NULL;

// Função para empilhar os caracteres

void empilharCaracteres(char character) {
    No* ponteiroNo;
    ponteiroNo = (No *) malloc(sizeof (ponteiroNo));
    ponteiroNo->caractere = character;
    ponteiroNo->prox = NULL;
    if (ponteiroFinal == NULL)
        ponteiroFinal = ponteiroNo;
    else {
        ponteiroNo->prox = ponteiroFinal;
        ponteiroFinal = ponteiroNo;
    }

    // Debugar o encadeamento
    //printf("char = %c, prox = %p\n\n", ponteiroNo->caractere, ponteiroNo->prox);
}

int quantidadePalavras() {
    No* ponteiroNo;
    if (ponteiroFinal == NULL) {
        printf("Lista vazia.\n");
        return 0;
    }
    int quantidade = 1;
    ponteiroNo = ponteiroFinal;
    while (ponteiroNo != NULL) {
        if (ponteiroNo->caractere == ' ') {
            quantidade++;
        }
        ponteiroNo = ponteiroNo->prox;
    }
    return quantidade;
}

void main() {
    // Cria uma array de character com espaço para 90 letras
    char texto[90] = "";

    // Pede ao usuário para escrever um texto
    printf("\n ~ Digite um texto: ");
    scanf("%[^\n]c", texto);

    // Desfragmenta o texto
    int tamanho = strlen(texto);
    for (int i = 0; i < tamanho; i++) {

        // Verifica se é uma das extremidades e verifica se essa extremidade é um espaço, também verifica se a letra atual é um espaço e se a próxima
        // também é um espaço, assim, evitando contar duplos espaços
        if (((i == 0 || i == tamanho - 1) && texto[i] != ' ') || ((i != 0 && i != tamanho - 1) && (texto[i] == ' ' && texto[i + 1] != ' '))) {
            empilharCaracteres(texto[i]);
        }
    }

    // Pega a quantidade de palavras e printa na tela
    printf("\n O texto possui '%d' palavra(s).\n\n", quantidadePalavras());
}