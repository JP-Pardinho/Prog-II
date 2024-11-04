/*
Faça um programa que leia n inteiros (definidos pelo usuário), tal que 1 ≤ n ≤ 10. Após
o encerramento da leitura, seu programa deve mostrar quantos dos n números são pares
e quantos são ímpares. O valor de n deverá ser fornecido pelo usuário.
*/

#include <stdio.h>

int main() {

    int v[10];
    int par = 0, impar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) {
            par += 1;
        }
        else {
            impar += 1;
        }
    }

    printf("\nQuantidade de pares é: %d", par);
    printf("\nQuantidade de impares é: %d\n", impar);



}