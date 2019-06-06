#include <stdio.h>
#include <string.h>
#include <math.h>

///Feito por: Arthur José Fernandes

///Questão08 Fazer um programa em C que tenha 1 função cujo retorno é um número inteiro. Essa função deve receber 1 valor e convertê-lo para binário. Chame a função e imprima o resultado na função main.

int RetornarBinario(int Numero,int* Binario) {
    int Guardar[100];
    int Vez = 0;
    while (Numero != 0) {
        if (Numero % 2 == 0) {
            Guardar[Vez] = 0;
        } else {
            Guardar[Vez] = 1;
        }
        Numero = Numero / 2;
        Vez++;
    }
}

void main() {
    printf("Digite um número inteiro: ");
    int Temp;
    scanf("%d", &Temp);
    int Binario[100] = RetornarBinario(Temp, &Binario);
}