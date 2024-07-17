#include <stdio.h>

int main() {

    int vetor[4], matriz[4][3], prod[3];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        printf("Adicione valores ao vetor: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite valores para a matriz: ");
            scanf("%d", &matriz[i][j]);
        }
        
    }

    j = 0;

    while (j < 3) 
    {
        prod[j] = 0;
        i = 0;
        while (i < 4)
        {
            prod[j] = vetor[i] * matriz[i][j] + prod[j];
            i += 1;
        }
        j += 1;
    }

    printf("VETOR\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("MATRIZ\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    printf("PRODUTO ENTRE VETOR E MATRIZ\n");
    for (j = 0; j < 3; j++)
    {
        printf("%d ", prod[j]);
    }

    printf("\n");

    return 0;
}