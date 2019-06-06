#include <stdio.h>
#include <string.h>

///Feito por: Arthur José Fernandes

///Questão10 Faça um programa em C que tenha 4 funções, para as quatro operações matemáticas (com retorno
///void); Cada função deve fazer a operação matemática usando como parâmetros 2 valores passados
//como ponteiros.

void Adicionar(int *Valor1, int *Valor2) {
    printf("%d + %d = %d\n", *Valor1, *Valor2, *Valor1 + *Valor2);
}

void Subtrair(int *Valor1, int *Valor2) {
    printf("%d - %d = %d\n", *Valor1, *Valor2, *Valor1 - *Valor2);
}

void Multiplicar(int *Valor1, int *Valor2) {
    printf("%d * %d = %d\n", *Valor1, *Valor2, *Valor1 * *Valor2);
}

void Dividir(int *Valor1, int *Valor2) {
    printf("%d / %d = %'.2f\n", *Valor1, *Valor2, ((float)*Valor1 / (float)*Valor2));
}

void main() {
    printf("Insira um valor inteiro: ");
    int Valor1;
    scanf("%d", &Valor1);
    printf("Insira outro valor inteiro: ");
    int Valor2;
    scanf("%d", &Valor2);
    printf("Escolha a operação matemática desejada:\n(1) Adição\t(2) Subtração\t(3) Multiplicação\t(4) Divisão\nSua escolha: ");
    int Escolha;
    scanf("%d", &Escolha);
    switch (Escolha) {
        case 1:
            Adicionar(&Valor1, &Valor2);
            break;
        case 2:
            Subtrair(&Valor1, &Valor2);
            break;
        case 3:
            Multiplicar(&Valor1, &Valor2);
            break;
        case 4:
            Dividir(&Valor1, &Valor2);
            break;
        default:
            printf("ERROR: Escolha inválida, tente novamente!\n");
            break;
    }
}