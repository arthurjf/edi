#include <stdio.h>
#include <string.h>

///Feito por: Arthur Jos� Fernandes

///Quest�o10 Fa�a um programa em C que tenha 4 fun��es, para as quatro opera��es matem�ticas (com retorno
///void); Cada fun��o deve fazer a opera��o matem�tica usando como par�metros 2 valores passados
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
    printf("Escolha a opera��o matem�tica desejada:\n(1) Adi��o\t(2) Subtra��o\t(3) Multiplica��o\t(4) Divis�o\nSua escolha: ");
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
            printf("ERROR: Escolha inv�lida, tente novamente!\n");
            break;
    }
}