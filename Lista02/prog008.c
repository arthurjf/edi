#include <stdio.h>

///Feito por: Arthur José Fernandes

//Questão08

void ConverterEmBinario(int Numero) {
    int Converter[100];
    int Vez = 0;
    while (Numero != 0) {
        if (Numero % 2 == 0) {
            Converter[Vez] = 0;
        } else {
            Converter[Vez] = 1;
        }
        Numero = Numero / 2;
        Vez++;
    }
    
    ///
    printf("Seu número em binário é: ");
    for (int i = Vez - 1; i >= 0; i--) {
        printf("%d", Converter[i]);
    }
    printf("\n");
    /// 
    
}

void main() {
    printf("Digite um valor inteiro: ");
    int valor;
    scanf("%d", &valor);
    ConverterEmBinario(valor);
}