#include <stdio.h>

int main() {
    int n, i;

    printf("Por favor, informe um número inteiro positivo n: ");
    scanf("%d", &n);

    printf("Os %d primeiros números naturais ímpares são: ", n);

    for (i = 1; i <= n; i++) {
        printf("%d", 2 * i - 1);
        if (i < n) {
            printf(", ");
        }
    }


    return 0;
}