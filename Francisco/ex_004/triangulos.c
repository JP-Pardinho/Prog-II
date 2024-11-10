#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro valor do triangulo: ");
    scanf("%d", &a);
    printf("Digite o segundo valor do triangulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor do triangulo: ");
    scanf("%d", &c);

    if (a >= 0 && b >= 0 && c >= 0)
    {
        printf("Não é um triangulo\n");
    }
    else if (a == b && a == c && b == c)
    {
        printf("Triangulo equilatero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Triangulo isóceles\n");
    }
    else if (a != b && b != c && a != c)
    {
        printf("triangulo escaleno\n");
    }
}