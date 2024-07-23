#include <stdio.h>

int main() {

    int i, j;
    float n[10], media, soma = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &n[i]);
        soma += n[i];
    }

    media = soma / 10;

    for (j = 0; j < 10; j++) {
        if (n[j] > media) {
            printf("O numero %.2f é maior que a media %.2f\n", n[j], media);
        }
    }

    
    return 0;
}