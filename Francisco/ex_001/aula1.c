#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, tam = 10, num;
    int soma = 0;

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos %d numeros é igual a: %d\n", tam, soma);

    return 0;
}