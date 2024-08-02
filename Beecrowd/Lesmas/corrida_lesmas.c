#include <stdio.h>

int main() {

    int L, N, i;
    int maior_velo;


    do {
        scanf("%d", &L);
        if (L >= 1 && L <= 500) {
            for (i = 0; i < L; i++) {
                scanf("%d", &N);
                maior_velo = N;
                if (N >= 1 && N <= 50){
                    if (N > maior_velo) {
                        maior_velo = N;
                    }
                }
            }

            if (maior_velo < 10){
                printf("1\n");
            }
            else if (maior_velo >= 10 && maior_velo <= 20) {
                printf("2\n");
            }
            else {
                printf("3\n");
            }
        }
    } while (L >= 1 && L <= 500);

    return 0;
}