#include <stdio.h>

/*  
    Facilita a implementação de codigo
    Criar um arquivo .txt
    na hora do ./exec < .text
*/

int main() {

    int i;
    int vetor[20];
    int aux = 19, aux_vetor;

    for(i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        aux_vetor = vetor[i];
        vetor[i] = vetor[aux];
        vetor[aux] = aux_vetor;
        aux -= 1;
    }  

    for(i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}