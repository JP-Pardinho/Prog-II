#include <stdio.h>

// Ler 10 números reais                                     ok
// calcular a média                                         ok
// imprimir o maior valor menor do que a média calculada.   ok

int main() {

    int i = 0;
    float numeros[10], soma = 0, aux = 0, media;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        if (numeros[i] > aux && numeros[i] < media) {
            aux = numeros[i];
        }
    }

    printf("O maior menor numero que a media %.2f é: %.2f\n", media, aux);

    return 0;
}
