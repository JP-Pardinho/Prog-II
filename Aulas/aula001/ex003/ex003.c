#include <stdio.h>

/*
Ler 10 inteiros e gravar em um vetor Teste1
e construir um vetor Teste2 do mesmo tipo,
observando a seguinte regra de formação: 
se o valor do índice for par, o valor do elementos deverá ser multiplicado por 5;
se for ímpar, deverá ser somado com 5. Ao final, mostrar oconteúdo dos dois vetores.
*/

int main() {

    int i = 0, teste1[10], teste2[10];

    for (i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &teste1[i]);
    }

    for (i = 0; i < 10; i++) {
        teste2[i] = teste1[i];
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            teste2[i] *= 5;
        } 
    
        else {
            teste2[i] += 5;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", teste1[i]);
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", teste2[i]);
    }
    
    printf("\n");

    return 0;
}