#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[4] = {0};
    int x;

    scanf("%d", &x);

    while (x >= 0) {
        if(x <= 25){
            vetor[0] += 1;
        }
        else if(x <= 50){
            vetor[1] += 1;
        }
        else if(x <= 75){
            vetor[2] += 1;
        }
        else if(x <= 100){
            vetor[3] += 1;
        }
        else if(x < 0){
            break;
        }
        scanf("%d", &x);
    }

    printf(" 0-25 = %d\n 26-50 = %d\n 51-75 = %d\n 76-100 = %d\n", vetor[0], vetor[1], vetor[2], vetor[3]);
    


    return 0;
}