#include <stdio.h>
#include <string.h>
#include <math.h>

///Feito por: Arthur Jos� Fernandes

///Quest�o08 Fazer um programa em C que tenha 1 fun��o cujo retorno � um n�mero inteiro. Essa fun��o deve receber 1 valor e convert�-lo para bin�rio. Chame a fun��o e imprima o resultado na fun��o main.

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
    printf("Digite um n�mero inteiro: ");
    int Temp;
    scanf("%d", &Temp);
    int Binario[100] = RetornarBinario(Temp, &Binario);
}