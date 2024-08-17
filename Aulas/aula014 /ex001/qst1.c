#include <stdio.h>
#include <stdlib.h>

int main () {

    int soma = 0;

    for(int i = 1; i <= 500; i++) {
        if(i % 2 == 1){
            if(i % 3 == 0){
                soma += i;
            }
        }
    }

    printf("A soma de todos os impares, multiplos de 3 é %d\n", soma);

    return 0;
}

/*
    Outra opção seria: 

    for(int i = 1; i <= 500; i++) {
        if(i % 2 == 1 && i % 3 == 0){
            soma += i;
        }
    }
    
    economizando um if dentro do for
*/