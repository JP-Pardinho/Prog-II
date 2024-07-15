#include <stdio.h>

int main () {
    double numeros[10];
    double soma = 0;
    double media;
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;

    for (i = 0; i < 5; i++) {
        if (numeros[i] > media) {
            printf("O numero %.2lf e maior que a media %.2lf\n", numeros[i], media);
        }
    }

    return 0;
}
