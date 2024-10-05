#include <stdio.h>

int main(){

    float notas[4];
    int i;

    for(i=1; i<=4; i++){
        printf("Digite a %dª nota do aulo: ", i);
        scanf("%f", &notas[i]);
    }

    for(i=1; i<=4; i++){
        printf("Nota %d = %.2f\n", i, notas[i]);
    }

    return 0;
}