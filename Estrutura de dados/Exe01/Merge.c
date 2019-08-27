#include<stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100000

long qtd_comparacoes = 0, qtd_trocas = 0;
long comp_Ordenado, troc_Ordenado;
double temp_Ordenado;

long comp_Aleatorio, troc_Aleatorio;
double temp_Aleatorio;

long comp_Decrescente, troc_Decrescente;
double temp_Decrescente;

void merge(int vetor[], int inicio, int meio, int fim);
void mergeSort(int vetor[], int inicio, int meio);

void main() {
    int count = 0;
    for (int y = 1; y <= 3; y++) {
        qtd_comparacoes = 0;
        qtd_trocas = 0;
        int vetor[TAMANHO]; //vetor com tamanho definido
        clock_t tempoInicial = 0, tempoFinal = 0; //Variaveis para guardar o tempo de execucao
        srand(time(NULL)); //Cria uma semente para numeros aleatorios
        tempoInicial = clock(); //inicia contagem do tempo
        switch (y) {
                /* Aleatório */
            case 1:
                for (int i = 0; i < TAMANHO; i++) {
                    vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 9
                }
                printf("\n\n----- Aleatória -----\n\n");
                break;

                /* Ordenado */
            case 2:
                for (int i = 0; i < TAMANHO; i++) {
                    vetor[i] = i;
                }
                printf("\n\n----- Ordenado -----\n\n");
                break;

                /* Decrescente */
            case 3:
                count = 0;
                for (int i = TAMANHO - 1; i >= 0; i--) {
                    vetor[count] = i;
                    count++;
                }
                printf("\n\n----- Decrescente -----\n\n");
                break;
        }
        //Mostra valores do vetor nao ordenado
        for (int i = 0; i < TAMANHO; i++) {
            printf("%d\t", vetor[i]);
        }
        printf("\n");
        //Chama a fucao passando o vetor como parametro
        mergeSort(vetor, 0, TAMANHO - 1);
        //Mostra valores do vetor ordenado   
        for (int i = 0; i < TAMANHO; i++) {
            printf("%d\t", vetor[i]);
        }
        printf("\n\n");
        printf("\n\n---------- -----------\n\n");
        tempoFinal = clock(); //finaliza contagem do tempo
        //calcula e mostra o tempo total de execucao

        switch (y) {
            case 1:
                temp_Aleatorio = (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC;
                troc_Aleatorio = qtd_trocas;
                comp_Aleatorio = qtd_comparacoes;
                break;
            case 2:
                temp_Ordenado = (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC;
                troc_Ordenado = qtd_trocas;
                comp_Ordenado = qtd_comparacoes;
                break;
            case 3:
                temp_Decrescente = (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC;
                troc_Decrescente = qtd_trocas;
                comp_Decrescente = qtd_comparacoes;
                break;
        }
    }
    for (int y = 1; y <= 3; y++) {
        switch (y) {
            case 1:
                printf("\n\n----- Aleatória -----\n\n");
                printf("Tempo: %f s\n", temp_Aleatorio);
                printf("Trocas = %ld\n", troc_Aleatorio);
                printf("Comparações = %ld\n", comp_Aleatorio);
                break;
            case 2:
                printf("\n\n----- Ordenado -----\n\n");
                printf("Tempo: %f s\n", temp_Ordenado);
                printf("Trocas = %ld\n", troc_Ordenado);
                printf("Comparações = %ld\n", comp_Ordenado);
                break;
            case 3:
                printf("\n\n----- Decrescente -----\n\n");
                printf("Tempo: %f s\n", temp_Decrescente);
                printf("Trocas = %ld\n", troc_Decrescente);
                printf("Comparações = %ld\n", comp_Decrescente);

                break;
        }
    }
    printf("\n\b---------- -----------\n\n");
}

void merge(int vetor[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) {
        L[i] = vetor[inicio + i];
        qtd_comparacoes++;
    }
    for (j = 0; j < n2; j++) {
        R[j] = vetor[meio + 1 + j];
        qtd_comparacoes++;
    }
    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        qtd_trocas++;
        vetor[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {

        qtd_trocas++;
        vetor[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int m = inicio + (fim - inicio) / 2;
        mergeSort(vetor, inicio, m);
        mergeSort(vetor, m + 1, fim);
        merge(vetor, inicio, m, fim);
    }
}
