#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    int fator = 1;
    int i = 1;
    while (i <= n)
    {
        fator = fator * i;
        i++;
    }
    return fator;
}

int main()
{
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("O %d fatoral é igual a: %d\n", num, fatorial(num));

    return 0;
}