#include <stdio.h>

//PROG03 

void Modificar(int* valor) {
    printf("\nSeu número é: %d\n\nTrocando...\n\n", *valor);
    *valor = *valor * 5;
    printf("Seu novo número é: %d\n\n", *valor);
}

void main() {
    int numero = 10;
    Modificar(&numero);
}