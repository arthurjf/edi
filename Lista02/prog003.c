#include <stdio.h>

///Feito por: Arthur José Fernandes         Windows 10

///Questão03 Fazer um programa em C que leia as coordenadas X e Y e informe em que quadrante do plano cartesiano encontra-se o ponto.

void main() {
    printf("Informe o ponto X da questão: ");
    float X;
    scanf("%f", &X);
    printf("Informe o ponto Y da questão: ");
    float Y;
    scanf("%f", &Y);
    if (X > 0 && Y > 0) {
        printf("(%'.2f,%'.2f) está no primeiro quadrante.\n", X, Y);
    } else if (X < 0 && Y > 0) {
        printf("(%'.2f,%'.2f) está no segundo quadrante.\n", X, Y);
    } else if (X < 0 && Y < 0) {
        printf("(%'.2f,%'.2f) está no terceiro quadrante.\n", X, Y);
    } else if (X > 0 && Y < 0) {
        printf("(%'.2f,%'.2f) está no quarto quadrante.\n", X, Y);
    }
}