#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int x, *ptrx, **pptrx;

    x = 10;

    printf("Valor de x = %d\n", x);
    printf("Endereço de x = %x\n\n", &x);

    ptrx = &x;
    pptrx = &ptrx;

    *ptrx = *ptrx + 10;
    printf("Valor de x = %d\n", x);
    printf("Valor apontado de ptrx = %d\n", *ptrx);
    printf("Endereço apontado de ptrx = %x\n\n", ptrx);

    printf("valor apontado por pptrx = %d\n", **pptrx);
    printf("Endereço apontado por pptrx = %x\n\n", &pptrx);




    return 0;
}