#include <stdio.h>
#include <math.h>

///Feito por: Arthur Jos� Fernandes         Windows 10

///Quest�o04 Fazer um programa em C que leia n n�meros informados pelo usu�rio e calcule a m�dia e o desvio padr�o.

void main() {
    int Quantity = 0, Media = 0, VarianciaS[50], While1 = 1, Time = 0;
    float Variancia = 0;
    while (While1 == 1) {
        printf("Digite um n�mero inteiro: ");
        int Temp;
        scanf("%d", &Temp);
        Media += Temp;
        VarianciaS[Time] = Temp;
        Quantity++;
        printf("Deseja adicionar outro n�mero?\n(1) Sim\t(0) N�o => ");
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
    printf("Desvio Padr�o = %'.2f\n", sqrt(Variancia));
}