#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i=0, j=0, k=1;
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);


    for(i=0; i<num; i++){
        k = k + j;
        printf("%d ", j);
        j = k - j;
    }
    
    return 0;
}