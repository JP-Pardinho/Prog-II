#include <stdio.h>

int main() {
    int n, i;
    int triangular = 0;

    printf("Por favor, informe um número inteiro não-negativo n: ");
    scanf("%d", &n);
    
    for (i = 1; i * (i + 1) * (i + 2) <= n; i++) {
        if (i * (i + 1) * (i + 2) == n) {
            triangular = 1;
            break;
        }
    }

    if (triangular) {
        printf("%d é um número triangular!\n", n);
    } else {
        printf("%d não é um número triangular.\n", n);
    }

    return 0;
}