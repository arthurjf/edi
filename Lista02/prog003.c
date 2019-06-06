#include <stdio.h>

///Feito por: Arthur Jos� Fernandes         Windows 10

///Quest�o03 Fazer um programa em C que leia as coordenadas X e Y e informe em que quadrante do plano cartesiano encontra-se o ponto.

void main() {
    printf("Informe o ponto X da quest�o: ");
    float X;
    scanf("%f", &X);
    printf("Informe o ponto Y da quest�o: ");
    float Y;
    scanf("%f", &Y);
    if (X > 0 && Y > 0) {
        printf("(%'.2f,%'.2f) est� no primeiro quadrante.\n", X, Y);
    } else if (X < 0 && Y > 0) {
        printf("(%'.2f,%'.2f) est� no segundo quadrante.\n", X, Y);
    } else if (X < 0 && Y < 0) {
        printf("(%'.2f,%'.2f) est� no terceiro quadrante.\n", X, Y);
    } else if (X > 0 && Y < 0) {
        printf("(%'.2f,%'.2f) est� no quarto quadrante.\n", X, Y);
    }
}