#include <stdio.h>

int main () {
    double x, y, z, media;

    printf("Digite o valor para X: ");
    scanf("%lf", &x);
    printf("\nDigite o valor de Y: ");
    scanf("%lf", &y);
    printf("\nDigite o valor de Z: ");
    scanf("%lf", &z);

    media = (x + y + z)/3;

    printf("A media entre os 3 valores digitados é: %.2f\n", media);

    return 0;
}