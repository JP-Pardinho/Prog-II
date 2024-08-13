
/*
a) Implemente uma função que aloca um vetor cujo tamanho deve ser passado como parâmetro.
A função deve retornar o ponteiro para a memória alocada. Caso a alocação seja mal
sucedida, a função deve imprimir uma mensagem de erro e abortar o programa.

b) Implemente uma função que preenche um vetor de inteiros com capacidade para N ele-
mentos. Sua função recebe um vetor de inteiros (alocado dinâmicamente) e o tamanho do
vetor.
c) Implemente uma função que imprime um vetor de inteiros. Sua função recebe um vetor de
inteiros (alocado dinâmicamente) e o tamanho do vetor.

d) Implemente o algoritmo iterativo de busca binária em um vetor de números inteiros, orde-
nado de forma não decrescente, com tamanho N.

e) Explique em seu código (em formato de comentário) como você garante que seu algoritmo
termina.
f) Implemente a função main para testar a função de busca implementada. A função deve

alocar dinamicamente o vetor de inteiros com o tamanho fornecido pelo usuário e preenchê-
lo com valores inteiros informados pelo usuário. Após o preenchimento do vetor, a função

deve imprimir o vetor e solicitar ao usuário que digite um valor para a busca, realizar a
busca binária e imprimir a posição do elemento no vetor, caso ele exista, ou a mensagem:
“O elemento informado não existe no vetor.”. Utilize as funções implementadas nos itens
anteriores.*/
#include <stdlib.h>
#include <stdio.h>  

int* aloca_vetor (int tamanho) {
    int *V = NULL;

    if (tamanho <= 0){
        printf("Erro!\n");
    }
    else {
        V = (int *)malloc(tamanho*sizeof(int));
        if (V == NULL){
            exit(1);
        }
        return V;
    }
    return NULL;
}

void adiciona_vetor (int *arr, int comp) {
    int i;
    arr = (int *)malloc(comp*sizeof(int));
    for(i=0; i < comp; i++) {
        scanf("%d", &arr[i]);
    }
    
}


int main() {

    int tam_v; // questao a)
    int *f = NULL; // questão a)

    scanf("%d", &tam_v);

    f = aloca_vetor(tam_v);

    adiciona_vetor(f, tam_v);

    for (int i = 0; i < tam_v; i++) {
        printf("%d\n", f[i]);
    }
    

    return 0;
}