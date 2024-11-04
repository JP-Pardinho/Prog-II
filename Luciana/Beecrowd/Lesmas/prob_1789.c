#include <stdio.h>

int main() {

    int qnt_lesmas, i, velocidade;
    int vetor_lesmas[500];


    while (scanf("%d", &qnt_lesmas) != EOF)
    {
        if (qnt_lesmas >= 1 && qnt_lesmas <= 500) {
            for (i = 0; i < qnt_lesmas; i++) {
                scanf("%d", &vetor_lesmas[i]);
            }

            velocidade = vetor_lesmas[0];

            for (i = 0; i < qnt_lesmas; i++) {
                if (vetor_lesmas[i] >= 1 && vetor_lesmas[i] <= 50) {
                    if (vetor_lesmas[i] > velocidade) {
                        velocidade = vetor_lesmas[i];
                    }
                }
            }

            if (velocidade < 10){
                printf("1\n");
            }
            else if (velocidade >= 10 && velocidade < 20) {
                printf("2\n");
            }
            else if (velocidade >= 20 && velocidade <= 50) {
                printf("3\n");
            }
        }
    }

    return 0;
}