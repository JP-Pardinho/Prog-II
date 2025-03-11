#include <stdio.h>
#include <stdlib.h>

void ordenar(float *vet){
    int i, j;
    float aux;

    for(j=1; j<5; j++){
        // printf("%d\n", vet[i]);
        for (i=0; i<(5-1); i++){
            if (vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;

            }
        }
        
    }
}

int main() {
    int i;
    float peso[5];

    for(i=0; i<5; i++){
        printf("Digite o peso do %d paciente: ", i + 1);    
        scanf("%f", &peso[i]);
    }

    ordenar(peso);

    for (i=0; i<5; i++){
        printf("%f\n", peso[i]);
    }
    printf("\n");

    return 0;
}