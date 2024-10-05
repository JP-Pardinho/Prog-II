#include <stdio.h>

// Mostrando que nem sempre o vetor iniciado é realmente vazio, pode existir algum lixo na memoria

/*
int main(){
    int i, vetor[6] = 0;

    for(i=0; i<=5; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
*/

// Iniciando um vetor zerado de tamanho n

/*
int main(){
    int v[20], i;
    
    for(i = 0; i <= 19; i++){
        v[i] = 0;
    }

    for(i = 0; i <= 19; i++){
        printf("vetor[%d] = %d\n", i, v[i]);
    }

    return 0;
}
*/


// Resolvendo o problema do looping para zerar o vetor

int main(){
    int i;

    int vet[5] = {10, 20};
    //vet[5] = {0} todos elementos zeram; 
    //vet[5] = {10, 20} as posições recebem o valor e o restante é zero
    //vet[5] = { } todas posições iniciacm com zero
     

    for(i = 0; i <= 4; i++){
        printf("vetor[%d] = %d\n", i, vet[i]);
    }
}