#include <stdio.h>

int main() {

    int i, j;
    int matriz[6][4];
    
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz 6x4\n");

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 

    printf("Matriz Transposta 4x6\n");
    for(j = 0; j < 4; j++){
        for(i =0; i < 6; i++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    printf("Matriz padrão 5x5\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}