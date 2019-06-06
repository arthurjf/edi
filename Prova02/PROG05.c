#include <stdio.h>

//PROG05

void main() {
    int Quantia;
    int Qtd_Cem = 0, Qtd_Cinquenta = 0, Qtd_Vinte = 0, Qtd_Dez = 0, Qtd_Cinco = 0, Qtd_Dois = 0, Qtd_Um = 0;
    printf("\nInforme a quantia que deseja sacar:\n\nR$ ");
    scanf("%d", &Quantia);
    while (Quantia != 0) {
        if (Quantia >= 100) {
            Quantia -= 100;
            Qtd_Cem++;
        } else if (Quantia >= 50) {
            Quantia -= 50;
            Qtd_Cinquenta++;
        } else if (Quantia >= 20) {
            Quantia -= 20;
            Qtd_Vinte++;
        } else if (Quantia >= 10) {
            Quantia -= 10;
            Qtd_Dez++;
        } else if (Quantia >= 5) {
            Quantia -= 5;
            Qtd_Cinco++;
        } else if (Quantia >= 2) {
            Quantia -= 2;
            Qtd_Dois++;
        } else if (Quantia >= 1) {
            Quantia -= 1;
            Qtd_Um++;
        }
    }
    printf("\n---------Seu saque---------\n\n");
    if (Qtd_Cem > 0) {
        printf("%dx - R$ 100\n", Qtd_Cem);
    }
    if (Qtd_Cinquenta > 0) {
        printf("%dx - R$ 50\n", Qtd_Cinquenta);
    }
    if (Qtd_Vinte > 0) {
        printf("%dx - R$ 20\n", Qtd_Vinte);
    }
    if (Qtd_Dez > 0) {
        printf("%dx - R$ 10\n", Qtd_Dez);
    }
    if (Qtd_Cinco > 0) {
        printf("%dx - R$ 5\n", Qtd_Cinco);
    }
    if (Qtd_Dois > 0) {
        printf("%dx - R$ 2\n", Qtd_Dois);
    }
    if (Qtd_Um > 0) {
        printf("%dx - R$ 1\n", Qtd_Um);
    }
    printf("\n---------------------------\n");
}