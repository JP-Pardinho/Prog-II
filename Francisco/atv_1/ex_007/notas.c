#include <stdio.h>
#include <stdlib.h>

int main() {

    float media[10], notas[10][3];
    int i, j;

    for(i=0; i<10; i++){
        printf("%dº aluno: \n", i+1);
        for(j=0; j<3; j++){
            printf("Digite %dª nota do aluno: ", j+1);
            scanf("%f", &notas[i][j]);
            printf("\n");
        }
        printf("\n");
    }

    for(i=0; i<10; i++){
        for(j=0; j<3; j++){
            media[i] += notas[i][j];
        }
        media[i] = media[i] / 3;
    }

    for(i=0; i<10; i++){
        if(media[i] >= 7){
            printf("%dº aluno: Aprovado!\n", i+1);
            printf("Media = %2.f\n", media[i]);
        } else if (media[i] >= 4 && media[i] < 7){
            printf("%dº aluno: Fazer prova final!\n", i+1);
            printf("Media = %2.f\n", media[i]);
        } else{
            printf("%dº aluno: Reprovado!\n", i+1);
            printf("Media = %.2f\n", media[i]);
        }
    }

    return 0;
}