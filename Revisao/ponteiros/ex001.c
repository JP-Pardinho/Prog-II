#include <stdio.h>
#include <stdlib.h>

void display (int var, int *ptr) {
    
    printf("\n\n");
    printf("Conteudo de var           = %d\n", var);
    printf("Endereço de var           = %p\n", &var);
    printf("Conteudo apontado por ptr = %d\n", *ptr);
    printf("Endereço apontado por ptr = %p\n", ptr);
    printf("Endereço do ptr           = %p\n", &ptr);
}

void update(int *p) {

    *p = *p +1;
}
 
int main() {

    int var = 15;
    int *ptr;

    ptr = &var;

    display(var, ptr);

    update(&var);

    display(var,ptr);



    printf("\nEnd.\n");

    return 0;
} // Final da main

/*
    Ponteiros:

    *ptr : o apontado por, conteúdo do endereço da variável que ptr aponta
     ptr : o endereço da variavel
    &ptr : o endereço do ponteiro

*/