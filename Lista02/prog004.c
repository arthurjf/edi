#include <stdio.h>
#include <math.h>

///Feito por: Arthur José Fernandes         Windows 10

///Questão04 Fazer um programa em C que leia n números informados pelo usuário e calcule a média e o desvio padrão.

void main() {
    int Quantity = 0, Media = 0, VarianciaS[50], While1 = 1, Time = 0;
    float Variancia = 0;
    while (While1 == 1) {
        printf("Digite um número inteiro: ");
        int Temp;
        scanf("%d", &Temp);
        Media += Temp;
        VarianciaS[Time] = Temp;
        Quantity++;
        printf("Deseja adicionar outro número?\n(1) Sim\t(0) Não => ");
        int Choosen;
        scanf("%d", &Choosen);
        if (Choosen != 1) {
            While1 = 0;
        } else {
            Time++;
        }
    }
    Media = Media / Quantity;
    for (int i = 0; i <= Time; i++) {
        VarianciaS[i] = (VarianciaS[i] - Media)*(VarianciaS[i] - Media);
        Variancia += VarianciaS[i];
    }
    Variancia = Variancia / (Quantity - 1);
    printf("Media = %d\n", Media);
    printf("Desvio Padrão = %'.2f\n", sqrt(Variancia));
}