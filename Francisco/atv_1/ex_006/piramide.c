#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, j;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("Digite um numero impar!\n");
        }
    } while (n % 2 == 0);

    for (i = 0; i <= (n / 2); i++)
    {
        for (j = (i + 1); j <= (n - i); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}