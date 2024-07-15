#include <stdio.h>

/*
Ler 20 números num vetor
e saber qual o maior
*/

int main() {

    int i = 0, numeros[20], maior = 0;

    for (i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    printf("O maior numero é %d\n", maior);

    return 0;
}