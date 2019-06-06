#include <stdio.h>

///Feito por: Arthur José Fernandes

///Este algoritmo faz seus calculos baseando-se até a data 01/01/2019.

void main() {
    printf("Informe o dia do seu nascimento: ");
    int Day;
    scanf("%d", &Day);
    printf("Informe o mês do seu nascimento: ");
    int Month;
    scanf("%d", &Month);
    printf("Informe o ano do seu nascimento: ");
    int Year;
    scanf("%d", &Year);
    int Anos = 2019 - Year;
    int DaysLived = (Anos * 365) + 1;
    for (int i = Year; i <= 2019; i++) {
        if (i % 4 == 0 || i % 10 == 0 && i % 400 == 0 && i % 4 == 0) {
            DaysLived++;
        }
    }
    switch (Month) {
        case 1:
            DaysLived -= Day;
            break;
        case 2:
            DaysLived -= (31 + Day);
            break;
        case 3:
            DaysLived -= (59 + Day);
            break;
        case 4:
            DaysLived -= (90 + Day);
            break;
        case 5:
            DaysLived -= (120 + Day);
            break;
        case 6:
            DaysLived -= (151 + Day);
            break;
        case 7:
            DaysLived -= (181 + Day);
            break;
        case 8:
            DaysLived -= (212 + Day);
            break;
        case 9:
            DaysLived -= (243 + Day);
            break;
        case 10:
            DaysLived -= (273 + Day);
            break;
        case 11:
            DaysLived -= (304 + Day);
            break;
        case 12:
            DaysLived -= (334 + Day);
            break;
    }
    printf("(01/01/2019) Você já viveu aproximadamente %d dia(s).", DaysLived);
}