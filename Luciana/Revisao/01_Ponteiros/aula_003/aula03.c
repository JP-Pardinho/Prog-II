#include <stdio.h>
#include <stdlib.h>

void soma10 (int *x){
    *x = *x + 10;
    return;
}
 
int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado é %d\n", numero);

    soma10(&numero);

    printf("Agora o numero digitado vale: %d\n", numero);

    return 0;
}