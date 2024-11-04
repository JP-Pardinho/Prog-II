#include <stdio.h>

float media(int n, float *vnotas){
    int i;
    float m = 0, soma = 0;
    for(i=0; i<n; i++){
        soma += vnotas[i];
    }

    m = soma/n;

    return m;
}

int main(){
    float vnotas[10];
    float media_notas;
    int i;

    for(i=0; i<10; i++){
        printf("Digite o valor da %dª nota: ", i+1);
        scanf("%f", &vnotas[i]);
    }

    media_notas = media(10, vnotas);

    printf("\nMédia = %.1f\n", media_notas);

    return 0;
}