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

    if (a + b > c && a + c > b && b + c > a){
        printf("Os valores pertencem ao ");
        if (a == b && a == c && b == c)
        {
            printf("Triangulo equilatero (todos os lados iguais)\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Triangulo isóceles (dois lados iguais)\n");
        }
        else
        {
            printf("triangulo escaleno (todos os lados diferentes)\n");
        }
    }   else {
        printf("Os valores não formaram um triangulo!\n");
    }

    return 0;
}