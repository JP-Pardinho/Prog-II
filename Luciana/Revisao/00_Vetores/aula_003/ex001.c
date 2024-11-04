#include <stdio.h>

int main(){ 
    int A[10];
    int B[10];
    int i;

    for(i = 0; i<10; i++){
        printf("Digite o %d valor: ", (i + 1));
        scanf("%d", &A[i]);
    }

    for(i = 0; i<10; i++){
        B[i] = A[i] * 10;
        printf("B[%d] \t= %d\n", (i+1), B[i]);
    }


    return 0;
}